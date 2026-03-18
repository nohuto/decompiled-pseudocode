/*
 * XREFs of CmpDiskFullWarning @ 0x14083442C
 * Callers:
 *     CmpLazyWriteWorker @ 0x140193390 (CmpLazyWriteWorker.c)
 *     CmpLoadHiveThread @ 0x140757530 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x140760BCC (CmpMountPreloadedHives.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

void CmpDiskFullWarning()
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  if ( !CmpDiskFullWorkerPopupDisplayed && CmpCannotWriteConfiguration && ExReadyForErrors && CmpProfileLoaded )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x20204D43u);
    if ( PoolWithTag )
    {
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))CmpDiskFullWarningWorker;
      CmpDiskFullWorkerPopupDisplayed = 1;
      PoolWithTag->Parameter = PoolWithTag;
      ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    }
  }
}
