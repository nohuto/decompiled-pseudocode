/*
 * XREFs of RtlpCtQueueWorkItem @ 0x14089AB70
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1402F5890 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 */

void __fastcall RtlpCtQueueWorkItem(struct _WORK_QUEUE_ITEM *a1)
{
  ExQueueWorkItem(a1, DelayedWorkQueue);
}
