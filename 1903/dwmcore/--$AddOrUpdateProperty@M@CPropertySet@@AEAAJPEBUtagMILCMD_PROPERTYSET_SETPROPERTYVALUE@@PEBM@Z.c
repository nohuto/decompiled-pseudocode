/*
 * XREFs of ??$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z @ 0x1800BB5C4
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x1800BB434 (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPRO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddProperty@M@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x1800BB63C (--$AddProperty@M@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z.c)
 *     ??$UpdateProperty@M@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x1800BB7B4 (--$UpdateProperty@M@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<float>(CResource *this, __int64 a2, __int64 a3)
{
  signed int updated; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v8; // r11
  __int64 v9; // rcx
  unsigned int v10; // [rsp+20h] [rbp-18h]

  if ( *(_BYTE *)(a2 + 20) )
  {
    updated = CPropertySet::AddProperty<float>(this, *(_DWORD *)(a2 + 8), a3);
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
  updated = CPropertySet::UpdateProperty<float>(this, v8);
  v6 = updated;
  if ( updated < 0 )
  {
    v10 = 323;
    goto LABEL_10;
  }
  return 0;
}
