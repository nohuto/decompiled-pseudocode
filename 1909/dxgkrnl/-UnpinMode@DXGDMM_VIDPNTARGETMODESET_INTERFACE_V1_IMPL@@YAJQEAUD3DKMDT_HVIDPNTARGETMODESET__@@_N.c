/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N@Z @ 0x1C017CD90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0006424 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00199C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C0021DD8 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E3B5C (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::UnpinMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const GUID *a3)
{
  char v3; // r12
  DMMVIDPNTARGETMODESET *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  DMMVIDPNTARGETMODESET *v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 Container; // r13
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // r14
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  const GUID *v26; // r8
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  int v38; // [rsp+20h] [rbp-20h] BYREF
  __int64 v39; // [rsp+28h] [rbp-18h]
  char v40; // [rsp+30h] [rbp-10h]
  DXGK_ENUM_PIVOT v41; // [rsp+80h] [rbp+40h] BYREF

  v38 = -1;
  v3 = (char)a2;
  v39 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v40 = 1;
    v38 = 6016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6016);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v38, 6016LL);
  v5 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v9 = v5;
  if ( !v5 )
  {
    v29 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v29 + 24) = this;
    WdLogEvent5_WdError(v29);
    LODWORD(v13) = -1071774967;
    goto LABEL_16;
  }
  v10 = DMMVIDPNTARGETMODESET::UnpinMode(v5, v6);
  v13 = v10;
  if ( v10 < 0 )
  {
    v30 = WdLogNewEntry5_WdTrace(v12, v11);
    *(_QWORD *)(v30 + 24) = this;
    *(_QWORD *)(v30 + 32) = v13;
    goto LABEL_16;
  }
  v14 = *((_QWORD *)v9 + 14);
  if ( !v14 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v31);
  }
  v15 = *(_QWORD *)(v14 + 40);
  if ( !v15 )
  {
    v32 = WdLogNewEntry5_WdAssertion(0LL, v11);
    WdLogEvent5_WdAssertion(v32);
    v15 = *(_QWORD *)(v14 + 40);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer(v15 + 64, v11);
  v18 = *(_QWORD *)(Container + 48);
  v41.VidPnSourceId = -1;
  v41.VidPnTargetId = *(_DWORD *)(v14 + 24);
  v19 = -(Container + 88);
  v20 = Container & -(__int64)(Container != -88);
  if ( !v20 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v19, v16);
    WdLogEvent5_WdAssertion(v33);
  }
  if ( v3 )
  {
    v21 = VIDPN_MGR::_EnumVidPnCofuncModality(v18, v20, 6, &v41);
    v13 = v21;
    if ( v21 < 0 )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v22);
      v34[3] = v20;
      v34[4] = 6LL;
      v34[5] = &v41;
      v35 = *(_QWORD *)(v18 + 8);
      if ( !v35 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v23, v22);
        WdLogEvent5_WdAssertion(v36);
        v35 = *(_QWORD *)(v18 + 8);
      }
      v34[6] = *(_QWORD *)(v35 + 16);
      v34[7] = v13;
      goto LABEL_14;
    }
  }
  else
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v19, v16);
    v28[3] = 6LL;
    v28[4] = v20;
    v28[5] = v41.VidPnSourceId;
    v28[6] = v41.VidPnTargetId;
    WdLogEvent5_WdDmmEvent(v28);
  }
  LODWORD(v13) = 0;
LABEL_14:
  if ( (int)v13 < 0 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v24);
    v37[3] = *(unsigned int *)(v14 + 24);
    v37[5] = (int)v13;
    v37[4] = Container;
    WdLogEvent5_WdError(v37);
  }
  else
  {
    LODWORD(v13) = 0;
  }
LABEL_16:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38, v22);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v38);
  return (unsigned int)v13;
}
