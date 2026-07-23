/*
 * XREFs of ZwReadVirtualMemory @ 0x1401C1430
 * Callers:
 *     MmCopyMemory @ 0x1400C7740 (MmCopyMemory.c)
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
