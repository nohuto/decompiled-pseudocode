/*
 * XREFs of ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C00E484C
 * Callers:
 *     ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C00E33E0 (-PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E471C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C02B5E38 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00045B8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C00E31E8 (-DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C00E4944 (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_IsSupportedVidPn(ADAPTER_DISPLAY **this, D3DKMDT_HVIDPN a2, unsigned __int8 *const a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  ADAPTER_DISPLAY *v10; // rax
  DXGADAPTER *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  ADAPTER_DISPLAY *v14; // rcx
  int IsSupportedVidPn; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  _DXGKARG_ISSUPPORTEDVIDPN v29; // [rsp+20h] [rbp-18h] BYREF

  if ( !a3 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v22);
  }
  *a3 = 0;
  v6 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)a2);
  v9 = v6;
  if ( !*(_BYTE *)(v6 + 296) && !DmmIsAllSourcesPixelFormatValid(v6 + 96, v7) )
  {
    v23 = WdLogNewEntry5_WdError(v8, v7, v21);
    *(_QWORD *)(v23 + 24) = a2;
    WdLogEvent5_WdError(v23);
    *a3 = 0;
    return 0LL;
  }
  LOBYTE(v8) = *(_BYTE *)(v9 + 172);
  if ( ((unsigned __int16)((2 << v8) - 1) & *(_WORD *)(v9 + 174)) != 0 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v24);
  }
  v10 = this[1];
  if ( !v10 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v25);
    v10 = this[1];
  }
  v11 = (DXGADAPTER *)*((_QWORD *)v10 + 2);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v11) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v26);
  }
  v14 = this[1];
  *(_QWORD *)&v29.IsVidPnSupported = 0LL;
  v29.hDesiredVidPn = a2;
  if ( !v14 )
  {
    v27 = WdLogNewEntry5_WdAssertion(0LL, v12);
    WdLogEvent5_WdAssertion(v27);
    v14 = this[1];
  }
  IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn(v14, &v29);
  v19 = IsSupportedVidPn;
  if ( IsSupportedVidPn >= 0 )
  {
    *a3 = v29.IsVidPnSupported;
    return 0LL;
  }
  v28 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v18);
  v28[3] = a2;
  v28[4] = v11;
  v28[5] = v19;
  WdLogEvent5_WdError(v28);
  return (unsigned int)v19;
}
