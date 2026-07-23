/*
 * XREFs of EtwpTiAsyncVadQueryEventWrite @ 0x140312F14
 * Callers:
 *     EtwpTiVadQueryEventWrite @ 0x140313154 (EtwpTiVadQueryEventWrite.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     EtwpTiAllocVadQueryEventWriteWorkItemContext @ 0x140312D40 (EtwpTiAllocVadQueryEventWriteWorkItemContext.c)
 */

void __fastcall EtwpTiAsyncVadQueryEventWrite(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        void *a5,
        unsigned int a6,
        __int64 a7)
{
  PWORK_QUEUE_ITEM v7; // rcx
  PWORK_QUEUE_ITEM WorkItem[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( (int)EtwpTiAllocVadQueryEventWriteWorkItemContext(a1, a2, a3, a4, a5, a6, a7, WorkItem) >= 0 )
  {
    v7 = WorkItem[0];
    WorkItem[0]->List.Flink = 0LL;
    v7->WorkerRoutine = (void (__fastcall *)(void *))EtwpTiVadQueryEventWriteCallback;
    v7->Parameter = v7;
    ExQueueWorkItem(v7, DelayedWorkQueue);
  }
}
