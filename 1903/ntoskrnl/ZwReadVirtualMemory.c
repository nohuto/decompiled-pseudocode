/*
 * XREFs of ZwReadVirtualMemory @ 0x1401C08B0
 * Callers:
 *     MmCopyMemory @ 0x1400F48A0 (MmCopyMemory.c)
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
