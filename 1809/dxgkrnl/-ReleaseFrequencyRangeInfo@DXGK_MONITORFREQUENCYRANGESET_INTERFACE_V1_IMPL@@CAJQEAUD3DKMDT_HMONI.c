/*
 * XREFs of ?ReleaseFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C0293DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?_ReleaseMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C029D27C (-_ReleaseMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 */

__int64 __fastcall DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL::ReleaseFrequencyRangeInfo(
        struct D3DKMDT_HMONITORFREQUENCYRANGESET__ *const a1,
        struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // edi
  int MonitorFromHandle; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  struct DXGMONITOR *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  struct _ERESOURCE *v22; // rcx
  __int64 v23; // rcx
  const GUID *v24; // r8
  int v26; // [rsp+20h] [rbp-28h] BYREF
  __int64 v27; // [rsp+28h] [rbp-20h]
  char v28; // [rsp+30h] [rbp-18h]
  struct DXGMONITOR *v29; // [rsp+50h] [rbp+8h] BYREF

  v26 = -1;
  v27 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v28 = 1;
    v26 = 7026;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 7026);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 7026);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a1;
  *(_QWORD *)(v9 + 32) = a2;
  if ( a2 )
  {
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v29);
    if ( MonitorFromHandle == -1073741816 )
    {
      v15 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v15 + 24) = a1;
      WdLogEvent5_WdError(v15);
      v12 = -1071774949;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v16);
      }
      v17 = v29;
      if ( !v29 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v18);
        v20 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v20);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v17 + 296), 1u);
      v21 = DXGMONITOR::_ReleaseMonitorFreqRangeEnumerator(v17, a2);
      v22 = (struct _ERESOURCE *)((char *)v17 + 296);
      v12 = v21;
      ExReleaseResourceLite(v22);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v11 + 24) = 0LL;
    WdLogEvent5_WdError(v11);
    v12 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v26);
  return v12;
}
