/*
 * XREFs of KeyboardClassPoRequestComplete @ 0x1C0001330
 * Callers:
 *     <none>
 * Callees:
 *     KeyboardClassCheckWaitWakeEnabled @ 0x1C0004864 (KeyboardClassCheckWaitWakeEnabled.c)
 *     KeyboardClassLogError @ 0x1C0004B40 (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_q @ 0x1C0005C04 (WPP_RECORDER_SF_q.c)
 */

void __fastcall KeyboardClassPoRequestComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        IRP *Context)
{
  PVOID DeviceExtension; // rsi
  char v6; // bl
  POWER_STATE v7; // ebx
  KIRQL v8; // al
  bool v9; // di
  int v10; // edx
  _QWORD *PoolWithTag; // rdi
  int v12; // r8d
  PIO_WORKITEM WorkItem; // rax
  NTSTATUS v14; // eax
  struct _IO_WORKITEM *v15; // rcx
  ULONG RemlockSize; // [rsp+20h] [rbp-28h]

  DeviceExtension = DeviceObject->DeviceExtension;
  v6 = (char)DeviceObject;
  if ( Context )
  {
    v7.SystemState = (SYSTEM_POWER_STATE)Context->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
    PoSetPowerState(*(PDEVICE_OBJECT *)DeviceExtension, SystemPowerState, v7);
    *((POWER_STATE *)DeviceExtension + 48) = v7;
    PoStartNextPowerIrp(Context);
    ++Context->CurrentLocation;
    ++Context->Tail.Overlay.CurrentStackLocation;
    PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Context);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Context, 0x20u);
  }
  else if ( *((int *)DeviceExtension + 71) > 1 && *((int *)DeviceExtension + 72) > 1 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeviceExtension + 9);
    v9 = *((_QWORD *)DeviceExtension + 37) && !*((_BYTE *)DeviceExtension + 304);
    KeReleaseSpinLock((PKSPIN_LOCK)DeviceExtension + 9, v8);
    if ( !v9 )
    {
      if ( (unsigned __int8)KeyboardClassCheckWaitWakeEnabled(DeviceExtension) )
      {
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x20uLL, 0x4364624Bu);
        if ( PoolWithTag )
        {
          WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)DeviceExtension);
          PoolWithTag[2] = WorkItem;
          if ( WorkItem )
          {
            PoolWithTag[1] = DeviceExtension;
            *PoolWithTag = 0LL;
            v14 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, PoolWithTag, File, 1u, 0x20u);
            v15 = (struct _IO_WORKITEM *)PoolWithTag[2];
            if ( v14 >= 0 )
            {
              IoQueueWorkItem(v15, KeyboardClassCreateWaitWakeIrpWorker, DelayedWorkQueue, PoolWithTag);
              return;
            }
            IoFreeWorkItem(v15);
          }
          ExFreePoolWithTag(PoolWithTag, 0);
        }
        WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, v10, v12, 96, RemlockSize, v6);
        KeyboardClassLogError(*(_QWORD *)DeviceExtension, -2147155954, 1, -1073741670, 0, 0LL, 0);
      }
    }
  }
}
