/*
 * XREFs of ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1C00D8BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000A58C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00D8EBC (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C00D96B8 (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::PinMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const GUID *a3)
{
  bool v3; // r14
  __int64 v5; // rbp
  DMMVIDPNTARGETMODESET *v6; // rax
  __int64 v7; // rcx
  struct DMMVIDPNTARGETMODESET *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 Container; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  const GUID *v22; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // [rsp+20h] [rbp-28h] BYREF
  __int64 v30; // [rsp+28h] [rbp-20h]
  char v31; // [rsp+30h] [rbp-18h]

  v29 = -1;
  v3 = (char)a3;
  v30 = 0LL;
  v5 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v31 = 1;
    v29 = 6014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6014);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 6014);
  v6 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v8 = v6;
  if ( v6 )
  {
    v11 = DMMVIDPNTARGETMODESET::PinMode(v6, v5);
    if ( v11 < 0 )
    {
      v25 = WdLogNewEntry5_WdTrace(v10, v9, v12, v13);
      *(_QWORD *)(v25 + 24) = v5;
      *(_QWORD *)(v25 + 32) = this;
    }
    else
    {
      v14 = *((_QWORD *)v8 + 14);
      if ( !v14 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v26);
      }
      v15 = *(_QWORD *)(v14 + 40);
      if ( !v15 )
      {
        v27 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v27);
        v15 = *(_QWORD *)(v14 + 40);
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer(v15 + 64);
      v11 = VIDPN_MGR::PinVidPnTargetMode(*(VIDPN_MGR **)(Container + 48), v8, v5, v3);
      if ( v11 < 0 )
      {
        v28 = WdLogNewEntry5_WdDmmEvent(v18, v17, v19, v20);
        *(_QWORD *)(v28 + 24) = v5;
        *(_QWORD *)(v28 + 32) = this;
        WdLogEvent5_WdDmmEvent(v28);
      }
      else
      {
        v11 = 0;
      }
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v24 + 24) = this;
    WdLogEvent5_WdError(v24);
    v11 = -1071774967;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v29);
  return (unsigned int)v11;
}
