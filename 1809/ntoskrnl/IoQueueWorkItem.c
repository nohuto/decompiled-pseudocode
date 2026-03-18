/*
 * XREFs of IoQueueWorkItem @ 0x14012ADF0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemFromIo @ 0x1400D1684 (ExQueueWorkItemFromIo.c)
 *     IopQueueWorkItemProlog @ 0x1400D1AC8 (IopQueueWorkItemProlog.c)
 */

void __stdcall IoQueueWorkItem(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  __int64 *v5; // rax

  IoWorkItem->Type = 0;
  v5 = (__int64 *)IopQueueWorkItemProlog((__int64)IoWorkItem, (__int64)WorkerRoutine, (__int64)Context);
  ExQueueWorkItemFromIo(v5, QueueType);
}
