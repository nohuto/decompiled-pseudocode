/*
 * XREFs of ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E351C
 * Callers:
 *     ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C00E2DA0 (-PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E40DC (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?UnpinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C016F070 (-UnpinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__.c)
 *     ?UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N@Z @ 0x1C0178FA0 (-UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C02B5A28 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00045F8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E3C04 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E3D70 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C00E3DD4 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_EnumVidPnCofuncModality(__int64 a1, __int64 a2, int a3, DXGK_ENUM_PIVOT *a4)
{
  __int64 v5; // rbx
  D3DKMDT_ENUMCOFUNCMODALITY_PIVOT_TYPE v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  ADAPTER_DISPLAY *v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  _DXGKARG_ENUMVIDPNCOFUNCMODALITY v31; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v32[24]; // [rsp+58h] [rbp-40h] BYREF

  v5 = a3;
  v8 = D3DKMDT_EPT_VIDPNTARGET;
  v10 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
  LOBYTE(v12) = *(_BYTE *)(v10 + 172);
  if ( ((unsigned __int16)((2 << v12) - 1) & *(_WORD *)(v10 + 174)) != 0 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v12, v9);
    WdLogEvent5_WdAssertion(v25);
  }
  LOBYTE(v11) = 3;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v32, v10 + 152, v11);
  v14 = *(_QWORD *)(a1 + 8);
  if ( !v14 )
  {
    v26 = WdLogNewEntry5_WdAssertion(0LL, v13);
    WdLogEvent5_WdAssertion(v26);
    v14 = *(_QWORD *)(a1 + 8);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v14 + 16)) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v16, v15);
    WdLogEvent5_WdAssertion(v27);
  }
  *(_QWORD *)&v31.EnumPivot.VidPnTargetId = 0LL;
  v31.hConstrainingVidPn = (D3DKMDT_HVIDPN)a2;
  if ( (int)v5 > 8 )
  {
    if ( (int)v5 <= 10 )
    {
      v8 = D3DKMDT_EPT_ROTATION;
      goto LABEL_10;
    }
    if ( (_DWORD)v5 == 11 )
    {
LABEL_21:
      v8 = D3DKMDT_EPT_NOPIVOT;
      goto LABEL_10;
    }
LABEL_25:
    v28 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v28 + 24) = v5;
    WdLogEvent5_WdError(v28);
    v8 = D3DKMDT_EPT_UNINITIALIZED;
    goto LABEL_10;
  }
  if ( (int)v5 >= 7 )
  {
    v8 = D3DKMDT_EPT_SCALING;
    goto LABEL_10;
  }
  if ( (int)v5 <= 0 )
    goto LABEL_25;
  if ( (int)v5 <= 2 )
    goto LABEL_21;
  if ( (int)v5 <= 4 )
    v8 = D3DKMDT_EPT_VIDPNSOURCE;
LABEL_10:
  v31.EnumPivotType = v8;
  if ( a4 )
  {
    v31.EnumPivot = *a4;
  }
  else
  {
    v31.EnumPivot.VidPnSourceId = -1;
    v31.EnumPivot.VidPnTargetId = -1;
  }
  v18 = *(ADAPTER_DISPLAY **)(a1 + 8);
  if ( !v18 )
  {
    v29 = WdLogNewEntry5_WdAssertion(0LL, v15);
    WdLogEvent5_WdAssertion(v29);
    v18 = *(ADAPTER_DISPLAY **)(a1 + 8);
  }
  v19 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v18, &v31);
  v23 = v19;
  if ( v19 < 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20, v22);
    v30[3] = a2;
    v30[4] = v31.EnumPivot.VidPnSourceId;
    v30[5] = v31.EnumPivot.VidPnTargetId;
    v30[6] = v23;
    WdLogEvent5_WdError(v30);
  }
  else
  {
    LODWORD(v23) = 0;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v32);
  return (unsigned int)v23;
}
