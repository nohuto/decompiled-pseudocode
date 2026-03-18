/*
 * XREFs of ?AcquirePreferredModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C02CC7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006314 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01774BC (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePreferredModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a2,
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
  unsigned int v14; // ebx
  __int64 v15; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  struct _ERESOURCE *p_VideoSignalInfo; // r14
  __int64 v22; // rcx
  const struct DXGMONITOR::_DMMMONITORSOURCEMODE *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rcx
  const GUID *v29; // r8
  int v31; // [rsp+20h] [rbp-20h] BYREF
  __int64 v32; // [rsp+28h] [rbp-18h]
  char v33; // [rsp+30h] [rbp-10h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v34; // [rsp+68h] [rbp+28h] BYREF

  v31 = -1;
  v32 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v33 = 1;
    v31 = 6000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 6000);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 6000LL);
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v5);
    WdLogEvent5_WdAssertion(v7);
  }
  *a2 = 0LL;
  MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, (struct DXGMONITOR **)&v34);
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
    v16 = v34;
    if ( !v34 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v10, v9);
      WdLogEvent5_WdAssertion(v17);
      v20 = WdLogNewEntry5_WdAssertion(v19, v18);
      WdLogEvent5_WdAssertion(v20);
    }
    p_VideoSignalInfo = (struct _ERESOURCE *)&v16[3].VideoSignalInfo;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)&v16[3].VideoSignalInfo, 1u);
    v23 = *(const struct DXGMONITOR::_DMMMONITORSOURCEMODE **)&v16[2].VideoSignalInfo.HSyncFreq.Denominator;
    if ( v23 )
    {
      v34 = 0LL;
      v14 = DXGMONITOR::_CreateMonitorModeEnumerator((DXGMONITOR ***)v16, v23, &v34);
      if ( !v14 )
      {
        v26 = v34;
        if ( !v34 )
        {
          v27 = WdLogNewEntry5_WdAssertion(v25, v24);
          WdLogEvent5_WdAssertion(v27);
        }
        *a2 = v26;
      }
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v22, 0LL) + 24) = v16;
      v14 = 1075708702;
    }
    ExReleaseResourceLite(p_VideoSignalInfo);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31, v13);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, v31);
  return v14;
}
