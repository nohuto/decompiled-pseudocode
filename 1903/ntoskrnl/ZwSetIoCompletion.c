/*
 * XREFs of ZwSetIoCompletion @ 0x1401C3430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetIoCompletion(
        HANDLE IoCompletionPortHandle,
        PVOID CompletionKey,
        PVOID CompletionContext,
        NTSTATUS CompletionStatus,
        ULONG CompletionInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoCompletionPortHandle);
}
