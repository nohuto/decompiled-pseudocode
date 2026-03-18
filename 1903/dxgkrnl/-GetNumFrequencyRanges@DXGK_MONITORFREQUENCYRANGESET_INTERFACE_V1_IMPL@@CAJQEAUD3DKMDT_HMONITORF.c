/*
 * XREFs of ?GetNumFrequencyRanges@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEA_K@Z @ 0x1C02CD290
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006314 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL::GetNumFrequencyRanges(
        struct D3DKMDT_HMONITORFREQUENCYRANGESET__ *const a1,
        unsigned __int64 *const a2,
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
  struct _ERESOURCE *v25; // rcx
  __int64 v26; // rcx
  const GUID *v27; // r8
  int v29; // [rsp+20h] [rbp-28h] BYREF
  __int64 v30; // [rsp+28h] [rbp-20h]
  char v31; // [rsp+30h] [rbp-18h]
  struct DXGMONITOR *v32; // [rsp+50h] [rbp+8h] BYREF

  v29 = -1;
  v30 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v31 = 1;
    v29 = 7023;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 7023);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v29, 7023LL);
  v7 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v7 + 24) = a1;
  *(_QWORD *)(v7 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v32);
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
      v20 = v32;
      if ( !v32 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v16, v15);
        WdLogEvent5_WdAssertion(v21);
        v24 = WdLogNewEntry5_WdAssertion(v23, v22);
        WdLogEvent5_WdAssertion(v24);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v20 + 296), 1u);
      v25 = (struct _ERESOURCE *)((char *)v20 + 296);
      *a2 = *((unsigned int *)v20 + 64);
      v13 = 0;
      ExReleaseResourceLite(v25);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = a1;
    WdLogEvent5_WdError(v11);
    v13 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v12);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v29);
  return v13;
}
