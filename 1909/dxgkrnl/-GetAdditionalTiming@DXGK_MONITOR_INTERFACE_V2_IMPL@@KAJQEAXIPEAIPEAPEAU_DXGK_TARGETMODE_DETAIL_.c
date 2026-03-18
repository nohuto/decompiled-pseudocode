/*
 * XREFs of ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C017F2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DpiGetDxgAdapter @ 0x1C0014370 (DpiGetDxgAdapter.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C017F470 (-_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V2_IMPL::GetAdditionalTiming(
        __int64 a1,
        unsigned int a2,
        GUID *a3,
        struct _DXGK_TARGETMODE_DETAIL_TIMING **a4)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r14
  DXGADAPTER *DxgAdapter; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  DXGADAPTER *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  struct _FAST_MUTEX *v24; // rbx
  int MonitorInstance; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // edi
  unsigned int v30; // esi
  struct DXGMONITOR *v31; // rdi
  unsigned int AdditionalTiming; // eax
  struct _ERESOURCE *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  const GUID *v36; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // [rsp+20h] [rbp-20h] BYREF
  __int64 v47; // [rsp+28h] [rbp-18h]
  char v48; // [rsp+30h] [rbp-10h]
  struct DXGMONITOR *v49; // [rsp+70h] [rbp+30h] BYREF

  v46 = -1;
  v47 = 0LL;
  v7 = a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v48 = 1;
    v46 = 7059;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 7059);
  }
  else
  {
    v48 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v46, 7059LL);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v14 = v7;
  v10[3] = a1;
  v10[4] = v7;
  v10[5] = a3;
  v10[6] = a4;
  if ( !a3 || !a4 )
  {
    v38 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v38 + 24) = 0LL;
LABEL_22:
    WdLogEvent5_WdError(v38);
    v29 = -1073741811;
    goto LABEL_14;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, v11, v13);
  v19 = DxgAdapter;
  if ( !DxgAdapter )
  {
    v39 = WdLogNewEntry5_WdError(v17, v16, v18);
    *(_QWORD *)(v39 + 24) = a1;
    WdLogEvent5_WdError(v39);
    v29 = -1071775742;
    goto LABEL_14;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) || (v23 = *((_QWORD *)v19 + 319)) == 0 )
  {
    v38 = WdLogNewEntry5_WdError(v21, v20, v22);
    *(_QWORD *)(v38 + 24) = a1;
    goto LABEL_22;
  }
  v24 = *(struct _FAST_MUTEX **)(v23 + 96);
  if ( !v24 )
  {
    v38 = WdLogNewEntry5_WdError(v21, v20, v22);
    *(_QWORD *)(v38 + 24) = v19;
    goto LABEL_22;
  }
  v49 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v24, (unsigned int)v7, 0, &v49);
  v29 = -1073741275;
  v30 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    v40 = WdLogNewEntry5_WdDmmEvent(v27, v26);
    *(_QWORD *)(v40 + 24) = v14;
    *(_QWORD *)(v40 + 32) = v24;
    WdLogEvent5_WdDmmEvent(v40);
  }
  else if ( MonitorInstance < 0 )
  {
    v41 = WdLogNewEntry5_WdError(v27, v26, v28);
    *(_QWORD *)(v41 + 24) = v14;
    *(_QWORD *)(v41 + 32) = v24;
    WdLogEvent5_WdError(v41);
    v29 = v30;
  }
  else
  {
    v31 = v49;
    if ( !v49 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v27, v26);
      WdLogEvent5_WdAssertion(v42);
      v45 = WdLogNewEntry5_WdAssertion(v44, v43);
      WdLogEvent5_WdAssertion(v45);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v31 + 296), 1u);
    AdditionalTiming = DXGMONITOR::_GetAdditionalTiming(v31, &a3->Data1, a4);
    v33 = (struct _ERESOURCE *)((char *)v31 + 296);
    v29 = AdditionalTiming;
    ExReleaseResourceLite(v33);
    KeLeaveCriticalRegion();
  }
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v34);
  if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v35, &EventProfilerExit, v36, v46);
  return v29;
}
