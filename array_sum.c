#include <stdio.h>
int array_sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    fprintf(stdout, "%d\n", sum);
    return sum;  
}
int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    array_sum(numbers, size);
    return 0;
}