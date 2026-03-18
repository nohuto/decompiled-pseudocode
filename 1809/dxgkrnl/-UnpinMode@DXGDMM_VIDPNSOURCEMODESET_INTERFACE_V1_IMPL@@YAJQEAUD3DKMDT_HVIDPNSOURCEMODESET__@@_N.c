/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1C01398A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0007094 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C00182E4 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E491C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::UnpinMode(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const GUID *a3)
{
  char v3; // r14
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
  __int64 Container; // rax
  unsigned int v17; // edx
  __int64 v18; // rsi
  __int64 v19; // r9
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  const GUID *v24; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  int v31; // [rsp+30h] [rbp-20h] BYREF
  __int64 v32; // [rsp+38h] [rbp-18h]
  char v33; // [rsp+40h] [rbp-10h]
  unsigned int v34; // [rsp+80h] [rbp+30h] BYREF
  int v35; // [rsp+84h] [rbp+34h]

  v31 = -1;
  v3 = (char)a2;
  v32 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v33 = 1;
    v31 = 6008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6008);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 6008);
  v5 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
  v7 = v5;
  if ( v5 )
  {
    v8 = DMMVIDPNTARGETMODESET::UnpinMode(v5);
    v13 = v8;
    if ( v8 < 0 )
    {
      v27 = WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
      *(_QWORD *)(v27 + 24) = this;
      *(_QWORD *)(v27 + 32) = v13;
    }
    else
    {
      v14 = *((_QWORD *)v7 + 14);
      if ( !v14 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v28);
      }
      v15 = *(_QWORD *)(v14 + 40);
      if ( !v15 )
      {
        v29 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v29);
        v15 = *(_QWORD *)(v14 + 40);
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer(v15 + 64);
      v17 = *(_DWORD *)(v14 + 24);
      v18 = Container;
      LOBYTE(v19) = v3;
      v20 = *(_QWORD *)(Container + 48);
      v35 = -1;
      v34 = v17;
      v21 = VIDPN_MGR::FormalizeVidPnChange(
              v20,
              (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
              4LL,
              v19,
              &v34);
      v13 = v21;
      if ( v21 < 0 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v22);
        v30[3] = *(unsigned int *)(v14 + 24);
        v30[4] = v18;
        v30[5] = v13;
        WdLogEvent5_WdError(v30);
      }
      else
      {
        LODWORD(v13) = 0;
      }
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v26 + 24) = this;
    WdLogEvent5_WdError(v26);
    LODWORD(v13) = -1071774968;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v31);
  return (unsigned int)v13;
}
