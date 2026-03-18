/*
 * XREFs of ?ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0107000
 * Callers:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046DC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00074E4 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C050 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00F66B0 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C00F6C90 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00F8460 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0100A10 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0101DA0 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z @ 0x1C010FA90 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0110150 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0114D80 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0115460 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C01160D0 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     DxgkRender @ 0x1C011C610 (DxgkRender.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0127AF4 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0134F10 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z @ 0x1C0136B40 (-DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C0137790 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01EBC48 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01EEFE8 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C01F515C (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@@Z @ 0x1C01F6494 (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0p @ 0x1C0035594 (McTemplateK0p.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0123444 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0245534 (-RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TY.c)
 */

void __fastcall DXGADAPTER::ReleaseCoreResource(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 CurrentProcess; // rax
  __int64 v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v19; // rcx
  const GUID *v20; // r8
  struct DXGGLOBAL *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  _BYTE v24[40]; // [rsp+30h] [rbp-28h] BYREF

  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 4140LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *(_QWORD *)(a1 + 160) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v9 + 24) = 4141LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *(_QWORD *)(a1 + 2560);
  if ( v10 && *(_BYTE *)(v10 + 536) )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    {
      v11 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v11 + 24) = 4149LL;
      WdLogEvent5_WdAssertion(v11);
    }
    v12 = *(_QWORD *)(a1 + 2560);
    if ( *(_QWORD *)(v12 + 528) )
    {
      ADAPTER_RENDER::ResumeScheduler(*(ADAPTER_RENDER **)(a1 + 2560), 1u, 0);
      v12 = *(_QWORD *)(a1 + 2560);
    }
    *(_BYTE *)(v12 + 536) = 0;
  }
  CurrentProcess = PsGetCurrentProcess(v7, v6);
  v14 = *(_QWORD *)(a1 + 200);
  v15 = CurrentProcess;
  Global = DXGGLOBAL::GetGlobal(v17, v16);
  v21 = Global;
  if ( v14 )
  {
    if ( v15 )
    {
      if ( *((_DWORD *)Global + 422) )
      {
        if ( *((_BYTE *)Global + 303824) )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGGLOBAL *)((char *)Global + 1696), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
          DripsBlockerTrackingHelper::RemoveProcessEntry((char *)v21 + 1744, v14, a3, v15, a2);
          if ( v24[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
        }
      }
    }
    else
    {
      v23 = WdLogNewEntry5_WdEvent(v19);
      *(_QWORD *)(v23 + 24) = 5198LL;
      WdLogEvent5_WdEvent(v23);
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdEvent(v19);
    *(_QWORD *)(v22 + 24) = 5192LL;
    WdLogEvent5_WdEvent(v22);
  }
  if ( bTracingEnabled
    && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
    && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
  {
    McTemplateK0p((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventReleaseAdapterLock, v20, a1);
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 144));
  KeLeaveCriticalRegion();
}
