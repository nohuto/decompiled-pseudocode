/*
 * XREFs of ZwCancelIoFile @ 0x1401C17F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCancelIoFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock, v2);
}
