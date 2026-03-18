/*
 * XREFs of ZwSetBootEntryOrder @ 0x1401BB170
 * Callers:
 *     BiSetBootEntryOrder @ 0x1408F455C (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetBootEntryOrder(PULONG Ids, PULONG Count)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Ids, Count, v2);
}
