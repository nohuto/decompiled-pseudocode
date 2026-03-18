/*
 * XREFs of ZwSetQuotaInformationFile @ 0x1401BB550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock, Buffer);
}
