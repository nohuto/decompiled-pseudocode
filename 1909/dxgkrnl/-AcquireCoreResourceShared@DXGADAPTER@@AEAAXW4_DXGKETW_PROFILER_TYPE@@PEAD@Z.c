/*
 * XREFs of ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0
 * Callers:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00D1B00 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     DxgkLock @ 0x1C00E0EA0 (DxgkLock.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F6790 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F72E0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F83F0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00FB380 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C00FB960 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00FD130 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C0103F20 (DxgkGetPresentHistoryInternal.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0105B60 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0106EF0 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0107E60 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     DxgkUnlock2 @ 0x1C0108FF0 (DxgkUnlock2.c)
 *     DxgkLock2 @ 0x1C0109B90 (DxgkLock2.c)
 *     DxgkPresent @ 0x1C010F1E0 (DxgkPresent.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C010FE00 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkOfferAllocations @ 0x1C0111A00 (DxgkOfferAllocations.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C0114BB0 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z @ 0x1C0116B20 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C01171E0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C011A6D0 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C011EBA0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     DxgkRender @ 0x1C0120C10 (DxgkRender.c)
 *     DxgkUnlock @ 0x1C0134740 (DxgkUnlock.c)
 *     DxgkReclaimAllocations @ 0x1C01350C0 (DxgkReclaimAllocations.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0135640 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0138C60 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkSetQueuedLimit @ 0x1C01392C0 (DxgkSetQueuedLimit.c)
 *     DxgkReclaimAllocations2 @ 0x1C0139700 (DxgkReclaimAllocations2.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C0139AA0 (DxgkMapGpuVirtualAddress.c)
 *     ?DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z @ 0x1C013A890 (-DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C013B4E0 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z.c)
 *     DxgkGetScanLine @ 0x1C0151A40 (DxgkGetScanLine.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C0008B54 (DpiEnableD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x1C0014420 (-wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pt @ 0x1C0035D44 (McTemplateK0pt.c)
 *     ?Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1C014954C (-Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ.c)
 *     ??0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C014990C (--0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01F006C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02419A0 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@.c)
 */

void __fastcall DXGADAPTER::AcquireCoreResourceShared(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  const GUID *v11; // r8
  int v12; // r9d
  __int64 CurrentProcess; // rax
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v19; // rcx
  struct DXGGLOBAL *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  char v23; // r14
  const GUID *v24; // r8
  int v25; // esi
  signed __int32 v26; // edi
  const GUID *v27; // r8
  bool v28; // zf
  __int64 v29; // [rsp+20h] [rbp-E0h]
  signed __int32 v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v32; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+70h] [rbp-90h]
  _BYTE v34[16]; // [rsp+78h] [rbp-88h] BYREF
  __int128 *v35; // [rsp+88h] [rbp-78h] BYREF
  int v36; // [rsp+90h] [rbp-70h]
  int v37; // [rsp+94h] [rbp-6Ch]
  _BYTE DeferredContext[320]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v39; // [rsp+1E0h] [rbp+E0h] BYREF
  int v40; // [rsp+1E8h] [rbp+E8h]
  __int64 v41; // [rsp+1ECh] [rbp+ECh]
  int v42; // [rsp+1F4h] [rbp+F4h]
  __int128 v43; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v44; // [rsp+208h] [rbp+108h]

  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 3891LL;
    WdLogEvent5_WdAssertion(v8);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(a1 + 96, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v12 = *(_DWORD *)(a1 + 112);
      if ( v12 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v10, &EventBlockThread, v11, v12);
    }
    ExAcquirePushLockSharedEx(a1 + 96, 0LL);
  }
  CurrentProcess = PsGetCurrentProcess(v10, v9);
  v14 = *(_QWORD *)(a1 + 200);
  v15 = CurrentProcess;
  Global = DXGGLOBAL::GetGlobal(v17, v16);
  v20 = Global;
  if ( v14 )
  {
    if ( v15 )
    {
      if ( *((_DWORD *)Global + 422) )
      {
        if ( *((_BYTE *)Global + 303824) )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v34, (struct DXGGLOBAL *)((char *)Global + 1696), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
          DripsBlockerTrackingHelper::AddProcessEntry((char *)v20 + 1744, v14, a3, v15, a2);
          if ( v34[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34);
        }
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdEvent(v19);
      *(_QWORD *)(v22 + 24) = 5162LL;
      WdLogEvent5_WdEvent(v22);
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdEvent(v19);
    *(_QWORD *)(v21 + 24) = 5156LL;
    WdLogEvent5_WdEvent(v21);
  }
  if ( *(_DWORD *)(a1 + 136) == 1 )
  {
    DXGADAPTER::WakeUpAdapter(a1, a2);
    v23 = 1;
  }
  else
  {
    v23 = 0;
  }
  KeEnterCriticalRegion();
  if ( bTracingEnabled
    && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
    && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
  {
    LODWORD(v29) = 0;
    McTemplateK0pt((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v24, a1, v29);
  }
  v25 = (Feature_DeadlockTracking__private_propertyCache >> 4) & 3;
  v30 = 0x10000;
  v31 = 3;
  v32 = 0uLL;
  v33 = 0LL;
  v35 = &v32;
  v36 = 0x10000;
  v37 = 0;
  while ( 1 )
  {
    v30 = Feature_DeadlockTracking__private_propertyCache;
    v26 = Feature_DeadlockTracking__private_propertyCache;
    if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)&v30, &v35) )
      break;
    if ( v26 == _InterlockedCompareExchange(
                  (volatile signed __int32 *)&Feature_DeadlockTracking__private_propertyCache,
                  v30,
                  v26) )
    {
      LODWORD(v33) = 0;
      goto LABEL_30;
    }
  }
  LODWORD(v33) = 1;
LABEL_30:
  v44 = v33;
  v43 = v32;
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(18756255LL, 2LL, 1LL, &Feature_DeadlockTracking__private_propertyCache, &v43);
    if ( v25 == 2 )
    {
      v42 = (Feature_DeadlockTracking__private_propertyCache >> 2) & 1;
      v39 = 0LL;
      v41 = 0LL;
      v40 = 2;
      g_wil_details_recordFeatureUsage(18756255LL, 2LL, 1LL, 0LL, &v39);
    }
  }
  if ( !(_DWORD)v44 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0x11E329Fu,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006E0A0,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v31,
      0LL,
      0,
      1uLL);
  if ( !ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 144), 0) )
  {
    DXGDEADLOCK_TRACKER::DXGDEADLOCK_TRACKER(DeferredContext, (struct DXGADAPTER *)a1);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 144), 1u);
    DXGDEADLOCK_TRACKER::Cancel((DXGDEADLOCK_TRACKER *)DeferredContext);
  }
  v28 = bTracingEnabled == 0;
  *(_DWORD *)(a1 + 4364) = 0;
  *(_DWORD *)(a1 + 4368) = a2;
  if ( !v28
    && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
    && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
  {
    LODWORD(v29) = 1;
    McTemplateK0pt((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v27, a1, v29);
  }
  if ( v23 && *(_DWORD *)(a1 + 176) == 1 )
    DpiEnableD3Requests(*(_QWORD *)(a1 + 192));
  ExReleasePushLockSharedEx(a1 + 96, 0LL);
  KeLeaveCriticalRegion();
}
