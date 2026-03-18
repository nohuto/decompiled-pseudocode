/*
 * XREFs of ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C02CC260
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DpiGetDxgAdapter @ 0x1C0014370 (DpiGetDxgAdapter.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     MonitorGetMonitorHandle @ 0x1C00EC42C (MonitorGetMonitorHandle.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet(
        __int64 a1,
        unsigned int a2,
        struct D3DKMDT_HMONITORSOURCEMODESET__ **a3,
        const struct _DXGK_MONITORSOURCEMODESET_INTERFACE **a4)
{
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  DXGADAPTER *DxgAdapter; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  DXGADAPTER *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  int MonitorHandle; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  const GUID *v30; // r8
  int v32; // [rsp+30h] [rbp-38h] BYREF
  __int64 v33; // [rsp+38h] [rbp-30h]
  char v34; // [rsp+40h] [rbp-28h]
  __int64 v35; // [rsp+70h] [rbp+8h] BYREF

  v32 = -1;
  v33 = 0LL;
  v6 = a1;
  v7 = a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v34 = 1;
    v32 = 7052;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, (const GUID *)a3, 7052);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 7052LL);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v10[3] = v6;
  v10[4] = v7;
  v10[5] = a3;
  v10[6] = a4;
  if ( a3 && (*a3 = 0LL, a4) )
  {
    *a4 = 0LL;
    DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(v6, v11, v13);
    v20 = DxgAdapter;
    if ( !DxgAdapter )
      goto LABEL_12;
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v18, v17);
      WdLogEvent5_WdAssertion(v21);
    }
    if ( *((_QWORD *)v20 + 319) )
    {
      MonitorHandle = MonitorGetMonitorHandle(
                        v20,
                        (unsigned int)v7,
                        1u,
                        DXGK_MONITOR_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet,
                        &v35);
      v6 = MonitorHandle;
      if ( MonitorHandle == -1073741275 )
      {
        v26 = WdLogNewEntry5_WdWarning(v24, v15, v25);
        *(_QWORD *)(v26 + 24) = v7;
        WdLogEvent5_WdWarning(v26);
        LODWORD(v6) = -1071774920;
      }
      else if ( MonitorHandle >= 0 )
      {
        v6 = v35;
        if ( !v35 )
        {
          v28 = WdLogNewEntry5_WdAssertion(v24, v15);
          WdLogEvent5_WdAssertion(v28);
        }
        *a3 = (struct D3DKMDT_HMONITORSOURCEMODESET__ *)v6;
        *a4 = &DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DxgMonitorSourceModeSetInterfaceV1;
        LODWORD(v6) = 0;
      }
      else
      {
        v27 = WdLogNewEntry5_WdError(v24, v15, v25);
        *(_QWORD *)(v27 + 24) = v7;
        *(_QWORD *)(v27 + 32) = v6;
        WdLogEvent5_WdError(v27);
      }
    }
    else
    {
LABEL_12:
      v22 = WdLogNewEntry5_WdError(v18, v17, v19);
      *(_QWORD *)(v22 + 24) = v6;
      WdLogEvent5_WdError(v22);
      LODWORD(v6) = -1071775742;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v14 + 24) = 0LL;
    *(_QWORD *)(v14 + 32) = v6;
    WdLogEvent5_WdError(v14);
    LODWORD(v6) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v15);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, v32);
  return (unsigned int)v6;
}
