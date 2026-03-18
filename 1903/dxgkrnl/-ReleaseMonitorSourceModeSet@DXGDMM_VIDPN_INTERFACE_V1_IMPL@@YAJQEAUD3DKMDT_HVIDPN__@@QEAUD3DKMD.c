/*
 * XREFs of ?ReleaseMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C02B95E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00045F8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00E86A4 (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseMonitorSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // ebx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  const GUID *v20; // r8
  int v22; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+28h] [rbp-20h]
  char v24; // [rsp+30h] [rbp-18h]

  v22 = -1;
  v23 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v24 = 1;
    v22 = 6039;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6039);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 6039LL);
  v7 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = this;
  v8 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  if ( v8 )
  {
    v15 = *(_QWORD *)(v8 + 48);
    if ( a2 )
    {
      v17 = *(_QWORD *)(v15 + 8);
      if ( !v17 )
      {
        v18 = WdLogNewEntry5_WdAssertion(0LL, v9);
        WdLogEvent5_WdAssertion(v18);
        v17 = *(_QWORD *)(v15 + 8);
      }
      v14 = MonitorReleaseMonitorHandle(*(DXGADAPTER **)(v17 + 16), (__int64)a2, (void *)0x4E506456);
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v10, v9, v11);
      *(_QWORD *)(v16 + 24) = 0LL;
      WdLogEvent5_WdError(v16);
      v14 = -1071774943;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v12 + 24) = this;
    WdLogEvent5_WdError(v12);
    v14 = -1071774973;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v13);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v19, &EventProfilerExit, v20, v22);
  return v14;
}
