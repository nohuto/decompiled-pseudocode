/*
 * XREFs of ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C01320F8
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00DDF98 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlFunctionalizePath @ 0x1C012741C (BmlFunctionalizePath.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0131EFC (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@Z @ 0x1C017D3E0 (-PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C02B6544 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     _BmlGetPathModeListForPath @ 0x1C02C24D8 (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00199C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C0021DD8 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E471C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C01321DC (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinVidPnSourceMode(
        VIDPN_MGR *this,
        struct DMMVIDPNSOURCEMODESET *const a2,
        unsigned int a3,
        char a4)
{
  __int64 v4; // rbp
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 Container; // r12
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r15
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  DXGK_ENUM_PIVOT v46; // [rsp+68h] [rbp+10h] BYREF

  v4 = a3;
  if ( !a2 )
  {
    v23 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v24 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v24);
  }
  v8 = *((_QWORD *)a2 + 18);
  v9 = DMMVIDPNSOURCEMODESET::PinMode(a2, v4);
  v13 = v9;
  if ( v9 < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
    v27[3] = v4;
    v27[4] = a2;
    v28 = *((_QWORD *)this + 1);
    if ( !v28 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v26, v25);
      WdLogEvent5_WdAssertion(v29);
      v28 = *((_QWORD *)this + 1);
    }
    v27[5] = *(_QWORD *)(v28 + 16);
    v27[6] = v13;
    WdLogEvent5_WdError(v27);
    return (unsigned int)v13;
  }
  else
  {
    v14 = *((_QWORD *)a2 + 14);
    if ( !v14 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v11, v10);
      WdLogEvent5_WdAssertion(v30);
    }
    v15 = *(_QWORD *)(v14 + 40);
    if ( !v15 )
    {
      v31 = WdLogNewEntry5_WdAssertion(0LL, v10);
      WdLogEvent5_WdAssertion(v31);
      v15 = *(_QWORD *)(v14 + 40);
    }
    Container = ContainedBy<DMMVIDPN>::GetContainer(v15 + 64, v10);
    v46.VidPnSourceId = *(_DWORD *)(v14 + 24);
    v46.VidPnTargetId = -1;
    v17 = VIDPN_MGR::FormalizeVidPnChange(
            (unsigned __int64)this,
            (struct D3DKMDT_HVIDPN__ *)(Container & -(__int64)(Container != -88)),
            3LL,
            a4,
            &v46);
    v21 = v17;
    if ( v17 < 0 )
    {
      if ( v17 == -1071774970 )
      {
        v32 = WdLogNewEntry5_WdWarning(v19, v18, v20);
        *(_QWORD *)(v32 + 24) = v4;
        *(_QWORD *)(v32 + 32) = a2;
        WdLogEvent5_WdWarning(v32);
      }
      else
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18, v20);
        v35[3] = v4;
        v35[4] = a2;
        v35[5] = v21;
        WdLogEvent5_WdError(v35);
      }
      v37 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v34, v33);
      v37[3] = v4;
      v38 = *(unsigned int *)(v14 + 24);
      v37[4] = v38;
      v37[5] = Container;
      v39 = *((_QWORD *)this + 1);
      if ( !v39 )
      {
        v40 = WdLogNewEntry5_WdAssertion(v38, v36);
        WdLogEvent5_WdAssertion(v40);
        v39 = *((_QWORD *)this + 1);
      }
      v37[6] = *(_QWORD *)(v39 + 16);
      WdLogEvent5_WdDmmEvent(v37);
      if ( v8 )
        v42 = DMMVIDPNSOURCEMODESET::PinMode(a2, *(_DWORD *)(v8 + 24));
      else
        v42 = DMMVIDPNTARGETMODESET::UnpinMode(a2, v41);
      if ( v42 < 0 )
      {
        v45 = WdLogNewEntry5_WdAssertion(v44, v43);
        WdLogEvent5_WdAssertion(v45);
      }
      return (unsigned int)v21;
    }
    else
    {
      return 0LL;
    }
  }
}
