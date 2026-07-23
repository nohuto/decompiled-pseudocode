/*
 * XREFs of PopWakeInfoDereference @ 0x1401586E0
 * Callers:
 *     PopTimeoutWakeTracking @ 0x1401584EC (PopTimeoutWakeTracking.c)
 *     PopDereferenceWakeInfos @ 0x14015865C (PopDereferenceWakeInfos.c)
 *     PopUpdateWakeSourceWorker @ 0x1402DC050 (PopUpdateWakeSourceWorker.c)
 *     PopNewWakeInfo @ 0x140567640 (PopNewWakeInfo.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 */

void __fastcall PopWakeInfoDereference(__int64 a1)
{
  struct _WORK_QUEUE_ITEM *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), 0xFFFFFFFF) == 1 )
  {
    v2 = (struct _WORK_QUEUE_ITEM *)(a1 + 48);
    v2->Parameter = (void *)a1;
    v2->List.Flink = 0LL;
    v2->WorkerRoutine = (void (__fastcall *)(void *))PopFreeWakeInfo;
    ExQueueWorkItem(v2, DelayedWorkQueue);
  }
}
