/*
 * XREFs of ZwWriteVirtualMemory @ 0x1401C1390
 * Callers:
 *     SepAdtCopyToLsaSharedMemory @ 0x1408E26F8 (SepAdtCopyToLsaSharedMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWriteVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T NumberOfBytesToWrite,
        PSIZE_T NumberOfBytesWritten)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
