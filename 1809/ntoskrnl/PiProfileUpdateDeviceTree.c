/*
 * XREFs of PiProfileUpdateDeviceTree @ 0x140832478
 * Callers:
 *     PpProfileCancelTransitioningDock @ 0x14083286C (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x140832914 (PpProfileCommitTransitioningDock.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

__int64 PiProfileUpdateDeviceTree()
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x20207050u);
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag->List.Flink = 0LL;
  PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))PiProfileUpdateDeviceTreeWorker;
  PoolWithTag->Parameter = PoolWithTag;
  ExQueueWorkItem(PoolWithTag, CriticalWorkQueue);
  return 0LL;
}
