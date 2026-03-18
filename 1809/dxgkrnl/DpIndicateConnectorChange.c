/*
 * XREFs of DpIndicateConnectorChange @ 0x1C0042D60
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C001E590 (DpiFdoHandleDisplayDetectControl.c)
 *     DpiFdoQueueConnectionChangePackage @ 0x1C0044628 (DpiFdoQueueConnectionChangePackage.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CFAB4 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpIndicateConnectorChange(PDEVICE_OBJECT DeviceObject)
{
  unsigned int v1; // ebx
  _DWORD *DeviceExtension; // r8
  signed __int32 v3; // eax
  signed __int32 v4; // edx
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  v1 = 0;
  if ( DeviceObject
    && (DeviceExtension = DeviceObject->DeviceExtension) != 0LL
    && DeviceExtension[4] == 1953656900
    && DeviceExtension[5] == 2 )
  {
    v3 = DeviceExtension[861];
    do
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange(DeviceExtension + 861, v3 | 1, v3);
    }
    while ( v4 != v3 );
    if ( (v3 & 2) == 0 )
    {
      WorkItem = IoAllocateWorkItem(DeviceObject);
      if ( WorkItem )
      {
        IoQueueWorkItemEx(WorkItem, DpiIndicateConnectorChangeWorkItem, DelayedWorkQueue, 0LL);
      }
      else
      {
        v7 = WdLogNewEntry5_WdLowResource(v6);
        *(_QWORD *)(v7 + 24) = 0LL;
        WdLogEvent5_WdLowResource(v7);
      }
    }
  }
  else
  {
    v1 = -1073741811;
    v8 = WdLogNewEntry5_WdError(DeviceObject);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
  }
  return v1;
}
