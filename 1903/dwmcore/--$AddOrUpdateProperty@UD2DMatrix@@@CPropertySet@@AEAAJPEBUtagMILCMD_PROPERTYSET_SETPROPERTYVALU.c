/*
 * XREFs of ??$AddOrUpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DMatrix@@@Z @ 0x1800BBA10
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x1800BB434 (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPRO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddProperty@UD2DMatrix@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x1800BBA88 (--$AddProperty@UD2DMatrix@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@.c)
 *     ??$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x1800BBB20 (--$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<D2DMatrix>(CResource *this, __int64 a2, __int64 a3)
{
  signed int updated; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v8; // rcx
  unsigned int v9; // [rsp+20h] [rbp-18h]

  if ( *(_BYTE *)(a2 + 20) )
  {
    updated = CPropertySet::AddProperty<D2DMatrix>(this, *(_DWORD *)(a2 + 8), a3);
    v6 = updated;
    if ( updated >= 0 )
      return 0;
    v9 = 313;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, updated, v9, 0LL);
    return v6;
  }
  v8 = *(_DWORD *)(*((_QWORD *)this + 10) + 8LL * *(unsigned int *)(a2 + 8) + 4) & 0x1FFFFFFF;
  if ( *(_DWORD *)(a2 + 12) != (_DWORD)v8 )
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x88980403, 0x140u, 0LL);
    return v6;
  }
  updated = CPropertySet::UpdateProperty<D2DMatrix>(this);
  v6 = updated;
  if ( updated < 0 )
  {
    v9 = 323;
    goto LABEL_10;
  }
  return 0;
}
