/*
 * XREFs of PopFanIrpComplete @ 0x140192490
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 */

__int64 __fastcall PopFanIrpComplete(__int64 a1, __int64 a2, __int64 a3)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a3 + 80), DelayedWorkQueue);
  return 3221225494LL;
}
