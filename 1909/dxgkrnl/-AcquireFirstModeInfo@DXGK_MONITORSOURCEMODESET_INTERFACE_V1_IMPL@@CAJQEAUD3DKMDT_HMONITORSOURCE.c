/*
 * XREFs of ?AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C017AE00
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006884 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C017B2AC (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a2,
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
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v15; // rbx
  struct _ERESOURCE *p_VideoSignalInfo; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // ebx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  const GUID *v26; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  UINT *p_cy; // rdi
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rax
  const struct DXGMONITOR::_DMMMONITORSOURCEMODE *v39; // rdx
  __int64 v40; // rax
  int v41; // [rsp+20h] [rbp-20h] BYREF
  __int64 v42; // [rsp+28h] [rbp-18h]
  char v43; // [rsp+30h] [rbp-10h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v44; // [rsp+60h] [rbp+20h] BYREF

  v41 = -1;
  v42 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v43 = 1;
    v41 = 7018;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 7018);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v41, 7018LL);
  v7 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v7 + 24) = a1;
  *(_QWORD *)(v7 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, (struct DXGMONITOR **)&v44);
    if ( MonitorFromHandle == -1073741816 )
    {
      v29 = WdLogNewEntry5_WdError(v13, v12, v14);
      *(_QWORD *)(v29 + 24) = a1;
      WdLogEvent5_WdError(v29);
      v22 = -1071774943;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v13, v12);
        WdLogEvent5_WdAssertion(v30);
      }
      v15 = v44;
      if ( !v44 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v13, v12);
        WdLogEvent5_WdAssertion(v31);
        v34 = WdLogNewEntry5_WdAssertion(v33, v32);
        WdLogEvent5_WdAssertion(v34);
      }
      p_VideoSignalInfo = (struct _ERESOURCE *)&v15[3].VideoSignalInfo;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)&v15[3].VideoSignalInfo, 1u);
      if ( v15[2].VideoSignalInfo.TotalSize.cy )
      {
        p_cy = &v15[2].VideoSignalInfo.ActiveSize.cy;
        v44 = 0LL;
        v36 = *(struct _D3DKMDT_MONITOR_SOURCE_MODE **)&v15[2].VideoSignalInfo.ActiveSize.cy;
        if ( v36 == (struct _D3DKMDT_MONITOR_SOURCE_MODE *)&v15[2].VideoSignalInfo.ActiveSize.cy )
          goto LABEL_28;
        v19 = v36 - 1;
        if ( !v36 )
          v19 = 0LL;
        if ( !v19 )
        {
LABEL_28:
          v37 = WdLogNewEntry5_WdAssertion(v36, v17);
          WdLogEvent5_WdAssertion(v37);
        }
        v38 = *(_QWORD **)p_cy;
        if ( *(UINT **)p_cy == p_cy )
        {
          v39 = 0LL;
        }
        else
        {
          v39 = (const struct DXGMONITOR::_DMMMONITORSOURCEMODE *)(v38 - 12);
          if ( !v38 )
            v39 = 0LL;
        }
        v22 = DXGMONITOR::_CreateMonitorModeEnumerator((DXGMONITOR *)v15, v39, &v44);
        if ( !v22 )
        {
          v23 = v44;
          if ( !v44 )
          {
            v40 = WdLogNewEntry5_WdAssertion(v21, v20);
            WdLogEvent5_WdAssertion(v40);
          }
          *a2 = v23;
        }
      }
      else
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17) + 24) = v15;
        v22 = 1075708747;
      }
      ExReleaseResourceLite(p_VideoSignalInfo);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v28 + 24) = 0LL;
    *(_QWORD *)(v28 + 32) = a1;
    WdLogEvent5_WdError(v28);
    v22 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v24);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v41);
  return v22;
}
