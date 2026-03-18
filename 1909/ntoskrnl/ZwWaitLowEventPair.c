/*
 * XREFs of ZwWaitLowEventPair @ 0x1401C4630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitLowEventPair(HANDLE EventPairHandle)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EventPairHandle, v1, v2);
}
