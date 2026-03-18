/*
 * XREFs of ?UnpinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C012D7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000FA5C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00172C8 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E5038 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UnpinPathContentScaling(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        const GUID *a3,
        char a4)
{
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r12
  DMMVIDPNTOPOLOGY *v7; // rax
  __int64 v8; // rcx
  DMMVIDPNTOPOLOGY *v9; // rdi
  DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 Container; // r13
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rsi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  const GUID *v26; // r8
  _QWORD *v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  DXGK_ENUM_PIVOT v37; // [rsp+20h] [rbp-20h] BYREF
  int v38; // [rsp+28h] [rbp-18h] BYREF
  __int64 v39; // [rsp+30h] [rbp-10h]
  char v40; // [rsp+38h] [rbp-8h]

  v38 = -1;
  v4 = (__int64)this;
  v39 = 0LL;
  v5 = (unsigned int)a3;
  v6 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v40 = 1;
    v38 = 6027;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6027);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v38, 6027);
  v7 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v4);
  v9 = v7;
  if ( !v7 )
  {
    v29 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v29 + 24) = v4;
    WdLogEvent5_WdError(v29);
    LODWORD(v4) = -1071774976;
    goto LABEL_14;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(v7, v6, v5);
  if ( !Path )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v30[3] = v6;
    v30[4] = v5;
    v30[5] = v4;
    WdLogEvent5_WdError(v30);
    LODWORD(v4) = -1071774937;
    goto LABEL_14;
  }
  if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling(Path) < 0 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v31);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v9 + 160);
  v37.VidPnSourceId = v6;
  v37.VidPnTargetId = v5;
  v17 = *(_QWORD *)(Container + 48);
  v18 = -(Container + 88);
  v19 = Container & -(__int64)(Container != -88);
  if ( !v19 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v32);
  }
  if ( a4 )
  {
    v20 = VIDPN_MGR::_EnumVidPnCofuncModality(v17, v19, 8, &v37);
    v4 = v20;
    if ( v20 < 0 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
      v33[3] = v19;
      v33[4] = 8LL;
      v33[5] = &v37;
      v34 = *(_QWORD *)(v17 + 8);
      if ( !v34 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v22);
        WdLogEvent5_WdAssertion(v35);
        v34 = *(_QWORD *)(v17 + 8);
      }
      v33[6] = *(_QWORD *)(v34 + 16);
      v33[7] = v4;
      goto LABEL_12;
    }
  }
  else
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v18, v13, v14, v15);
    v28[3] = 8LL;
    v28[4] = v19;
    v28[5] = v37.VidPnSourceId;
    v28[6] = v37.VidPnTargetId;
    WdLogEvent5_WdDmmEvent(v28);
  }
  LODWORD(v4) = 0;
LABEL_12:
  if ( (int)v4 < 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v36[6] = (int)v4;
    v36[3] = v6;
    v36[4] = v5;
    v36[5] = Container;
    WdLogEvent5_WdError(v36);
  }
  else
  {
    LODWORD(v4) = 0;
  }
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v38);
  return (unsigned int)v4;
}
