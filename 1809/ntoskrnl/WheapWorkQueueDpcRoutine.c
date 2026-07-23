/*
 * XREFs of WheapWorkQueueDpcRoutine @ 0x1403213D0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 */

void __fastcall WheapWorkQueueDpcRoutine(__int64 a1, struct _WORK_QUEUE_ITEM *a2)
{
  ExQueueWorkItem(a2 + 3, DelayedWorkQueue);
}
