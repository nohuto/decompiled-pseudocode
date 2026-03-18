/*
 * XREFs of ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006C3C
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00ED9A4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00EFBC8 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0133090 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DxgkInvalidateCache @ 0x1C020AB90 (DxgkInvalidateCache.c)
 *     ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C020E198 (-DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0215F30 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@I@Z @ 0x1C0219A38 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021BD00 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02205C0 (-VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0228890 (-VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C024C038 (DxgkSubmitCommandToHwQueueInternal.c)
 *     DxgkUpdateAllocationProperty @ 0x1C0255C60 (DxgkUpdateAllocationProperty.c)
 *     NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C0297F50 (NtDxgkGetAvailableTrackedWorkloadIndex.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C0298810 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01EC944 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01EFA3C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 */

DXGDEVICELOCKONAPPROPRIATETHREADMODEL *__fastcall DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL *this,
        struct DXGDEVICE *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  struct _KEVENT *v5; // rbx
  __int64 v6; // rbx
  __int64 v8; // rax
  struct _KEVENT *v9; // rcx
  __int64 v10; // rcx
  char v11; // bp
  bool v12; // zf
  char v13; // si
  __int64 v14; // rcx

  *(_QWORD *)this = a2;
  v3 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( *(int *)(v3 + 2184) >= 0x2000 || *(_BYTE *)(v3 + 2484) )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v8 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v8 + 24) = 2200LL;
      WdLogEvent5_WdAssertion(v8);
    }
    v4 = *((_DWORD *)DXGGLOBAL::m_pGlobal + 247);
  }
  else
  {
    v4 = 0;
  }
  *((_DWORD *)this + 2) = v4;
  v5 = *(struct _KEVENT **)(*(_QWORD *)this + 16LL);
  if ( *(_DWORD *)(*(_QWORD *)this + 328LL) == 2 )
  {
    if ( KeReadStateEvent(v5 + 4) )
      goto LABEL_7;
    v9 = v5 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v5 + 3) )
      goto LABEL_7;
    v9 = v5 + 3;
  }
  KeWaitForSingleObject(v9, Executive, 0, 0, 0LL);
LABEL_7:
  v6 = *(_QWORD *)this;
  if ( *((_DWORD *)this + 2) )
  {
    KeEnterCriticalRegion();
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v6 + 112, 0LL) )
      return this;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL) + 96LL));
    v13 = 1;
    v14 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL);
    if ( *(_DWORD *)(v14 + 136) == 1 )
      DXGADAPTER::WakeUpAdapter(v14, 0xFFFFFFFFLL);
    else
      v13 = 0;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v6 + 112));
    v12 = v13 == 0;
  }
  else
  {
    KeEnterCriticalRegion();
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v6 + 104), 0) )
      return this;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL) + 96LL));
    v10 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL);
    if ( *(_DWORD *)(v10 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v10, 0xFFFFFFFFLL);
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v10, &EventBlockThread);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v6 + 104), 1u);
    v12 = v11 == 0;
  }
  if ( !v12 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v6 + 16) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
  return this;
}
