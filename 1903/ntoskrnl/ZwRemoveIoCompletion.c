/*
 * XREFs of ZwRemoveIoCompletion @ 0x1401C01F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRemoveIoCompletion(
        HANDLE IoCompletionHandle,
        PVOID *CompletionKey,
        PVOID *CompletionContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoCompletionHandle);
}
