/*
 * XREFs of NtQueryVirtualMemory @ 0x140606440
 * Callers:
 *     <none>
 * Callees:
 *     MmQueryVirtualMemory @ 0x140606470 (MmQueryVirtualMemory.c)
 */

NTSTATUS __stdcall NtQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  return MmQueryVirtualMemory(ProcessHandle, MemoryInformationLength, (__int64)ReturnLength, 2);
}
