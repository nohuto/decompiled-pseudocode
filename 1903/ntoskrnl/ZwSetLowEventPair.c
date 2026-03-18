/*
 * XREFs of ZwSetLowEventPair @ 0x1401C3490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetLowEventPair(HANDLE EventPair)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EventPair, v1, v2);
}
