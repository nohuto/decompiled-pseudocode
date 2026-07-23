/*
 * XREFs of ZwSetBootEntryOrder @ 0x1401C3C70
 * Callers:
 *     BiSetBootEntryOrder @ 0x140931C94 (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetBootEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
