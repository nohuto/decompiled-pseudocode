/*
 * XREFs of ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E491C
 * Callers:
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00BDB48 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C00D4E90 (-PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00D887C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00D8EBC (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1C01398A0 (-UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N.c)
 *     ?UnpinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C013A5E0 (-UnpinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C027B194 (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C027D88C (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C027E0F0 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C027ED8C (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 * Callees:
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C00E4824 (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E5038 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 */

__int64 __fastcall VIDPN_MGR::FormalizeVidPnChange(
        __int64 a1,
        D3DKMDT_HVIDPN a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5)
{
  __int64 v5; // rbx
  char v6; // r14
  __int64 v8; // rdi
  int IsSupportedVidPn; // eax
  __int64 v10; // rsi
  unsigned int *v11; // r15
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r14
  __int64 result; // rax
  _QWORD *v19; // rax
  unsigned int *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int8 v35; // [rsp+50h] [rbp+18h] BYREF

  v5 = (int)a3;
  v6 = a4;
  v8 = a1;
  if ( !a2 )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v21);
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
      v22 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v22 + 24) = v5;
      WdLogEvent5_WdError(v22);
      goto LABEL_7;
    }
  }
  v35 = 0;
  IsSupportedVidPn = VIDPN_MGR::_IsSupportedVidPn((ADAPTER_DISPLAY **)v8, a2, &v35);
  v10 = IsSupportedVidPn;
  if ( IsSupportedVidPn < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v24[3] = a2;
    v25 = *(_QWORD *)(v8 + 8);
    if ( !v25 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v23);
      WdLogEvent5_WdAssertion(v26);
      v25 = *(_QWORD *)(v8 + 8);
    }
    v24[4] = *(_QWORD *)(v25 + 16);
    v24[5] = v10;
    WdLogEvent5_WdError(v24);
    return (unsigned int)v10;
  }
  if ( !v35 )
  {
    v28 = WdLogNewEntry5_WdDmmEvent(a1, a2, a3, a4);
    *(_QWORD *)(v28 + 24) = a2;
    v29 = *(_QWORD *)(v8 + 8);
    if ( !v29 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v27);
      WdLogEvent5_WdAssertion(v30);
      v29 = *(_QWORD *)(v8 + 8);
    }
    *(_QWORD *)(v28 + 32) = *(_QWORD *)(v29 + 16);
    WdLogEvent5_WdDmmEvent(v28);
    result = 3223192321LL;
    if ( (_DWORD)v5 != 1 )
      return 3223192326LL;
    return result;
  }
LABEL_7:
  if ( !v6 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(a1, a2, a3, a4);
    v20 = a5;
    v19[3] = v5;
    v19[4] = a2;
    v19[5] = *v20;
    v19[6] = v20[1];
    WdLogEvent5_WdDmmEvent(v19);
    return 0LL;
  }
  v11 = a5;
  v12 = VIDPN_MGR::_EnumVidPnCofuncModality(v8, a2, (unsigned int)v5, a5);
  v17 = v12;
  if ( v12 >= 0 )
    return 0LL;
  v32 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
  v32[3] = a2;
  v32[4] = v5;
  v32[5] = v11;
  v33 = *(_QWORD *)(v8 + 8);
  if ( !v33 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v31);
    WdLogEvent5_WdAssertion(v34);
    v33 = *(_QWORD *)(v8 + 8);
  }
  v32[6] = *(_QWORD *)(v33 + 16);
  result = (unsigned int)v17;
  v32[7] = v17;
  return result;
}
