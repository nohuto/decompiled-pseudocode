/*
 * XREFs of ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C0292520
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DpiGetDxgAdapter @ 0x1C0010BE0 (DpiGetDxgAdapter.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     MonitorGetMonitorHandle @ 0x1C00C3AE8 (MonitorGetMonitorHandle.c)
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
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  DXGADAPTER *DxgAdapter; // rax
  __int64 v16; // rcx
  DXGADAPTER *v17; // rdi
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  int MonitorHandle; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  const GUID *v29; // r8
  int v31; // [rsp+30h] [rbp-38h] BYREF
  __int64 v32; // [rsp+38h] [rbp-30h]
  char v33; // [rsp+40h] [rbp-28h]
  __int64 v34; // [rsp+70h] [rbp+8h] BYREF

  v31 = -1;
  v32 = 0LL;
  v6 = a1;
  v7 = a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v33 = 1;
    v31 = 7052;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, (const GUID *)a3, 7052);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 7052);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = v6;
  v12[4] = v7;
  v12[5] = a3;
  v12[6] = a4;
  if ( a3 && (*a3 = 0LL, a4) )
  {
    *a4 = 0LL;
    DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(v6);
    v17 = DxgAdapter;
    if ( !DxgAdapter )
      goto LABEL_12;
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v19);
    }
    if ( *((_QWORD *)v17 + 315) )
    {
      LOBYTE(v18) = 1;
      MonitorHandle = MonitorGetMonitorHandle(
                        v17,
                        (unsigned int)v7,
                        v18,
                        DXGK_MONITOR_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet,
                        &v34);
      v6 = MonitorHandle;
      if ( MonitorHandle == -1073741275 )
      {
        v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
        *(_QWORD *)(v25 + 24) = v7;
        WdLogEvent5_WdWarning(v25);
        LODWORD(v6) = -1071774920;
      }
      else if ( MonitorHandle >= 0 )
      {
        v6 = v34;
        if ( !v34 )
        {
          v27 = WdLogNewEntry5_WdAssertion(v23);
          WdLogEvent5_WdAssertion(v27);
        }
        *a3 = (struct D3DKMDT_HMONITORSOURCEMODESET__ *)v6;
        *a4 = &DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DxgMonitorSourceModeSetInterfaceV1;
        LODWORD(v6) = 0;
      }
      else
      {
        v26 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v26 + 24) = v7;
        *(_QWORD *)(v26 + 32) = v6;
        WdLogEvent5_WdError(v26);
      }
    }
    else
    {
LABEL_12:
      v20 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v20 + 24) = v6;
      WdLogEvent5_WdError(v20);
      LODWORD(v6) = -1071775742;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v14 + 24) = 0LL;
    *(_QWORD *)(v14 + 32) = v6;
    WdLogEvent5_WdError(v14);
    LODWORD(v6) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, v31);
  return (unsigned int)v6;
}
