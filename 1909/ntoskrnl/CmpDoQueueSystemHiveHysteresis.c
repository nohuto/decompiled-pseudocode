/*
 * XREFs of CmpDoQueueSystemHiveHysteresis @ 0x140826890
 * Callers:
 *     CmpUpdateSystemHiveHysteresis @ 0x14068C70C (CmpUpdateSystemHiveHysteresis.c)
 *     CmRegisterSystemHiveLimitCallback @ 0x14078C114 (CmRegisterSystemHiveLimitCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

char __fastcall CmpDoQueueSystemHiveHysteresis(int a1)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x20204D43u);
  if ( PoolWithTag )
  {
    PoolWithTag->List.Flink = 0LL;
    PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))CmpSystemHiveHysteresisWorker;
    CmpSystemHiveHysteresisHitRatio = a1;
    PoolWithTag->Parameter = PoolWithTag;
    ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    LOBYTE(PoolWithTag) = 1;
  }
  return (char)PoolWithTag;
}
