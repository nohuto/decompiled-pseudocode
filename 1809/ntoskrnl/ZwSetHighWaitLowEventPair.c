/*
 * XREFs of ZwSetHighWaitLowEventPair @ 0x1401BB310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetHighWaitLowEventPair(HANDLE EventPairHandle)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EventPairHandle, v1, v2);
}
