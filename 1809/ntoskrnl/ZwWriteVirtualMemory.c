/*
 * XREFs of ZwWriteVirtualMemory @ 0x1401B88B0
 * Callers:
 *     SepAdtCopyToLsaSharedMemory @ 0x1408A46C8 (SepAdtCopyToLsaSharedMemory.c)
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
  return KiServiceInternal(ProcessHandle, BaseAddress, Buffer);
}
