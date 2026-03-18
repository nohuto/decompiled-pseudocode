/*
 * XREFs of ?AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C017B080
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006884 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z @ 0x1C017B1B4 (-_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int MonitorFromHandle; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGMONITOR *v16; // rbx
  struct _ERESOURCE *v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int NextMonitorModeEnumerator; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  const GUID *v23; // r8
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // [rsp+20h] [rbp-28h] BYREF
  __int64 v35; // [rsp+28h] [rbp-20h]
  char v36; // [rsp+30h] [rbp-18h]
  struct DXGMONITOR *v37; // [rsp+50h] [rbp+8h] BYREF

  v34 = -1;
  v35 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v36 = 1;
    v34 = 7019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, (const GUID *)a3, 7019);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 7019LL);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
  v8[3] = a2;
  v8[4] = a1;
  v8[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( a2 )
    {
      MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v37);
      if ( MonitorFromHandle == -1073741816 )
      {
        v27 = WdLogNewEntry5_WdError(v14, v13, v15);
        *(_QWORD *)(v27 + 24) = a1;
        WdLogEvent5_WdError(v27);
        NextMonitorModeEnumerator = -1071774943;
      }
      else
      {
        if ( MonitorFromHandle < 0 )
        {
          v28 = WdLogNewEntry5_WdAssertion(v14, v13);
          WdLogEvent5_WdAssertion(v28);
        }
        v16 = v37;
        if ( !v37 )
        {
          v29 = WdLogNewEntry5_WdAssertion(v14, v13);
          WdLogEvent5_WdAssertion(v29);
          v32 = WdLogNewEntry5_WdAssertion(v31, v30);
          WdLogEvent5_WdAssertion(v32);
        }
        v17 = (struct _ERESOURCE *)((char *)v16 + 296);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v16 + 296), 1u);
        NextMonitorModeEnumerator = DXGMONITOR::_GetNextMonitorModeEnumerator(v16, a2, a3);
        if ( !NextMonitorModeEnumerator && !*a3 )
        {
          v33 = WdLogNewEntry5_WdAssertion(v19, v18);
          WdLogEvent5_WdAssertion(v33);
        }
        ExReleaseResourceLite(v17);
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      v26 = WdLogNewEntry5_WdError(v10, v9, v11);
      *(_QWORD *)(v26 + 24) = 0LL;
      WdLogEvent5_WdError(v26);
      NextMonitorModeEnumerator = -1071774942;
    }
  }
  else
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9, v11);
    v25[3] = 0LL;
    v25[4] = a2;
    v25[5] = a1;
    WdLogEvent5_WdError(v25);
    NextMonitorModeEnumerator = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v21);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v34);
  return NextMonitorModeEnumerator;
}
