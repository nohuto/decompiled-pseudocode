/*
 * XREFs of ?UnpinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C0172E60
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005814 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00058A0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00199C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C001FF60 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E3B5C (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
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
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  DMMVIDPNTOPOLOGY *v11; // rdi
  DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 Container; // r13
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rsi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  const GUID *v28; // r8
  _QWORD *v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  DXGK_ENUM_PIVOT v39; // [rsp+20h] [rbp-20h] BYREF
  int v40; // [rsp+28h] [rbp-18h] BYREF
  __int64 v41; // [rsp+30h] [rbp-10h]
  char v42; // [rsp+38h] [rbp-8h]

  v40 = -1;
  v4 = (__int64)this;
  v41 = 0LL;
  v5 = (unsigned int)a3;
  v6 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v42 = 1;
    v40 = 6027;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6027);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v40, 6027LL);
  v7 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v4);
  v11 = v7;
  if ( !v7 )
  {
    v31 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v31 + 24) = v4;
    WdLogEvent5_WdError(v31);
    LODWORD(v4) = -1071774976;
    goto LABEL_14;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(v7, v6, v5);
  if ( !Path )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13, v15);
    v32[3] = v6;
    v32[4] = v5;
    v32[5] = v4;
    WdLogEvent5_WdError(v32);
    LODWORD(v4) = -1071774937;
    goto LABEL_14;
  }
  if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling(Path, v13) < 0 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v17, v16);
    WdLogEvent5_WdAssertion(v33);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v11 + 160, v16);
  v39.VidPnSourceId = v6;
  v39.VidPnTargetId = v5;
  v20 = *(_QWORD *)(Container + 48);
  v21 = -(Container + 88);
  v22 = Container & -(__int64)(Container != -88);
  if ( !v22 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v21, v18);
    WdLogEvent5_WdAssertion(v34);
  }
  if ( a4 )
  {
    v23 = VIDPN_MGR::_EnumVidPnCofuncModality(v20, v22, 8, &v39);
    v4 = v23;
    if ( v23 < 0 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24);
      v35[3] = v22;
      v35[4] = 8LL;
      v35[5] = &v39;
      v36 = *(_QWORD *)(v20 + 8);
      if ( !v36 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v25, v24);
        WdLogEvent5_WdAssertion(v37);
        v36 = *(_QWORD *)(v20 + 8);
      }
      v35[6] = *(_QWORD *)(v36 + 16);
      v35[7] = v4;
      goto LABEL_12;
    }
  }
  else
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v21, v18);
    v30[3] = 8LL;
    v30[4] = v22;
    v30[5] = v39.VidPnSourceId;
    v30[6] = v39.VidPnTargetId;
    WdLogEvent5_WdDmmEvent(v30);
  }
  LODWORD(v4) = 0;
LABEL_12:
  if ( (int)v4 < 0 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24, v26);
    v38[6] = (int)v4;
    v38[3] = v6;
    v38[4] = v5;
    v38[5] = Container;
    WdLogEvent5_WdError(v38);
  }
  else
  {
    LODWORD(v4) = 0;
  }
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v24);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v27, &EventProfilerExit, v28, v40);
  return (unsigned int)v4;
}
