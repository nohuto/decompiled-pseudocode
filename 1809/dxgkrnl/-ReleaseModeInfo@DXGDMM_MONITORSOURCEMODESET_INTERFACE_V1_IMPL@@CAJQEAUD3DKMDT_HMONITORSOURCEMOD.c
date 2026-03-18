/*
 * XREFs of ?ReleaseModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0293FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?_ReleaseMonitorModeEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C029D364 (-_ReleaseMonitorModeEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 */

__int64 __fastcall DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        struct _D3DKMDT_MONITOR_SOURCE_MODE *a2,
        const GUID *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  int MonitorFromHandle; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // rax
  struct DXGMONITOR *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  struct _ERESOURCE *v17; // rcx
  __int64 v18; // rcx
  const GUID *v19; // r8
  int v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+28h] [rbp-20h]
  char v23; // [rsp+30h] [rbp-18h]
  struct DXGMONITOR *v24; // [rsp+58h] [rbp+10h] BYREF

  v21 = -1;
  v22 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v23 = 1;
    v21 = 6001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 6001);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 6001);
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v6);
  }
  MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v24);
  if ( MonitorFromHandle == -1073741816 )
  {
    v9 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v9 + 24) = a1;
    WdLogEvent5_WdError(v9);
    v10 = -1071774943;
  }
  else
  {
    if ( MonitorFromHandle < 0 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v11);
    }
    v12 = v24;
    if ( !v24 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v13);
      v15 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v15);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v12 + 296), 1u);
    v16 = DXGMONITOR::_ReleaseMonitorModeEnumerator(v12, a2);
    v17 = (struct _ERESOURCE *)((char *)v12 + 296);
    v10 = v16;
    ExReleaseResourceLite(v17);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, v21);
  return v10;
}
