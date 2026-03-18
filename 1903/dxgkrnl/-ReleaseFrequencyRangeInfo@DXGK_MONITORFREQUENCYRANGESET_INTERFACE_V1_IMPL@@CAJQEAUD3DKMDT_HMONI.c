/*
 * XREFs of ?ReleaseFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C02CD640
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006314 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?_ReleaseMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C02D04D8 (-_ReleaseMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 */

__int64 __fastcall DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL::ReleaseFrequencyRangeInfo(
        struct D3DKMDT_HMONITORFREQUENCYRANGESET__ *const a1,
        struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // edi
  int MonitorFromHandle; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  struct DXGMONITOR *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  struct _ERESOURCE *v26; // rcx
  __int64 v27; // rcx
  const GUID *v28; // r8
  int v30; // [rsp+20h] [rbp-28h] BYREF
  __int64 v31; // [rsp+28h] [rbp-20h]
  char v32; // [rsp+30h] [rbp-18h]
  struct DXGMONITOR *v33; // [rsp+50h] [rbp+8h] BYREF

  v30 = -1;
  v31 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v32 = 1;
    v30 = 7026;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 7026);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 7026LL);
  v7 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v7 + 24) = a1;
  *(_QWORD *)(v7 + 32) = a2;
  if ( a2 )
  {
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v33);
    if ( MonitorFromHandle == -1073741816 )
    {
      v18 = WdLogNewEntry5_WdError(v16, v15, v17);
      *(_QWORD *)(v18 + 24) = a1;
      WdLogEvent5_WdError(v18);
      v13 = -1071774949;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v16, v15);
        WdLogEvent5_WdAssertion(v19);
      }
      v20 = v33;
      if ( !v33 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v16, v15);
        WdLogEvent5_WdAssertion(v21);
        v24 = WdLogNewEntry5_WdAssertion(v23, v22);
        WdLogEvent5_WdAssertion(v24);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v20 + 296), 1u);
      v25 = DXGMONITOR::_ReleaseMonitorFreqRangeEnumerator(v20, a2);
      v26 = (struct _ERESOURCE *)((char *)v20 + 296);
      v13 = v25;
      ExReleaseResourceLite(v26);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v11 + 24) = 0LL;
    WdLogEvent5_WdError(v11);
    v13 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v12);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v27, &EventProfilerExit, v28, v30);
  return v13;
}
