/*
 * XREFs of PnpTimerCallback @ 0x1402A0030
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 */

void __fastcall PnpTimerCallback(__int64 a1, __int64 a2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 168), DelayedWorkQueue);
}
