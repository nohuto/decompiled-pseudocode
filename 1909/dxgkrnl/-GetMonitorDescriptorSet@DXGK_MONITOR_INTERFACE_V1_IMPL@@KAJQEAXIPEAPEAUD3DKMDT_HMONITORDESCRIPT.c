/*
 * XREFs of ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x1C02CCCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DpiGetDxgAdapter @ 0x1C0014370 (DpiGetDxgAdapter.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     MonitorGetMonitorHandle @ 0x1C00EC42C (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00ED228 (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorDescriptorSet(
        __int64 a1,
        unsigned int a2,
        struct D3DKMDT_HMONITORDESCRIPTORSET__ **a3,
        const struct _DXGK_MONITORDESCRIPTORSET_INTERFACE **a4)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
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
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  const GUID *v31; // r8
  int v33; // [rsp+30h] [rbp-38h] BYREF
  __int64 v34; // [rsp+38h] [rbp-30h]
  char v35; // [rsp+40h] [rbp-28h]
  __int64 v36; // [rsp+70h] [rbp+8h] BYREF

  v33 = -1;
  v34 = 0LL;
  v6 = a1;
  v7 = a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v35 = 1;
    v33 = 7055;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, (const GUID *)a3, 7055);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 7055LL);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v10[3] = v6;
  v10[4] = v7;
  v10[5] = a3;
  v10[6] = a4;
  if ( !a3 )
  {
    v14 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v14 + 32) = v6;
LABEL_9:
    *(_QWORD *)(v14 + 24) = 0LL;
    WdLogEvent5_WdError(v14);
    LODWORD(v6) = -1073741811;
    goto LABEL_22;
  }
  *a3 = 0LL;
  if ( !a4 )
  {
    v14 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v14 + 32) = v7;
    goto LABEL_9;
  }
  *a4 = 0LL;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(v6, v11, v13);
  v20 = DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_14;
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
                      DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorDescriptorSet,
                      &v36);
    v6 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
      *(_QWORD *)(v27 + 24) = v7;
      WdLogEvent5_WdWarning(v27);
      LODWORD(v6) = -1071774920;
    }
    else if ( MonitorHandle >= 0 )
    {
      v6 = v36;
      if ( !v36 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v25, v24);
        WdLogEvent5_WdAssertion(v29);
      }
      *a3 = (struct D3DKMDT_HMONITORDESCRIPTORSET__ *)v6;
      *a4 = &DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL::DxgMonitorDescriptorSetInterfaceV1;
      MonitorReleaseMonitorHandle(v20, v6, DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorDescriptorSet);
      LODWORD(v6) = 0;
    }
    else
    {
      v28 = WdLogNewEntry5_WdError(v25, v24, v26);
      *(_QWORD *)(v28 + 24) = v7;
      *(_QWORD *)(v28 + 32) = v6;
      WdLogEvent5_WdError(v28);
    }
  }
  else
  {
LABEL_14:
    v22 = WdLogNewEntry5_WdError(v18, v17, v19);
    *(_QWORD *)(v22 + 24) = v6;
    WdLogEvent5_WdError(v22);
    LODWORD(v6) = -1071775742;
  }
LABEL_22:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v15);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, v33);
  return (unsigned int)v6;
}
