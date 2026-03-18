/*
 * XREFs of ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C015B020
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DpiGetDxgAdapter @ 0x1C0010BE0 (DpiGetDxgAdapter.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C015B1C4 (-_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z.c)
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
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r14
  DXGADAPTER *DxgAdapter; // rax
  __int64 v16; // rcx
  DXGADAPTER *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _FAST_MUTEX *v20; // rbx
  unsigned int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  int MonitorInstance; // esi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rcx
  const GUID *v29; // r8
  struct DXGMONITOR *v31; // rdi
  unsigned int AdditionalTiming; // eax
  struct _ERESOURCE *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // [rsp+20h] [rbp-20h] BYREF
  __int64 v41; // [rsp+28h] [rbp-18h]
  char v42; // [rsp+30h] [rbp-10h]
  struct DXGMONITOR *v43; // [rsp+70h] [rbp+30h] BYREF

  v40 = -1;
  v41 = 0LL;
  v7 = a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v42 = 1;
    v40 = 7059;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 7059);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 7059);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v14 = v7;
  v12[3] = a1;
  v12[4] = v7;
  v12[5] = a3;
  v12[6] = a4;
  if ( !a3 || !a4 )
  {
    v34 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v34 + 24) = 0LL;
LABEL_23:
    WdLogEvent5_WdError(v34);
    v21 = -1073741811;
    goto LABEL_11;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v17 = DxgAdapter;
  if ( !DxgAdapter )
  {
    v35 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v35 + 24) = a1;
    WdLogEvent5_WdError(v35);
    v21 = -1071775742;
    goto LABEL_11;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) || (v19 = *((_QWORD *)v17 + 315)) == 0 )
  {
    v34 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v34 + 24) = a1;
    goto LABEL_23;
  }
  v20 = *(struct _FAST_MUTEX **)(v19 + 96);
  if ( !v20 )
  {
    v34 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v34 + 24) = v17;
    goto LABEL_23;
  }
  v43 = 0LL;
  v21 = -1073741275;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v20, v7, 0, &v43);
  if ( MonitorInstance == -1073741275 )
  {
    v27 = WdLogNewEntry5_WdDmmEvent(v23, v22, v25, v26);
    *(_QWORD *)(v27 + 24) = v14;
    *(_QWORD *)(v27 + 32) = v20;
    WdLogEvent5_WdDmmEvent(v27);
  }
  else if ( MonitorInstance < 0 )
  {
    v36 = WdLogNewEntry5_WdError(v23);
    *(_QWORD *)(v36 + 24) = v14;
    *(_QWORD *)(v36 + 32) = v20;
    WdLogEvent5_WdError(v36);
    v21 = MonitorInstance;
  }
  else
  {
    v31 = v43;
    if ( !v43 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v23);
      WdLogEvent5_WdAssertion(v37);
      v39 = WdLogNewEntry5_WdAssertion(v38);
      WdLogEvent5_WdAssertion(v39);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v31 + 296), 1u);
    AdditionalTiming = DXGMONITOR::_GetAdditionalTiming(v31, &a3->Data1, a4);
    v33 = (struct _ERESOURCE *)((char *)v31 + 296);
    v21 = AdditionalTiming;
    ExReleaseResourceLite(v33);
    KeLeaveCriticalRegion();
  }
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, v40);
  return v21;
}
