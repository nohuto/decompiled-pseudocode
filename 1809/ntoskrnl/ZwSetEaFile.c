/*
 * XREFs of ZwSetEaFile @ 0x1401BB2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEaFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID Buffer, ULONG Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock, Buffer);
}
