/*
 * XREFs of ZwSetLowEventPair @ 0x1401C3490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetLowEventPair(HANDLE EventPair)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventPair);
}
