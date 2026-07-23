/*
 * XREFs of ZwSetBootEntryOrder @ 0x1401BB2F0
 * Callers:
 *     BiSetBootEntryOrder @ 0x1408F57FC (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetBootEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
