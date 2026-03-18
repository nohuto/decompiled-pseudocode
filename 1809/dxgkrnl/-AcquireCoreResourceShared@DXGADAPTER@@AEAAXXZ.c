/*
 * XREFs of ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60
 * Callers:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DxgkReclaimAllocations2 @ 0x1C00B0D70 (DxgkReclaimAllocations2.c)
 *     ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C00B10C0 (-DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00BCFF8 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     DxgkGetPresentHistory @ 0x1C00DB730 (DxgkGetPresentHistory.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00FA060 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00FA690 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00FC840 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     DxgkLock @ 0x1C00FE020 (DxgkLock.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00FE8E0 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00FFD40 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0101F10 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     DxgkLock2 @ 0x1C0102FB0 (DxgkLock2.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0103B30 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     DxgkUnlock2 @ 0x1C0106F60 (DxgkUnlock2.c)
 *     DxgkOfferAllocations @ 0x1C01079F0 (DxgkOfferAllocations.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C01093F0 (DxgkMapGpuVirtualAddress.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C010D030 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C01109C0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@@Z @ 0x1C0115420 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@@Z.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C0117BC0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     DxgkSetQueuedLimit @ 0x1C01216D0 (DxgkSetQueuedLimit.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C01235A0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     DxgkUnlock @ 0x1C0124840 (DxgkUnlock.c)
 *     DxgkPresent @ 0x1C01251E0 (DxgkPresent.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C01262F0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0126C60 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkReclaimAllocations @ 0x1C01271D0 (DxgkReclaimAllocations.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C0127CC0 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     McTemplateK0pt @ 0x1C00303E4 (McTemplateK0pt.c)
 *     McTemplateK0xptq @ 0x1C003C148 (McTemplateK0xptq.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXXZ @ 0x1C01C047C (-WakeUpAdapter@DXGADAPTER@@QEAAXXZ.c)
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C020E020 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireCoreResourceShared(DXGADAPTER *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  const GUID *v4; // r8
  __int64 CurrentProcess; // rax
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGGLOBAL *v12; // rbp
  char v13; // si
  const GUID *v14; // r8
  const GUID *v15; // r8
  __int64 v16; // rax
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // [rsp+20h] [rbp-38h]
  _BYTE v23[24]; // [rsp+40h] [rbp-18h] BYREF

  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)this + 18)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v16 + 24) = 3843LL;
    WdLogEvent5_WdAssertion(v16);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)this + 96, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v17 = *((_DWORD *)this + 28);
      if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v3, &EventBlockThread, v4, v17);
    }
    ExAcquirePushLockSharedEx((char *)this + 96, 0LL);
  }
  CurrentProcess = PsGetCurrentProcess();
  v6 = *((_QWORD *)this + 25);
  v7 = CurrentProcess;
  Global = DXGGLOBAL::GetGlobal(v8);
  v12 = Global;
  if ( v6 )
  {
    if ( v7 )
    {
      if ( *((_DWORD *)Global + 430) )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGGLOBAL *)((char *)Global + 1736), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
        DripsBlockerTrackingHelper::AddProcessEntry((char *)v12 + 1800, v6, v7, 0xFFFFFFFFLL);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          McTemplateK0xptq(v20, &StartDripsBlockerTracking, v21, v6, v7);
        if ( v23[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdEvent(v11, v10);
      *(_QWORD *)(v19 + 24) = 4909LL;
      WdLogEvent5_WdEvent(v19);
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdEvent(v11, v10);
    *(_QWORD *)(v18 + 24) = 4903LL;
    WdLogEvent5_WdEvent(v18);
  }
  if ( *((_DWORD *)this + 34) == 1 )
  {
    DXGADAPTER::WakeUpAdapter(this);
    v13 = 1;
  }
  else
  {
    v13 = 0;
  }
  KeEnterCriticalRegion();
  if ( bTracingEnabled
    && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
    && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
  {
    LODWORD(v22) = 0;
    McTemplateK0pt((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v14, this, v22);
  }
  ExAcquireResourceSharedLite(*((PERESOURCE *)this + 18), 1u);
  if ( bTracingEnabled
    && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
    && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
  {
    LODWORD(v22) = 1;
    McTemplateK0pt(
      (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
      &EventPostAcquireAdapterLock,
      v15,
      this,
      v22);
  }
  if ( v13 && *((_DWORD *)this + 44) == 1 )
    DpiEnableD3Requests(*((_QWORD *)this + 24));
  ExReleasePushLockSharedEx((char *)this + 96, 0LL);
  KeLeaveCriticalRegion();
}
