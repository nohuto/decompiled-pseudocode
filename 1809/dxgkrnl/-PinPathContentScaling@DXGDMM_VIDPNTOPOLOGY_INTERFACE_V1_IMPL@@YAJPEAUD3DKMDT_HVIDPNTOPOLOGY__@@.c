/*
 * XREFs of ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C00D9790
 * Callers:
 *     <none>
 * Callees:
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000A71C (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000FA5C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00172C8 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C00E4824 (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E5038 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
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
  __int64 v10; // rcx
  DMMVIDPNTOPOLOGY *v11; // rdi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *Path; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  DMMVIDPNPRESENTPATH *v16; // r15
  int v17; // eax
  __int64 v18; // rcx
  __int64 Container; // rax
  VIDPN_MGR *v20; // rdi
  struct D3DKMDT_HVIDPN__ *v21; // rsi
  int IsSupportedVidPn; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  const GUID *v33; // r8
  _QWORD *v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // r14
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // r14
  __int64 v51; // rax
  _QWORD *v52; // rax
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rax
  unsigned __int8 v56[4]; // [rsp+20h] [rbp-30h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v57; // [rsp+24h] [rbp-2Ch]
  unsigned int v58; // [rsp+28h] [rbp-28h] BYREF
  unsigned int v59; // [rsp+2Ch] [rbp-24h]
  int v60; // [rsp+30h] [rbp-20h] BYREF
  __int64 v61; // [rsp+38h] [rbp-18h]
  char v62; // [rsp+40h] [rbp-10h]

  v60 = -1;
  v5 = (__int64)this;
  v61 = 0LL;
  v6 = a4;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v62 = 1;
    v60 = 6026;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6026);
  }
  else
  {
    v62 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v60, 6026);
  v9 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
  v11 = v9;
  if ( !v9 )
  {
    v36 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v36 + 24) = v5;
    WdLogEvent5_WdError(v36);
    LODWORD(v5) = -1071774976;
    goto LABEL_16;
  }
  if ( (_DWORD)v6 == 254 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v37[3] = 254LL;
    v37[4] = v8;
    v37[5] = v7;
    v37[6] = v5;
    WdLogEvent5_WdError(v37);
    LODWORD(v5) = -1071774907;
    goto LABEL_16;
  }
  Path = (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)DMMVIDPNTOPOLOGY::FindPath(v9, v8, v7);
  v16 = (DMMVIDPNPRESENTPATH *)Path;
  if ( !Path )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
    v38[3] = v8;
    v38[4] = v7;
    v38[5] = v5;
    WdLogEvent5_WdWarning(v38);
    LODWORD(v5) = -1071774937;
    goto LABEL_16;
  }
  v57 = *((_DWORD *)Path + 28);
  v17 = DMMVIDPNPRESENTPATH::PinContentScaling(
          (DMMVIDPNPRESENTPATH *)Path,
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v6);
  v5 = v17;
  if ( v17 < 0 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v39[3] = v6;
    v39[4] = v8;
    v39[5] = v7;
    v39[6] = v5;
    WdLogEvent5_WdError(v39);
    goto LABEL_16;
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v11 + 160);
  v58 = v8;
  v59 = v7;
  v20 = *(VIDPN_MGR **)(Container + 48);
  v21 = (struct D3DKMDT_HVIDPN__ *)(Container & -(__int64)(Container != -88));
  if ( !v21 )
  {
    v40 = WdLogNewEntry5_WdAssertion(-(Container + 88));
    WdLogEvent5_WdAssertion(v40);
  }
  v56[0] = 0;
  IsSupportedVidPn = VIDPN_MGR::_IsSupportedVidPn(v20, v21, v56);
  v5 = IsSupportedVidPn;
  if ( IsSupportedVidPn < 0 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdError(v24);
    v42[3] = v21;
    v43 = *((_QWORD *)v20 + 1);
    if ( !v43 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v41);
      WdLogEvent5_WdAssertion(v44);
      v43 = *((_QWORD *)v20 + 1);
    }
    v42[4] = *(_QWORD *)(v43 + 16);
    v42[5] = v5;
    WdLogEvent5_WdError(v42);
  }
  else
  {
    if ( !v56[0] )
    {
      v5 = WdLogNewEntry5_WdDmmEvent(v24, v23, v25, v26);
      *(_QWORD *)(v5 + 24) = v21;
      v47 = *((_QWORD *)v20 + 1);
      if ( !v47 )
      {
        v48 = WdLogNewEntry5_WdAssertion(v46);
        WdLogEvent5_WdAssertion(v48);
        v47 = *((_QWORD *)v20 + 1);
      }
      *(_QWORD *)(v5 + 32) = *(_QWORD *)(v47 + 16);
      WdLogEvent5_WdDmmEvent(v5);
      LODWORD(v5) = -1071774970;
      goto LABEL_33;
    }
    if ( !(_BYTE)a5 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v24, v23, v25, v26);
      v35[3] = 7LL;
      v35[4] = v21;
      v35[5] = v58;
      v35[6] = v59;
      WdLogEvent5_WdDmmEvent(v35);
      goto LABEL_13;
    }
    v27 = VIDPN_MGR::_EnumVidPnCofuncModality(v20, v21, 7LL, &v58);
    v5 = v27;
    if ( v27 >= 0 )
    {
LABEL_13:
      LODWORD(v5) = 0;
      goto LABEL_14;
    }
    v50 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
    v50[3] = v21;
    v50[4] = 7LL;
    v50[5] = &v58;
    v51 = *((_QWORD *)v20 + 1);
    if ( !v51 )
    {
      v45 = WdLogNewEntry5_WdAssertion(v29);
      WdLogEvent5_WdAssertion(v45);
      v51 = *((_QWORD *)v20 + 1);
    }
    v50[6] = *(_QWORD *)(v51 + 16);
    v50[7] = v5;
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
    v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
    v49[3] = v8;
    v49[4] = v7;
    v49[5] = (int)v6;
    WdLogEvent5_WdWarning(v49);
  }
  else
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v29);
    v52[6] = (int)v5;
    v52[3] = (int)v6;
    v52[4] = v8;
    v52[5] = v7;
    WdLogEvent5_WdError(v52);
  }
  if ( v57 == D3DKMDT_VPPS_UNPINNED )
    v53 = DMMVIDPNPRESENTPATH::UnpinContentScaling(v16);
  else
    v53 = DMMVIDPNPRESENTPATH::PinContentScaling(v16, v57);
  if ( v53 < 0 )
  {
    v55 = WdLogNewEntry5_WdAssertion(v54);
    WdLogEvent5_WdAssertion(v55);
  }
LABEL_16:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
  if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v32, &EventProfilerExit, v33, v60);
  return (unsigned int)v5;
}
