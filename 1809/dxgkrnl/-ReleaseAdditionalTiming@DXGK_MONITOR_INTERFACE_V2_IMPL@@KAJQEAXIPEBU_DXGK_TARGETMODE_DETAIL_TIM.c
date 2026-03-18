/*
 * XREFs of ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C015DB80
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DpiGetDxgAdapter @ 0x1C0010BE0 (DpiGetDxgAdapter.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V2_IMPL::ReleaseAdditionalTiming(__int64 a1, unsigned int a2, const GUID *a3)
{
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rcx
  DXGADAPTER *DxgAdapter; // rax
  __int64 v13; // rcx
  DXGADAPTER *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rsi
  struct _FAST_MUTEX *v17; // rsi
  int MonitorInstance; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // ebx
  unsigned int v24; // edi
  struct DXGMONITOR *v25; // rbx
  __int64 v26; // rcx
  int v27; // eax
  struct _ERESOURCE *v28; // rcx
  __int64 v29; // rcx
  const GUID *v30; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // [rsp+20h] [rbp-20h] BYREF
  __int64 v41; // [rsp+28h] [rbp-18h]
  char v42; // [rsp+30h] [rbp-10h]
  struct DXGMONITOR *v43; // [rsp+60h] [rbp+20h] BYREF

  v40 = -1;
  v41 = 0LL;
  v5 = a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v42 = 1;
    v40 = 7060;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 7060);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 7060);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  v10[3] = a3;
  v10[4] = a1;
  v10[5] = v5;
  if ( !a3 )
  {
    v32 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v32 + 24) = 0LL;
LABEL_23:
    WdLogEvent5_WdError(v32);
    v23 = -1073741811;
    goto LABEL_15;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v14 = DxgAdapter;
  if ( !DxgAdapter )
  {
    v33 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v33 + 24) = a1;
    WdLogEvent5_WdError(v33);
    v23 = -1071775742;
    goto LABEL_15;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) || (v16 = *((_QWORD *)v14 + 315)) == 0 )
  {
    v32 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v32 + 24) = a1;
    goto LABEL_23;
  }
  v17 = *(struct _FAST_MUTEX **)(v16 + 96);
  if ( !v17 )
  {
    v32 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v32 + 24) = v14;
    goto LABEL_23;
  }
  v43 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v17, v5, 0, &v43);
  v23 = -1073741275;
  v24 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    v34 = WdLogNewEntry5_WdDmmEvent(v20, v19, v21, v22);
    *(_QWORD *)(v34 + 24) = v5;
    *(_QWORD *)(v34 + 32) = v17;
    WdLogEvent5_WdDmmEvent(v34);
  }
  else if ( MonitorInstance < 0 )
  {
    v35 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v35 + 24) = v5;
    *(_QWORD *)(v35 + 32) = v17;
    WdLogEvent5_WdError(v35);
    v23 = v24;
  }
  else
  {
    v25 = v43;
    if ( !v43 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v20);
      WdLogEvent5_WdAssertion(v36);
      v38 = WdLogNewEntry5_WdAssertion(v37);
      WdLogEvent5_WdAssertion(v38);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v25 + 296), 1u);
    v27 = *((_DWORD *)v25 + 128);
    if ( v27 )
    {
      *((_DWORD *)v25 + 128) = v27 - 1;
    }
    else
    {
      v39 = WdLogNewEntry5_WdError(v26);
      WdLogEvent5_WdError(v39);
    }
    v28 = (struct _ERESOURCE *)((char *)v25 + 296);
    v23 = 0;
    ExReleaseResourceLite(v28);
    KeLeaveCriticalRegion();
  }
LABEL_15:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, v40);
  return v23;
}
