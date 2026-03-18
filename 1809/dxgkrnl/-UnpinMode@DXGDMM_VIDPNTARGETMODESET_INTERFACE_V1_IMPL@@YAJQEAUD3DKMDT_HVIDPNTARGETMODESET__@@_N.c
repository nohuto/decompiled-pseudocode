/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N@Z @ 0x1C01302D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000A58C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C00182E4 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E5038 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::UnpinMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const GUID *a3)
{
  char v3; // r12
  DMMVIDPNTARGETMODESET *v5; // rax
  __int64 v6; // rcx
  DMMVIDPNTARGETMODESET *v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 Container; // r13
  __int64 v20; // r15
  __int64 v21; // rcx
  __int64 v22; // r14
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  const GUID *v29; // r8
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  int v41; // [rsp+20h] [rbp-20h] BYREF
  __int64 v42; // [rsp+28h] [rbp-18h]
  char v43; // [rsp+30h] [rbp-10h]
  DXGK_ENUM_PIVOT v44; // [rsp+80h] [rbp+40h] BYREF

  v41 = -1;
  v3 = (char)a2;
  v42 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v43 = 1;
    v41 = 6016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6016);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 6016);
  v5 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v7 = v5;
  if ( !v5 )
  {
    v32 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v32 + 24) = this;
    WdLogEvent5_WdError(v32);
    LODWORD(v13) = -1071774967;
    goto LABEL_16;
  }
  v8 = DMMVIDPNTARGETMODESET::UnpinMode(v5);
  v13 = v8;
  if ( v8 < 0 )
  {
    v33 = WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
    *(_QWORD *)(v33 + 24) = this;
    *(_QWORD *)(v33 + 32) = v13;
    goto LABEL_16;
  }
  v14 = *((_QWORD *)v7 + 14);
  if ( !v14 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v34);
  }
  v15 = *(_QWORD *)(v14 + 40);
  if ( !v15 )
  {
    v35 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v35);
    v15 = *(_QWORD *)(v14 + 40);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer(v15 + 64);
  v20 = *(_QWORD *)(Container + 48);
  v44.VidPnSourceId = -1;
  v44.VidPnTargetId = *(_DWORD *)(v14 + 24);
  v21 = -(Container + 88);
  v22 = Container & -(__int64)(Container != -88);
  if ( !v22 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v21);
    WdLogEvent5_WdAssertion(v36);
  }
  if ( v3 )
  {
    v23 = VIDPN_MGR::_EnumVidPnCofuncModality(v20, v22, 6, &v44);
    v13 = v23;
    if ( v23 < 0 )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24, v26, v27);
      v37[3] = v22;
      v37[4] = 6LL;
      v37[5] = &v44;
      v38 = *(_QWORD *)(v20 + 8);
      if ( !v38 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v25);
        WdLogEvent5_WdAssertion(v39);
        v38 = *(_QWORD *)(v20 + 8);
      }
      v37[6] = *(_QWORD *)(v38 + 16);
      v37[7] = v13;
      goto LABEL_14;
    }
  }
  else
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v21, v16, v17, v18);
    v31[3] = 6LL;
    v31[4] = v22;
    v31[5] = v44.VidPnSourceId;
    v31[6] = v44.VidPnTargetId;
    WdLogEvent5_WdDmmEvent(v31);
  }
  LODWORD(v13) = 0;
LABEL_14:
  if ( (int)v13 < 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v40[3] = *(unsigned int *)(v14 + 24);
    v40[5] = (int)v13;
    v40[4] = Container;
    WdLogEvent5_WdError(v40);
  }
  else
  {
    LODWORD(v13) = 0;
  }
LABEL_16:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, v41);
  return (unsigned int)v13;
}
