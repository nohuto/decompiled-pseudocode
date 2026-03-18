/*
 * XREFs of ZwSetBootEntryOrder @ 0x1401C3C70
 * Callers:
 *     BiSetBootEntryOrder @ 0x140931C94 (BiSetBootEntryOrder.c)
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
