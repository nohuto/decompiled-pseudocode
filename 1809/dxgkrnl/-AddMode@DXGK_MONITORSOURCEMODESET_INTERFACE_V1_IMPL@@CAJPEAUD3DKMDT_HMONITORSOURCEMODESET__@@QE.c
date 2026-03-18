/*
 * XREFs of ?AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00C5690
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00C5798 (-_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AddMode(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *a1,
        struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  int MonitorFromHandle; // eax
  __int64 v12; // rcx
  struct DXGMONITOR *v13; // rdi
  unsigned int inserted; // eax
  struct _ERESOURCE *v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // [rsp+20h] [rbp-28h] BYREF
  __int64 v27; // [rsp+28h] [rbp-20h]
  char v28; // [rsp+30h] [rbp-18h]
  struct DXGMONITOR *v29; // [rsp+50h] [rbp+8h] BYREF

  v26 = -1;
  v27 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v28 = 1;
    v26 = 7021;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 7021);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 7021);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = a1;
  if ( a2 )
  {
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v29);
    if ( MonitorFromHandle == -1073741816 )
    {
      v21 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v21 + 24) = a1;
      WdLogEvent5_WdError(v21);
      v16 = -1071774943;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v22);
      }
      v13 = v29;
      if ( !v29 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v23);
        v25 = WdLogNewEntry5_WdAssertion(v24);
        WdLogEvent5_WdAssertion(v25);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v13 + 296), 1u);
      inserted = DXGMONITOR::_InsertMonitorSourceMode(v13, a2);
      v15 = (struct _ERESOURCE *)((char *)v13 + 296);
      v16 = inserted;
      ExReleaseResourceLite(v15);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v20 + 24) = 0LL;
    *(_QWORD *)(v20 + 32) = a1;
    WdLogEvent5_WdError(v20);
    v16 = -1071774942;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v17, &EventProfilerExit, v18, v26);
  return v16;
}
