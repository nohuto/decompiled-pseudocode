/*
 * XREFs of ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1C0176C10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C00060BC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0019114 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00E24F8 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C00E636C (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::PinMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const GUID *a3)
{
  char v3; // r14
  __int64 v5; // rbp
  DMMVIDPNTARGETMODESET *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DMMVIDPNTARGETMODESET *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 Container; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  const GUID *v20; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // [rsp+20h] [rbp-28h] BYREF
  __int64 v28; // [rsp+28h] [rbp-20h]
  char v29; // [rsp+30h] [rbp-18h]

  v27 = -1;
  v3 = (char)a3;
  v28 = 0LL;
  v5 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v29 = 1;
    v27 = 6014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6014);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 6014LL);
  v6 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v10 = v6;
  if ( v6 )
  {
    v13 = DMMVIDPNTARGETMODESET::PinMode(v6, (unsigned int)v5);
    if ( v13 < 0 )
    {
      v23 = WdLogNewEntry5_WdTrace(v12, v11);
      *(_QWORD *)(v23 + 24) = v5;
      *(_QWORD *)(v23 + 32) = this;
    }
    else
    {
      v14 = *((_QWORD *)v10 + 14);
      if ( !v14 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v12, v11);
        WdLogEvent5_WdAssertion(v24);
      }
      v15 = *(_QWORD *)(v14 + 40);
      if ( !v15 )
      {
        v25 = WdLogNewEntry5_WdAssertion(0LL, v11);
        WdLogEvent5_WdAssertion(v25);
        v15 = *(_QWORD *)(v14 + 40);
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer(v15 + 64, v11);
      v13 = VIDPN_MGR::PinVidPnTargetMode(*(VIDPN_MGR **)(Container + 48), v10, v5, v3);
      if ( v13 < 0 )
      {
        v26 = WdLogNewEntry5_WdDmmEvent(v18, v17);
        *(_QWORD *)(v26 + 24) = v5;
        *(_QWORD *)(v26 + 32) = this;
        WdLogEvent5_WdDmmEvent(v26);
      }
      else
      {
        v13 = 0;
      }
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v22 + 24) = this;
    WdLogEvent5_WdError(v22);
    v13 = -1071774967;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27, v17);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v19, &EventProfilerExit, v20, v27);
  return (unsigned int)v13;
}
