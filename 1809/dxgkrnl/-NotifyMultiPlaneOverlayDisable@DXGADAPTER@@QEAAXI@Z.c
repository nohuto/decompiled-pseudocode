/*
 * XREFs of ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x1C002DB64
 * Callers:
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x1C0038830 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?HandleAdapterMultiPlaneDisableEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01BDB40 (-HandleAdapterMultiPlaneDisableEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 */

void __fastcall DXGADAPTER::NotifyMultiPlaneOverlayDisable(DXGADAPTER *this, int a2)
{
  _QWORD *PoolWithTag; // rax
  __int64 v5; // rcx
  void *v6; // rbx
  __int64 v7; // rax
  struct _DEVICE_OBJECT *v8; // rcx
  struct _IO_WORKITEM *WorkItem; // rdi
  __int64 v10; // rax

  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x4B677844u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v7 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v7 + 24) = 2352LL;
LABEL_3:
    WdLogEvent5_WdLowResource(v7);
    return;
  }
  *PoolWithTag = this;
  *((_DWORD *)PoolWithTag + 2) = a2;
  *((_DWORD *)PoolWithTag + 3) = PsGetCurrentProcessSessionId(v5);
  v8 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 24);
  if ( KeGetCurrentIrql() >= 2u )
  {
    WorkItem = IoAllocateWorkItem(v8);
    if ( !WorkItem )
    {
      v7 = WdLogNewEntry5_WdLowResource();
      *(_QWORD *)(v7 + 24) = 2372LL;
      goto LABEL_3;
    }
    v10 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v10 + 24) = 2376LL;
    WdLogEvent5_WdEvent(v10);
    IoQueueWorkItemEx(WorkItem, HandleAdapterMultiPlaneDisableEvent, DelayedWorkQueue, v6);
  }
  else
  {
    HandleAdapterMultiPlaneDisableEvent(v8, v6, 0LL);
  }
}
