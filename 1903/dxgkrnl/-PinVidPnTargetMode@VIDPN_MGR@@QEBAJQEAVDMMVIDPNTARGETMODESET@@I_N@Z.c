/*
 * XREFs of ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00E24F8
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1C00D2924 (BmlPinNextBestTargetMode.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00DD958 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C012E384 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1C0176C10 (-PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C02B6134 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C02C2778 (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0019114 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C0021D88 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E40DC (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C00E636C (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 Container; // r12
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r15
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // [rsp+68h] [rbp+10h] BYREF
  int v48; // [rsp+6Ch] [rbp+14h]

  v4 = a3;
  if ( !a2 )
  {
    v24 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v24);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v25 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v25);
  }
  v8 = *((_QWORD *)a2 + 18);
  v9 = DMMVIDPNTARGETMODESET::PinMode(a2, v4);
  v13 = v9;
  if ( v9 < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
    v28[3] = v4;
    v28[4] = a2;
    v29 = *((_QWORD *)this + 1);
    if ( !v29 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v27, v26);
      WdLogEvent5_WdAssertion(v30);
      v29 = *((_QWORD *)this + 1);
    }
    v28[5] = *(_QWORD *)(v29 + 16);
    v28[6] = v13;
    WdLogEvent5_WdError(v28);
    return (unsigned int)v13;
  }
  else
  {
    v14 = *((_QWORD *)a2 + 14);
    if ( !v14 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v11, v10);
      WdLogEvent5_WdAssertion(v31);
    }
    v15 = *(_QWORD *)(v14 + 40);
    if ( !v15 )
    {
      v32 = WdLogNewEntry5_WdAssertion(0LL, v10);
      WdLogEvent5_WdAssertion(v32);
      v15 = *(_QWORD *)(v14 + 40);
    }
    Container = ContainedBy<DMMVIDPN>::GetContainer(v15 + 64, v10);
    v48 = *(_DWORD *)(v14 + 24);
    LOBYTE(v17) = a4;
    v47 = -1;
    v18 = VIDPN_MGR::FormalizeVidPnChange(this, Container & -(__int64)(Container != -88), 5LL, v17, &v47);
    v22 = v18;
    if ( v18 < 0 )
    {
      if ( v18 == -1071774970 )
      {
        v33 = WdLogNewEntry5_WdWarning(v20, v19, v21);
        *(_QWORD *)(v33 + 24) = v4;
        *(_QWORD *)(v33 + 32) = a2;
        WdLogEvent5_WdWarning(v33);
      }
      else
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19, v21);
        v36[3] = v4;
        v36[4] = a2;
        v36[5] = v22;
        WdLogEvent5_WdError(v36);
      }
      v38 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v35, v34);
      v38[3] = v4;
      v39 = *(unsigned int *)(v14 + 24);
      v38[4] = v39;
      v38[5] = Container;
      v40 = *((_QWORD *)this + 1);
      if ( !v40 )
      {
        v41 = WdLogNewEntry5_WdAssertion(v39, v37);
        WdLogEvent5_WdAssertion(v41);
        v40 = *((_QWORD *)this + 1);
      }
      v38[6] = *(_QWORD *)(v40 + 16);
      WdLogEvent5_WdDmmEvent(v38);
      if ( v8 )
        v43 = DMMVIDPNTARGETMODESET::PinMode(a2, *(_DWORD *)(v8 + 24));
      else
        v43 = DMMVIDPNTARGETMODESET::UnpinMode(a2, v42);
      if ( v43 < 0 )
      {
        v46 = WdLogNewEntry5_WdAssertion(v45, v44);
        WdLogEvent5_WdAssertion(v46);
      }
      return (unsigned int)v22;
    }
    else
    {
      return 0LL;
    }
  }
}
