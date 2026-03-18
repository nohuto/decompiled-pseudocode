/*
 * XREFs of PerfDiagpRequestState @ 0x140720948
 * Callers:
 *     PerfDiagpBootUserProxyCallback @ 0x140720920 (PerfDiagpBootUserProxyCallback.c)
 *     PerfDiagpBootSystemProxyCallback @ 0x14078CC50 (PerfDiagpBootSystemProxyCallback.c)
 *     PerfDiagpSecondaryLogonProxyCallback @ 0x1408EDB60 (PerfDiagpSecondaryLogonProxyCallback.c)
 *     PerfDiagpShutdownProxyCallback @ 0x1408EDB90 (PerfDiagpShutdownProxyCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

void __fastcall PerfDiagpRequestState(int a1)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  if ( a1 < 8 )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x64465250u);
    if ( PoolWithTag )
    {
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))PerfDiagpProxyWorker;
      PoolWithTag->Parameter = PoolWithTag;
      LODWORD(PoolWithTag[1].List.Flink) = a1;
      ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    }
  }
}
