/*
 * XREFs of ?ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C02CD9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DpiGetDxgAdapter @ 0x1C0013BA0 (DpiGetDxgAdapter.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00E86A4 (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::ReleaseMonitorSourceModeSet(
        __int64 a1,
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  DXGADAPTER *DxgAdapter; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  DXGADAPTER *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rcx
  const GUID *v21; // r8
  int v23; // [rsp+20h] [rbp-28h] BYREF
  __int64 v24; // [rsp+28h] [rbp-20h]
  char v25; // [rsp+30h] [rbp-18h]

  v23 = -1;
  v24 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v25 = 1;
    v23 = 7053;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 7053);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 7053LL);
  v7 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = a1;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, v8, v9);
  v14 = DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_9;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( *((_QWORD *)v14 + 319) )
  {
    if ( a2 )
    {
      v18 = MonitorReleaseMonitorHandle(v14, (__int64)a2, DXGK_MONITOR_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet);
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v12, v11, v13);
      *(_QWORD *)(v19 + 24) = 0LL;
      WdLogEvent5_WdError(v19);
      v18 = -1071774943;
    }
  }
  else
  {
LABEL_9:
    v16 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v16 + 24) = a1;
    WdLogEvent5_WdError(v16);
    v18 = -1071775742;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23, v17);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v23);
  return v18;
}
