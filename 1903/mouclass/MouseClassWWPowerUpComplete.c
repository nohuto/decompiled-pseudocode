/*
 * XREFs of MouseClassWWPowerUpComplete @ 0x1C00050D0
 * Callers:
 *     <none>
 * Callees:
 *     MouseClassLogError @ 0x1C00045F4 (MouseClassLogError.c)
 *     WPP_RECORDER_SF_q @ 0x1C00058AC (WPP_RECORDER_SF_q.c)
 */

void __fastcall MouseClassWWPowerUpComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context)
{
  int v5; // edx
  _QWORD *PoolWithTag; // rbx
  int v7; // r8d
  PIO_WORKITEM WorkItem; // rax
  NTSTATUS v9; // eax
  struct _IO_WORKITEM *v10; // rcx

  if ( *((_BYTE *)Context + 345) )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x20uLL, 0x43756F4Du);
    if ( PoolWithTag )
    {
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)Context);
      PoolWithTag[2] = WorkItem;
      if ( WorkItem )
      {
        *PoolWithTag = 0LL;
        PoolWithTag[1] = Context;
        v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)Context + 1, PoolWithTag, File, 1u, 0x20u);
        v10 = (struct _IO_WORKITEM *)PoolWithTag[2];
        if ( v9 < 0 )
        {
          IoFreeWorkItem(v10);
          ExFreePoolWithTag(PoolWithTag, 0);
        }
        else
        {
          IoQueueWorkItem(v10, MouseClassCreateWaitWakeIrpWorker, DelayedWorkQueue, PoolWithTag);
        }
        return;
      }
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, v5, v7, 86);
    MouseClassLogError(*(void **)Context, -2147155954, 1, -1073741670, 0, 0LL, 0);
  }
}
