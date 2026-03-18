/*
 * XREFs of IoQueueWorkItem @ 0x140080B20
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemFromIo @ 0x140080600 (ExQueueWorkItemFromIo.c)
 *     IopQueueWorkItemProlog @ 0x140080A04 (IopQueueWorkItemProlog.c)
 */

void __stdcall IoQueueWorkItem(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  _QWORD *v5; // rax

  IoWorkItem->Type = 0;
  v5 = (_QWORD *)IopQueueWorkItemProlog((__int64)IoWorkItem, (__int64)WorkerRoutine, (__int64)Context);
  ExQueueWorkItemFromIo(v5, QueueType);
}
