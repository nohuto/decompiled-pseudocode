/*
 * XREFs of ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C012E0B4
 * Callers:
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C012E01C (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00043DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Serialize@DMMVIDPNTARGETMODE@@QEBAXQEAU_D3DKMDT_VIDPN_TARGET_MODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C000E434 (-Serialize@DMMVIDPNTARGETMODE@@QEBAXQEAU_D3DKMDT_VIDPN_TARGET_MODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C000E488 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C012E18C (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SerializeFunctionalPath(
        DMMVIDPNPRESENTPATH *this,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  DMMVIDPNSOURCEMODE *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  DMMVIDPNTARGETMODE *v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+30h] [rbp+8h] BYREF
  __int64 v19; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v15);
  }
  DMMVIDPNPRESENTPATH::Serialize(this, a2);
  v6 = *((_QWORD *)this + 11);
  v7 = *(_QWORD *)(v6 + 104);
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 96));
    v7 = *(_QWORD *)(v6 + 104);
  }
  v8 = *(DMMVIDPNSOURCEMODE **)(v7 + 144);
  v18 = v7;
  if ( v8 )
  {
    DMMVIDPNSOURCEMODE::Serialize(v8, (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)&a2[1], v5);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v18, 0LL);
    v11 = *((_QWORD *)this + 12);
    v12 = *(_QWORD *)(v11 + 104);
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 96));
      v12 = *(_QWORD *)(v11 + 104);
    }
    v13 = *(DMMVIDPNTARGETMODE **)(v12 + 144);
    v19 = v12;
    if ( v13 )
    {
      DMMVIDPNTARGETMODE::Serialize(
        v13,
        (struct _D3DKMDT_VIDPN_TARGET_MODE *const)&a2[1].VisibleFromActiveBROffset.cy,
        (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)&a2[1].CopyProtection.OEMCopyProtection[36],
        (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)&a2[1].CopyProtection.OEMCopyProtection[40]);
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v19, 0LL);
      *(_WORD *)&a2[1].CopyProtection.OEMCopyProtection[44] = *((_WORD *)this + 54);
      return 0LL;
    }
    v17 = WdLogNewEntry5_WdError(0LL, v9, v10);
    *(_QWORD *)(v17 + 24) = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    *(_QWORD *)(v17 + 32) = this;
    WdLogEvent5_WdError(v17);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v19, 0LL);
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(0LL, v4, v5);
    *(_QWORD *)(v16 + 24) = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    *(_QWORD *)(v16 + 32) = this;
    WdLogEvent5_WdError(v16);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v18, 0LL);
  }
  return 1075708679LL;
}
