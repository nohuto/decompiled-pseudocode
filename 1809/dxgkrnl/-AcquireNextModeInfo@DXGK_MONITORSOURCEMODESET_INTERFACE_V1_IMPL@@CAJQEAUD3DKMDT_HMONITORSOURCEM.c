/*
 * XREFs of ?AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C0292B50
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z @ 0x1C029BADC (-_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  unsigned int NextMonitorModeEnumerator; // ebx
  __int64 v14; // rax
  int MonitorFromHandle; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  struct DXGMONITOR *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  struct _ERESOURCE *v23; // rbp
  __int64 v24; // rcx
  __int64 v25; // rax
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
    v29 = 7019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, (const GUID *)a3, 7019);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 7019);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  v10[3] = a2;
  v10[4] = a1;
  v10[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( a2 )
    {
      MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v32);
      if ( MonitorFromHandle == -1073741816 )
      {
        v17 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v17 + 24) = a1;
        WdLogEvent5_WdError(v17);
        NextMonitorModeEnumerator = -1071774943;
      }
      else
      {
        if ( MonitorFromHandle < 0 )
        {
          v18 = WdLogNewEntry5_WdAssertion(v16);
          WdLogEvent5_WdAssertion(v18);
        }
        v19 = v32;
        if ( !v32 )
        {
          v20 = WdLogNewEntry5_WdAssertion(v16);
          WdLogEvent5_WdAssertion(v20);
          v22 = WdLogNewEntry5_WdAssertion(v21);
          WdLogEvent5_WdAssertion(v22);
        }
        v23 = (struct _ERESOURCE *)((char *)v19 + 296);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v19 + 296), 1u);
        NextMonitorModeEnumerator = DXGMONITOR::_GetNextMonitorModeEnumerator(v19, a2, a3);
        if ( !NextMonitorModeEnumerator && !*a3 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v24);
          WdLogEvent5_WdAssertion(v25);
        }
        ExReleaseResourceLite(v23);
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v14 + 24) = 0LL;
      WdLogEvent5_WdError(v14);
      NextMonitorModeEnumerator = -1071774942;
    }
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v12[3] = 0LL;
    v12[4] = a2;
    v12[5] = a1;
    WdLogEvent5_WdError(v12);
    NextMonitorModeEnumerator = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v29);
  return NextMonitorModeEnumerator;
}
