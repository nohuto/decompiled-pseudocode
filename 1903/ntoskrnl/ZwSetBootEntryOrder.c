/*
 * XREFs of ZwSetBootEntryOrder @ 0x1401C30F0
 * Callers:
 *     BiSetBootEntryOrder @ 0x140932220 (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetBootEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
