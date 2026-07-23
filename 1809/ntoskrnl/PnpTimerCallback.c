/*
 * XREFs of PnpTimerCallback @ 0x140289F00
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 */

void __fastcall PnpTimerCallback(__int64 a1, __int64 a2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 168), DelayedWorkQueue);
}
