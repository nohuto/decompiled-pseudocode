/*
 * XREFs of ?AcquirePreferredModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C02CCAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006884 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C017B2AC (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePreferredModeInfo(
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
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // ebx
  int MonitorFromHandle; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct _ERESOURCE *p_VideoSignalInfo; // r14
  __int64 v26; // rcx
  const struct DXGMONITOR::_DMMMONITORSOURCEMODE *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rcx
  const GUID *v33; // r8
  int v35; // [rsp+20h] [rbp-20h] BYREF
  __int64 v36; // [rsp+28h] [rbp-18h]
  char v37; // [rsp+30h] [rbp-10h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v38; // [rsp+60h] [rbp+20h] BYREF

  v35 = -1;
  v36 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v37 = 1;
    v35 = 7017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 7017);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 7017LL);
  v7 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v7 + 24) = a1;
  *(_QWORD *)(v7 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, (struct DXGMONITOR **)&v38);
    if ( MonitorFromHandle == -1073741816 )
    {
      v18 = WdLogNewEntry5_WdError(v16, v15, v17);
      *(_QWORD *)(v18 + 24) = a1;
      WdLogEvent5_WdError(v18);
      v13 = -1071774943;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v16, v15);
        WdLogEvent5_WdAssertion(v19);
      }
      v20 = v38;
      if ( !v38 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v16, v15);
        WdLogEvent5_WdAssertion(v21);
        v24 = WdLogNewEntry5_WdAssertion(v23, v22);
        WdLogEvent5_WdAssertion(v24);
      }
      p_VideoSignalInfo = (struct _ERESOURCE *)&v20[3].VideoSignalInfo;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)&v20[3].VideoSignalInfo, 1u);
      v27 = *(const struct DXGMONITOR::_DMMMONITORSOURCEMODE **)&v20[2].VideoSignalInfo.HSyncFreq.Denominator;
      if ( v27 )
      {
        v38 = 0LL;
        v13 = DXGMONITOR::_CreateMonitorModeEnumerator((DXGMONITOR ***)v20, v27, &v38);
        if ( !v13 )
        {
          v30 = v38;
          if ( !v38 )
          {
            v31 = WdLogNewEntry5_WdAssertion(v29, v28);
            WdLogEvent5_WdAssertion(v31);
          }
          *a2 = v30;
        }
      }
      else
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v26, 0LL) + 24) = v20;
        v13 = 1075708702;
      }
      ExReleaseResourceLite(p_VideoSignalInfo);
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
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v12);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v32, &EventProfilerExit, v33, v35);
  return v13;
}
