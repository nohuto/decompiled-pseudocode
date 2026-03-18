/*
 * XREFs of ??$AddOrUpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800BB810
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x1800BB434 (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPRO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800BB3D0 (--$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2.c)
 *     ??$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800BB888 (--$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<D2D_MATRIX_3X2_F>(CResource *this, __int64 a2, __int64 a3)
{
  signed int updated; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v8; // r11
  __int64 v9; // rcx
  unsigned int v10; // [rsp+20h] [rbp-18h]

  if ( *(_BYTE *)(a2 + 20) )
  {
    updated = CPropertySet::AddProperty<D2D_MATRIX_3X2_F>(this, *(_DWORD *)(a2 + 8), a3);
    v6 = updated;
    if ( updated >= 0 )
      return 0;
    v10 = 313;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, updated, v10, 0LL);
    return v6;
  }
  v8 = *(unsigned int *)(a2 + 8);
  v9 = *(_DWORD *)(*((_QWORD *)this + 10) + 8 * v8 + 4) & 0x1FFFFFFF;
  if ( *(_DWORD *)(a2 + 12) != (_DWORD)v9 )
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x88980403, 0x140u, 0LL);
    return v6;
  }
  updated = CPropertySet::UpdateProperty<D2D_MATRIX_3X2_F>(this, v8, *(_DWORD *)(a2 + 16), a3);
  v6 = updated;
  if ( updated < 0 )
  {
    v10 = 323;
    goto LABEL_10;
  }
  return 0;
}
