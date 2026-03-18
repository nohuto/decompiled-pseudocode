/*
 * XREFs of ?ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C0294330
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DpiGetDxgAdapter @ 0x1C0010BE0 (DpiGetDxgAdapter.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00C3A54 (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::ReleaseMonitorSourceModeSet(
        __int64 a1,
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  DXGADAPTER *DxgAdapter; // rax
  __int64 v11; // rcx
  DXGADAPTER *v12; // rbx
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rcx
  const GUID *v19; // r8
  int v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+28h] [rbp-20h]
  char v23; // [rsp+30h] [rbp-18h]

  v21 = -1;
  v22 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v23 = 1;
    v21 = 7053;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 7053);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 7053);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = a1;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v12 = DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_9;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( *((_QWORD *)v12 + 315) )
  {
    if ( a2 )
    {
      v16 = MonitorReleaseMonitorHandle(
              v12,
              (__int64)a2,
              DXGK_MONITOR_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet,
              v13);
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v17 + 24) = 0LL;
      WdLogEvent5_WdError(v17);
      v16 = -1071774943;
    }
  }
  else
  {
LABEL_9:
    v15 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v15 + 24) = a1;
    WdLogEvent5_WdError(v15);
    v16 = -1071775742;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, v21);
  return v16;
}
