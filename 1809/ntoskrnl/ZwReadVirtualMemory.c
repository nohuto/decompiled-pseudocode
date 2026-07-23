/*
 * XREFs of ZwReadVirtualMemory @ 0x1401B8AD0
 * Callers:
 *     MmCopyMemory @ 0x1400EA8F0 (MmCopyMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReadVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T NumberOfBytesToRead,
        PSIZE_T NumberOfBytesRead)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
