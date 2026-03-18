/*
 * XREFs of ?AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU3@@Z @ 0x1C02CC680
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006884 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?_GetNextMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU2@@Z @ 0x1C02CF988 (-_GetNextMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPE.c)
 */

__int64 __fastcall DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL::AcquireNextFrequencyRangeInfo(
        struct D3DKMDT_HMONITORFREQUENCYRANGESET__ *const a1,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *const a2,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rdx
  unsigned int NextMonitorFreqRangeEnumerator; // ebx
  int MonitorFromHandle; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  struct DXGMONITOR *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  struct _ERESOURCE *v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  const GUID *v31; // r8
  int v33; // [rsp+20h] [rbp-28h] BYREF
  __int64 v34; // [rsp+28h] [rbp-20h]
  char v35; // [rsp+30h] [rbp-18h]
  struct DXGMONITOR *v36; // [rsp+50h] [rbp+8h] BYREF

  v33 = -1;
  v34 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v35 = 1;
    v33 = 7025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, (const GUID *)a3, 7025);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 7025LL);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
  v8[3] = a1;
  v8[4] = a2;
  v8[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v36);
    if ( MonitorFromHandle == -1073741816 )
    {
      v19 = WdLogNewEntry5_WdError(v17, v16, v18);
      *(_QWORD *)(v19 + 24) = a1;
      WdLogEvent5_WdError(v19);
      NextMonitorFreqRangeEnumerator = -1071774949;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v17, v16);
        WdLogEvent5_WdAssertion(v20);
      }
      v21 = v36;
      if ( !v36 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v17, v16);
        WdLogEvent5_WdAssertion(v22);
        v25 = WdLogNewEntry5_WdAssertion(v24, v23);
        WdLogEvent5_WdAssertion(v25);
      }
      v26 = (struct _ERESOURCE *)((char *)v21 + 296);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v21 + 296), 1u);
      NextMonitorFreqRangeEnumerator = DXGMONITOR::_GetNextMonitorFreqRangeEnumerator(v21, a2, a3);
      if ( !NextMonitorFreqRangeEnumerator && !*a3 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v28, v27);
        WdLogEvent5_WdAssertion(v29);
      }
      ExReleaseResourceLite(v26);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9, v11);
    v12[3] = 0LL;
    v12[4] = a2;
    v12[5] = a1;
    WdLogEvent5_WdError(v12);
    NextMonitorFreqRangeEnumerator = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v13);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, v33);
  return NextMonitorFreqRangeEnumerator;
}
