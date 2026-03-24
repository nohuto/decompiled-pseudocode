/*
 * XREFs of MouseToggleWaitWake @ 0x1C000458C
 * Callers:
 *     MouseClassWaitWakeComplete @ 0x1C0004050 (MouseClassWaitWakeComplete.c)
 *     MouseClassSetWmiDataBlock @ 0x1C000DC60 (MouseClassSetWmiDataBlock.c)
 *     MouseClassSetWmiDataItem @ 0x1C000DD00 (MouseClassSetWmiDataItem.c)
 * Callees:
 *     MouseToggleWaitWakeWorker @ 0x1C00046D0 (MouseToggleWaitWakeWorker.c)
 */

NTSTATUS __fastcall MouseToggleWaitWake(__int64 a1, char a2)
{
  struct _IO_REMOVE_LOCK *v2; // rsi
  NTSTATUS result; // eax
  _QWORD *PoolWithTag; // rbx
  struct _IO_WORKITEM *WorkItem; // rax

  v2 = (struct _IO_REMOVE_LOCK *)(a1 + 32);
  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 32), MouseToggleWaitWakeWorker, File, 1u, 0x20u);
  if ( result >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x20uLL, 0x43756F4Du);
    if ( PoolWithTag )
    {
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
      PoolWithTag[2] = WorkItem;
      if ( !WorkItem )
      {
        IoReleaseRemoveLockEx(v2, MouseToggleWaitWakeWorker, 0x20u);
        ExFreePoolWithTag(PoolWithTag, 0);
        return -1073741670;
      }
      PoolWithTag[1] = a1;
      *((_BYTE *)PoolWithTag + 24) = a2;
      if ( KeGetCurrentIrql() )
        IoQueueWorkItem(WorkItem, MouseToggleWaitWakeWorker, DelayedWorkQueue, PoolWithTag);
      else
        MouseToggleWaitWakeWorker(*(PDEVICE_OBJECT *)a1, PoolWithTag);
    }
    else
    {
      IoReleaseRemoveLockEx(v2, MouseToggleWaitWakeWorker, 0x20u);
    }
    return 0;
  }
  return result;
}
