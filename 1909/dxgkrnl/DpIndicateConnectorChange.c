/*
 * XREFs of DpIndicateConnectorChange @ 0x1C004A260
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C001E240 (DpiFdoHandleDisplayDetectControl.c)
 *     DpiFdoQueueConnectionChangePackage @ 0x1C001E974 (DpiFdoQueueConnectionChangePackage.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0128B44 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpIndicateConnectorChange(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  char v5; // r14
  char v6; // bp
  char *DeviceExtension; // rdi
  KSPIN_LOCK *v8; // rcx
  int v9; // eax
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  v5 = 0;
  v6 = 0;
  if ( DeviceObject
    && (DeviceExtension = (char *)DeviceObject->DeviceExtension) != 0LL
    && *((_DWORD *)DeviceExtension + 4) == 1953656900
    && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v8 = (KSPIN_LOCK *)(DeviceExtension + 3520);
    if ( KeGetCurrentIrql() >= 2u )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v8, &LockHandle);
    }
    else
    {
      v5 = 1;
      KeAcquireInStackQueuedSpinLock(v8, &LockHandle);
    }
    v9 = *((_DWORD *)DeviceExtension + 879);
    if ( (v9 & 2) == 0 )
    {
      v6 = 1;
      KeClearEvent((PRKEVENT)DeviceExtension + 147);
      v9 = *((_DWORD *)DeviceExtension + 879);
    }
    *((_DWORD *)DeviceExtension + 879) = v9 | 1;
    if ( v5 )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( v6 )
    {
      WorkItem = IoAllocateWorkItem(DeviceObject);
      if ( WorkItem )
      {
        IoQueueWorkItemEx(WorkItem, DpiIndicateConnectorChangeWorkItem, DelayedWorkQueue, 0LL);
      }
      else
      {
        v15 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
        *(_QWORD *)(v15 + 24) = 0LL;
        WdLogEvent5_WdLowResource(v15);
      }
    }
  }
  else
  {
    v3 = -1073741811;
    v16 = WdLogNewEntry5_WdError(DeviceObject, a2, a3);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v16);
  }
  return v3;
}
