/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1C017DA10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0003EB8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0019114 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C0021D88 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E40DC (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::UnpinMode(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const GUID *a3)
{
  char v3; // r14
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
  __int64 Container; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v17; // edx
  __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  const GUID *v25; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  int v32; // [rsp+30h] [rbp-20h] BYREF
  __int64 v33; // [rsp+38h] [rbp-18h]
  char v34; // [rsp+40h] [rbp-10h]
  DXGK_ENUM_PIVOT v35; // [rsp+80h] [rbp+30h] BYREF

  v32 = -1;
  v3 = (char)a2;
  v33 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v34 = 1;
    v32 = 6008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6008);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 6008LL);
  v5 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
  v9 = v5;
  if ( v5 )
  {
    v10 = DMMVIDPNTARGETMODESET::UnpinMode(v5, v6);
    v13 = v10;
    if ( v10 < 0 )
    {
      v28 = WdLogNewEntry5_WdTrace(v12, v11);
      *(_QWORD *)(v28 + 24) = this;
      *(_QWORD *)(v28 + 32) = v13;
    }
    else
    {
      v14 = *((_QWORD *)v9 + 14);
      if ( !v14 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v12, v11);
        WdLogEvent5_WdAssertion(v29);
      }
      v15 = *(_QWORD *)(v14 + 40);
      if ( !v15 )
      {
        v30 = WdLogNewEntry5_WdAssertion(0LL, v11);
        WdLogEvent5_WdAssertion(v30);
        v15 = *(_QWORD *)(v14 + 40);
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer(v15 + 64, v11);
      v17 = *(_DWORD *)(v14 + 24);
      v18 = Container;
      v19 = *(_QWORD *)(Container + 48);
      v35.VidPnTargetId = -1;
      v35.VidPnSourceId = v17;
      v20 = VIDPN_MGR::FormalizeVidPnChange(
              v19,
              (struct D3DKMDT_HVIDPN__ *)(Container & -(__int64)(Container != -88)),
              4LL,
              v3,
              &v35);
      v13 = v20;
      if ( v20 < 0 )
      {
        v31 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21, v23);
        v31[3] = *(unsigned int *)(v14 + 24);
        v31[4] = v18;
        v31[5] = v13;
        WdLogEvent5_WdError(v31);
      }
      else
      {
        LODWORD(v13) = 0;
      }
    }
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v27 + 24) = this;
    WdLogEvent5_WdError(v27);
    LODWORD(v13) = -1071774968;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v21);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v32);
  return (unsigned int)v13;
}
