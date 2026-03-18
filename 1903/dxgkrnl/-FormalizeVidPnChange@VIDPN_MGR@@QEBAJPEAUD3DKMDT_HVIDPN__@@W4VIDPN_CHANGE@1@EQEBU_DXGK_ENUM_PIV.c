/*
 * XREFs of ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E40DC
 * Callers:
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00E24F8 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00E2A60 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C012E580 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C0143AC0 (-PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@.c)
 *     ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1C017DA10 (-UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N.c)
 *     ?UnpinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C017EBA0 (-UnpinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C02B357C (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C02B58D4 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C02B6134 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C02B6DC8 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 * Callees:
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E351C (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C00E420C (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::FormalizeVidPnChange(
        unsigned __int64 a1,
        struct D3DKMDT_HVIDPN__ *a2,
        __int64 a3,
        char a4,
        DXGK_ENUM_PIVOT *a5)
{
  __int64 v5; // rbx
  VIDPN_MGR *v8; // rdi
  int IsSupportedVidPn; // eax
  __int64 v10; // r8
  __int64 v11; // rsi
  DXGK_ENUM_PIVOT *v12; // r15
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 result; // rax
  _QWORD *v18; // rax
  DXGK_ENUM_PIVOT *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int8 v37; // [rsp+50h] [rbp+18h] BYREF

  v5 = (int)a3;
  v8 = (VIDPN_MGR *)a1;
  if ( !a2 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, 0LL);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( (int)v5 <= 6 )
  {
    if ( (_DWORD)v5 == 6 )
      goto LABEL_7;
    if ( (_DWORD)v5 != 1 )
    {
      a1 = (unsigned int)(v5 - 2);
      if ( (_DWORD)v5 == 2 )
        goto LABEL_7;
      if ( (_DWORD)v5 != 3 )
      {
        a1 = (unsigned int)(v5 - 4);
        if ( (_DWORD)v5 == 4 )
          goto LABEL_7;
        if ( (_DWORD)v5 != 5 )
          goto LABEL_21;
      }
    }
  }
  else if ( (_DWORD)v5 != 7 )
  {
    if ( (_DWORD)v5 == 8 )
      goto LABEL_7;
    if ( (_DWORD)v5 != 9 )
    {
      if ( (int)v5 <= 11 )
        goto LABEL_7;
LABEL_21:
      v21 = WdLogNewEntry5_WdError(a1, a2, a3);
      *(_QWORD *)(v21 + 24) = v5;
      WdLogEvent5_WdError(v21);
      goto LABEL_7;
    }
  }
  v37 = 0;
  IsSupportedVidPn = VIDPN_MGR::_IsSupportedVidPn(v8, a2, &v37);
  v11 = IsSupportedVidPn;
  if ( IsSupportedVidPn < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2, v10);
    v24[3] = a2;
    v25 = *((_QWORD *)v8 + 1);
    if ( !v25 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v23, v22);
      WdLogEvent5_WdAssertion(v26);
      v25 = *((_QWORD *)v8 + 1);
    }
    v24[4] = *(_QWORD *)(v25 + 16);
    v24[5] = v11;
    WdLogEvent5_WdError(v24);
    return (unsigned int)v11;
  }
  if ( !v37 )
  {
    v29 = WdLogNewEntry5_WdDmmEvent(a1, a2);
    *(_QWORD *)(v29 + 24) = a2;
    v30 = *((_QWORD *)v8 + 1);
    if ( !v30 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v28, v27);
      WdLogEvent5_WdAssertion(v31);
      v30 = *((_QWORD *)v8 + 1);
    }
    *(_QWORD *)(v29 + 32) = *(_QWORD *)(v30 + 16);
    WdLogEvent5_WdDmmEvent(v29);
    result = 3223192321LL;
    if ( (_DWORD)v5 != 1 )
      return 3223192326LL;
    return result;
  }
LABEL_7:
  if ( !a4 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(a1, a2);
    v19 = a5;
    v18[3] = v5;
    v18[4] = a2;
    v18[5] = v19->VidPnSourceId;
    v18[6] = v19->VidPnTargetId;
    WdLogEvent5_WdDmmEvent(v18);
    return 0LL;
  }
  v12 = a5;
  v13 = VIDPN_MGR::_EnumVidPnCofuncModality((__int64)v8, (__int64)a2, v5, a5);
  v16 = v13;
  if ( v13 >= 0 )
    return 0LL;
  v34 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14);
  v34[3] = a2;
  v34[4] = v5;
  v34[5] = v12;
  v35 = *((_QWORD *)v8 + 1);
  if ( !v35 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v33, v32);
    WdLogEvent5_WdAssertion(v36);
    v35 = *((_QWORD *)v8 + 1);
  }
  v34[6] = *(_QWORD *)(v35 + 16);
  result = (unsigned int)v16;
  v34[7] = v16;
  return result;
}
