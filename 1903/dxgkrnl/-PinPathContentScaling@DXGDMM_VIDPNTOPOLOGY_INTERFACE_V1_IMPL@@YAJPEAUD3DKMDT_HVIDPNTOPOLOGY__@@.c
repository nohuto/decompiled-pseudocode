/*
 * XREFs of ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C00E2DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00057AC (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005854 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00058E0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0019114 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C001FF10 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E351C (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C00E420C (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::PinPathContentScaling(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        const GUID *a3,
        int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a5)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // r13
  DMMVIDPNTOPOLOGY *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  DMMVIDPNTOPOLOGY *v13; // rdi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *Path; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  DMMVIDPNPRESENTPATH *v18; // r15
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 Container; // rax
  __int64 v24; // rdx
  VIDPN_MGR *v25; // rdi
  struct D3DKMDT_HVIDPN__ *v26; // rsi
  int IsSupportedVidPn; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  const GUID *v36; // r8
  _QWORD *v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  _QWORD *v46; // r14
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  _QWORD *v57; // r14
  __int64 v58; // rax
  _QWORD *v59; // rax
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rax
  unsigned __int8 v63[4]; // [rsp+20h] [rbp-30h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v64; // [rsp+24h] [rbp-2Ch]
  unsigned int v65; // [rsp+28h] [rbp-28h] BYREF
  unsigned int v66; // [rsp+2Ch] [rbp-24h]
  int v67; // [rsp+30h] [rbp-20h] BYREF
  __int64 v68; // [rsp+38h] [rbp-18h]
  char v69; // [rsp+40h] [rbp-10h]

  v67 = -1;
  v5 = (__int64)this;
  v68 = 0LL;
  v6 = a4;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v69 = 1;
    v67 = 6026;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6026);
  }
  else
  {
    v69 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v67, 6026LL);
  v9 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
  v13 = v9;
  if ( !v9 )
  {
    v39 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v39 + 24) = v5;
    WdLogEvent5_WdError(v39);
    LODWORD(v5) = -1071774976;
    goto LABEL_16;
  }
  if ( (_DWORD)v6 == 254 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
    v40[3] = 254LL;
    v40[4] = v8;
    v40[5] = v7;
    v40[6] = v5;
    WdLogEvent5_WdError(v40);
    LODWORD(v5) = -1071774907;
    goto LABEL_16;
  }
  Path = (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)DMMVIDPNTOPOLOGY::FindPath(v9, v8, v7);
  v18 = (DMMVIDPNPRESENTPATH *)Path;
  if ( !Path )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
    v41[3] = v8;
    v41[4] = v7;
    v41[5] = v5;
    WdLogEvent5_WdWarning(v41);
    LODWORD(v5) = -1071774937;
    goto LABEL_16;
  }
  v64 = *((_DWORD *)Path + 28);
  v19 = DMMVIDPNPRESENTPATH::PinContentScaling((DMMVIDPNPRESENTPATH *)Path, (unsigned int)v6, v17);
  v5 = v19;
  if ( v19 < 0 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20, v22);
    v42[3] = v6;
    v42[4] = v8;
    v42[5] = v7;
    v42[6] = v5;
    WdLogEvent5_WdError(v42);
    goto LABEL_16;
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v13 + 160, v20);
  v65 = v8;
  v66 = v7;
  v25 = *(VIDPN_MGR **)(Container + 48);
  v26 = (struct D3DKMDT_HVIDPN__ *)(Container & -(__int64)(Container != -88));
  if ( !v26 )
  {
    v43 = WdLogNewEntry5_WdAssertion(-(Container + 88), v24);
    WdLogEvent5_WdAssertion(v43);
  }
  v63[0] = 0;
  IsSupportedVidPn = VIDPN_MGR::_IsSupportedVidPn(v25, v26, v63);
  v5 = IsSupportedVidPn;
  if ( IsSupportedVidPn < 0 )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28, v30);
    v46[3] = v26;
    v47 = *((_QWORD *)v25 + 1);
    if ( !v47 )
    {
      v48 = WdLogNewEntry5_WdAssertion(v45, v44);
      WdLogEvent5_WdAssertion(v48);
      v47 = *((_QWORD *)v25 + 1);
    }
    v46[4] = *(_QWORD *)(v47 + 16);
    v46[5] = v5;
    WdLogEvent5_WdError(v46);
  }
  else
  {
    if ( !v63[0] )
    {
      v5 = WdLogNewEntry5_WdDmmEvent(v29, v28);
      *(_QWORD *)(v5 + 24) = v26;
      v52 = *((_QWORD *)v25 + 1);
      if ( !v52 )
      {
        v53 = WdLogNewEntry5_WdAssertion(v51, v50);
        WdLogEvent5_WdAssertion(v53);
        v52 = *((_QWORD *)v25 + 1);
      }
      *(_QWORD *)(v5 + 32) = *(_QWORD *)(v52 + 16);
      WdLogEvent5_WdDmmEvent(v5);
      LODWORD(v5) = -1071774970;
      goto LABEL_33;
    }
    if ( !(_BYTE)a5 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v29, v28);
      v38[3] = 7LL;
      v38[4] = v26;
      v38[5] = v65;
      v38[6] = v66;
      WdLogEvent5_WdDmmEvent(v38);
      goto LABEL_13;
    }
    v31 = VIDPN_MGR::_EnumVidPnCofuncModality(v25, v26, 7LL, &v65);
    v5 = v31;
    if ( v31 >= 0 )
    {
LABEL_13:
      LODWORD(v5) = 0;
      goto LABEL_14;
    }
    v57 = (_QWORD *)WdLogNewEntry5_WdTrace(v33, v32);
    v57[3] = v26;
    v57[4] = 7LL;
    v57[5] = &v65;
    v58 = *((_QWORD *)v25 + 1);
    if ( !v58 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v33, v32);
      WdLogEvent5_WdAssertion(v49);
      v58 = *((_QWORD *)v25 + 1);
    }
    v57[6] = *(_QWORD *)(v58 + 16);
    v57[7] = v5;
  }
  LODWORD(v6) = a4;
LABEL_14:
  if ( (int)v5 >= 0 )
  {
    LODWORD(v5) = 0;
    goto LABEL_16;
  }
LABEL_33:
  if ( (_DWORD)v5 == -1071774970 )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34);
    v54[3] = v8;
    v54[4] = v7;
    v54[5] = (int)v6;
    WdLogEvent5_WdWarning(v54);
  }
  else
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32, v34);
    v59[6] = (int)v5;
    v59[3] = (int)v6;
    v59[4] = v8;
    v59[5] = v7;
    WdLogEvent5_WdError(v59);
  }
  if ( v64 == D3DKMDT_VPPS_UNPINNED )
    v60 = DMMVIDPNPRESENTPATH::UnpinContentScaling(v18, v55);
  else
    v60 = DMMVIDPNPRESENTPATH::PinContentScaling(v18, (unsigned int)v64, v56);
  if ( v60 < 0 )
  {
    v62 = WdLogNewEntry5_WdAssertion(v61, v32);
    WdLogEvent5_WdAssertion(v62);
  }
LABEL_16:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67, v32);
  if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v35, &EventProfilerExit, v36, v67);
  return (unsigned int)v5;
}
