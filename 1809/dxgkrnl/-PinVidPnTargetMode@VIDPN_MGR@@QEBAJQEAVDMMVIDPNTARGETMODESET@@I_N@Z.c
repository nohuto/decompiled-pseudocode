/*
 * XREFs of ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00D8EBC
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00AFA74 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00B8160 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     BmlPinNextBestTargetMode @ 0x1C00D6574 (BmlPinNextBestTargetMode.c)
 *     ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1C00D8BE0 (-PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C027E0F0 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C028A3E4 (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C00182E4 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C00D96B8 (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E491C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall VIDPN_MGR::PinVidPnTargetMode(
        VIDPN_MGR *this,
        struct DMMVIDPNTARGETMODESET *const a2,
        unsigned int a3,
        char a4)
{
  __int64 v4; // rbp
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 Container; // r12
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r15
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *v35; // rax
  _QWORD *v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // [rsp+68h] [rbp+10h] BYREF
  int v44; // [rsp+6Ch] [rbp+14h]

  v4 = a3;
  if ( !a2 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v23 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v23);
  }
  v8 = *((_QWORD *)a2 + 18);
  v9 = DMMVIDPNTARGETMODESET::PinMode(a2, v4);
  v11 = v9;
  if ( v9 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v25[3] = v4;
    v25[4] = a2;
    v26 = *((_QWORD *)this + 1);
    if ( !v26 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v24);
      WdLogEvent5_WdAssertion(v27);
      v26 = *((_QWORD *)this + 1);
    }
    v25[5] = *(_QWORD *)(v26 + 16);
    v25[6] = v11;
    WdLogEvent5_WdError(v25);
    return (unsigned int)v11;
  }
  else
  {
    v12 = *((_QWORD *)a2 + 14);
    if ( !v12 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v28);
    }
    v13 = *(_QWORD *)(v12 + 40);
    if ( !v13 )
    {
      v29 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v29);
      v13 = *(_QWORD *)(v12 + 40);
    }
    Container = ContainedBy<DMMVIDPN>::GetContainer(v13 + 64);
    v44 = *(_DWORD *)(v12 + 24);
    LOBYTE(v15) = a4;
    v43 = -1;
    v16 = VIDPN_MGR::FormalizeVidPnChange(this, Container & -(__int64)(Container != -88), 5LL, v15, &v43);
    v20 = v16;
    if ( v16 < 0 )
    {
      if ( v16 == -1071774970 )
      {
        v30 = WdLogNewEntry5_WdWarning(v18, v17, v19);
        *(_QWORD *)(v30 + 24) = v4;
        *(_QWORD *)(v30 + 32) = a2;
        WdLogEvent5_WdWarning(v30);
      }
      else
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdError(v18);
        v35[3] = v4;
        v35[4] = a2;
        v35[5] = v20;
        WdLogEvent5_WdError(v35);
      }
      v36 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v32, v31, v33, v34);
      v36[3] = v4;
      v37 = *(unsigned int *)(v12 + 24);
      v36[4] = v37;
      v36[5] = Container;
      v38 = *((_QWORD *)this + 1);
      if ( !v38 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v37);
        WdLogEvent5_WdAssertion(v39);
        v38 = *((_QWORD *)this + 1);
      }
      v36[6] = *(_QWORD *)(v38 + 16);
      WdLogEvent5_WdDmmEvent(v36);
      if ( v8 )
        v40 = DMMVIDPNTARGETMODESET::PinMode(a2, *(_DWORD *)(v8 + 24));
      else
        v40 = DMMVIDPNTARGETMODESET::UnpinMode(a2);
      if ( v40 < 0 )
      {
        v42 = WdLogNewEntry5_WdAssertion(v41);
        WdLogEvent5_WdAssertion(v42);
      }
      return (unsigned int)v20;
    }
    else
    {
      return 0LL;
    }
  }
}
