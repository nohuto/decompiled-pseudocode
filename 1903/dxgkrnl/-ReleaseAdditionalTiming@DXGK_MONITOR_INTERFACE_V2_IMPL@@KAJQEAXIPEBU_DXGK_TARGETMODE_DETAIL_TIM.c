/*
 * XREFs of ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C017E2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DpiGetDxgAdapter @ 0x1C0013BA0 (DpiGetDxgAdapter.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E8240 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V2_IMPL::ReleaseAdditionalTiming(__int64 a1, unsigned int a2, const GUID *a3)
{
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGADAPTER *DxgAdapter; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  DXGADAPTER *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rsi
  struct _FAST_MUTEX *v21; // rsi
  int MonitorInstance; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v26; // ebx
  unsigned int v27; // edi
  struct DXGMONITOR *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // eax
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
  __int64 v46; // rax
  int v47; // [rsp+20h] [rbp-20h] BYREF
  __int64 v48; // [rsp+28h] [rbp-18h]
  char v49; // [rsp+30h] [rbp-10h]
  struct DXGMONITOR *v50; // [rsp+60h] [rbp+20h] BYREF

  v47 = -1;
  v48 = 0LL;
  v5 = a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v49 = 1;
    v47 = 7060;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 7060);
  }
  else
  {
    v49 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v47, 7060LL);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
  v8[3] = a3;
  v8[4] = a1;
  v8[5] = v5;
  if ( !a3 )
  {
    v38 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v38 + 24) = 0LL;
LABEL_23:
    WdLogEvent5_WdError(v38);
    v26 = -1073741811;
    goto LABEL_15;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, v9, v11);
  v16 = DxgAdapter;
  if ( !DxgAdapter )
  {
    v39 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v39 + 24) = a1;
    WdLogEvent5_WdError(v39);
    v26 = -1071775742;
    goto LABEL_15;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) || (v20 = *((_QWORD *)v16 + 319)) == 0 )
  {
    v38 = WdLogNewEntry5_WdError(v18, v17, v19);
    *(_QWORD *)(v38 + 24) = a1;
    goto LABEL_23;
  }
  v21 = *(struct _FAST_MUTEX **)(v20 + 96);
  if ( !v21 )
  {
    v38 = WdLogNewEntry5_WdError(v18, v17, v19);
    *(_QWORD *)(v38 + 24) = v16;
    goto LABEL_23;
  }
  v50 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v21, (unsigned int)v5, 0, &v50);
  v26 = -1073741275;
  v27 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    v40 = WdLogNewEntry5_WdDmmEvent(v24, v23);
    *(_QWORD *)(v40 + 24) = v5;
    *(_QWORD *)(v40 + 32) = v21;
    WdLogEvent5_WdDmmEvent(v40);
  }
  else if ( MonitorInstance < 0 )
  {
    v41 = WdLogNewEntry5_WdError(v24, v23, v25);
    *(_QWORD *)(v41 + 24) = v5;
    *(_QWORD *)(v41 + 32) = v21;
    WdLogEvent5_WdError(v41);
    v26 = v27;
  }
  else
  {
    v28 = v50;
    if ( !v50 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v24, v23);
      WdLogEvent5_WdAssertion(v42);
      v45 = WdLogNewEntry5_WdAssertion(v44, v43);
      WdLogEvent5_WdAssertion(v45);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v28 + 296), 1u);
    v32 = *((_DWORD *)v28 + 128);
    if ( v32 )
    {
      *((_DWORD *)v28 + 128) = v32 - 1;
    }
    else
    {
      v46 = WdLogNewEntry5_WdError(v30, v29, v31);
      WdLogEvent5_WdError(v46);
    }
    v33 = (struct _ERESOURCE *)((char *)v28 + 296);
    v26 = 0;
    ExReleaseResourceLite(v33);
    KeLeaveCriticalRegion();
  }
LABEL_15:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v34);
  if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v35, &EventProfilerExit, v36, v47);
  return v26;
}
