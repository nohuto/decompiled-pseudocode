/*
 * XREFs of ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006EE8
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F09B8 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F2868 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0136900 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DxgkInvalidateCache @ 0x1C020B200 (DxgkInvalidateCache.c)
 *     ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C020E808 (-DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C02165A0 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@I@Z @ 0x1C021A0A8 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021C370 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0220C30 (-VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0228F00 (-VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C024C6B8 (DxgkSubmitCommandToHwQueueInternal.c)
 *     DxgkUpdateAllocationProperty @ 0x1C02562E0 (DxgkUpdateAllocationProperty.c)
 *     NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C0298360 (NtDxgkGetAvailableTrackedWorkloadIndex.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C0298C20 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01ECF74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01F006C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
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
  __int64 v10; // r8
  __int64 v11; // rcx
  char v12; // bp
  bool v13; // zf
  char v14; // si
  __int64 v15; // rcx

  *(_QWORD *)this = a2;
  v3 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( *(int *)(v3 + 2184) >= 0x2000 || *(_BYTE *)(v3 + 2484) )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v8 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v8 + 24) = 2201LL;
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
    v14 = 1;
    v15 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL);
    if ( *(_DWORD *)(v15 + 136) == 1 )
      DXGADAPTER::WakeUpAdapter(v15, 0xFFFFFFFFLL);
    else
      v14 = 0;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v6 + 112));
    v13 = v14 == 0;
  }
  else
  {
    KeEnterCriticalRegion();
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v6 + 104), 0) )
      return this;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL) + 96LL));
    v11 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL);
    if ( *(_DWORD *)(v11 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v11, 0xFFFFFFFFLL);
      v12 = 1;
    }
    else
    {
      v12 = 0;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v11, &EventBlockThread, v10, 40LL);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v6 + 104), 1u);
    v13 = v12 == 0;
  }
  if ( !v13 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v6 + 16) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
  return this;
}
