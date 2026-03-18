/*
 * XREFs of CmpDiskFullWarning @ 0x140833A8C
 * Callers:
 *     CmpLazyWriteWorker @ 0x140193B70 (CmpLazyWriteWorker.c)
 *     CmpLoadHiveThread @ 0x14075BB10 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407655D4 (CmpMountPreloadedHives.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
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
