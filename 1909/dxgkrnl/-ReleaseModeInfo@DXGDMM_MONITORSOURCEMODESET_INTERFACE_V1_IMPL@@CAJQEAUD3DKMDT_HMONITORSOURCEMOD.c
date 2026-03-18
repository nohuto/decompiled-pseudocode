/*
 * XREFs of ?ReleaseModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C02CD8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006884 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?_ReleaseMonitorModeEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C017D5C8 (-_ReleaseMonitorModeEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 */

__int64 __fastcall DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        struct _D3DKMDT_MONITOR_SOURCE_MODE *a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  int MonitorFromHandle; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // edi
  __int64 v15; // rax
  struct DXGMONITOR *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  unsigned int v22; // eax
  struct _ERESOURCE *v23; // rcx
  __int64 v24; // rcx
  const GUID *v25; // r8
  int v27; // [rsp+20h] [rbp-28h] BYREF
  __int64 v28; // [rsp+28h] [rbp-20h]
  char v29; // [rsp+30h] [rbp-18h]
  struct DXGMONITOR *v30; // [rsp+58h] [rbp+10h] BYREF

  v27 = -1;
  v28 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v29 = 1;
    v27 = 6001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 6001);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 6001LL);
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v5);
    WdLogEvent5_WdAssertion(v7);
  }
  MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v30);
  if ( MonitorFromHandle == -1073741816 )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v12 + 24) = a1;
    WdLogEvent5_WdError(v12);
    v14 = -1071774943;
  }
  else
  {
    if ( MonitorFromHandle < 0 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v10, v9);
      WdLogEvent5_WdAssertion(v15);
    }
    v16 = v30;
    if ( !v30 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v10, v9);
      WdLogEvent5_WdAssertion(v17);
      v20 = WdLogNewEntry5_WdAssertion(v19, v18);
      WdLogEvent5_WdAssertion(v20);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v16 + 296), 1u);
    v22 = DXGMONITOR::_ReleaseMonitorModeEnumerator(v16, a2, v21);
    v23 = (struct _ERESOURCE *)((char *)v16 + 296);
    v14 = v22;
    ExReleaseResourceLite(v23);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27, v13);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v27);
  return v14;
}
