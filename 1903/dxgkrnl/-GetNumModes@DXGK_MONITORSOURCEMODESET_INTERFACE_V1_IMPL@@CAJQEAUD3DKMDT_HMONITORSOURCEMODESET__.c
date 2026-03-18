/*
 * XREFs of ?GetNumModes@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEA_K@Z @ 0x1C017EA90
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006314 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::GetNumModes(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        unsigned __int64 *const a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int MonitorFromHandle; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGMONITOR *v15; // rdi
  struct _ERESOURCE *v16; // rcx
  unsigned int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  const GUID *v20; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // [rsp+20h] [rbp-28h] BYREF
  __int64 v30; // [rsp+28h] [rbp-20h]
  char v31; // [rsp+30h] [rbp-18h]
  struct DXGMONITOR *v32; // [rsp+50h] [rbp+8h] BYREF

  v29 = -1;
  v30 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v31 = 1;
    v29 = 7016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 7016);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v29, 7016LL);
  v7 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v7 + 24) = a1;
  *(_QWORD *)(v7 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v32);
    if ( MonitorFromHandle == -1073741816 )
    {
      v23 = WdLogNewEntry5_WdError(v13, v12, v14);
      *(_QWORD *)(v23 + 24) = a1;
      WdLogEvent5_WdError(v23);
      v17 = -1071774943;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v13, v12);
        WdLogEvent5_WdAssertion(v24);
      }
      v15 = v32;
      if ( !v32 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v13, v12);
        WdLogEvent5_WdAssertion(v25);
        v28 = WdLogNewEntry5_WdAssertion(v27, v26);
        WdLogEvent5_WdAssertion(v28);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v15 + 296), 1u);
      v16 = (struct _ERESOURCE *)((char *)v15 + 296);
      *a2 = *((unsigned int *)v15 + 52);
      v17 = 0;
      ExReleaseResourceLite(v16);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v22 + 24) = 0LL;
    *(_QWORD *)(v22 + 32) = a1;
    WdLogEvent5_WdError(v22);
    v17 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v18);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v19, &EventProfilerExit, v20, v29);
  return v17;
}
