/*
 * XREFs of ??$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z @ 0x1801F38D0
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x1800BB434 (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPRO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddProperty@_N@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x1801F3A4C (--$AddProperty@_N@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z.c)
 *     ??$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x1801F4804 (--$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<bool>(CResource *this, __int64 a2, __int64 a3)
{
  signed int updated; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // r11
  __int64 v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-18h]

  if ( *(_BYTE *)(a2 + 20) )
  {
    updated = CPropertySet::AddProperty<bool>(this, *(_DWORD *)(a2 + 8), a3);
    v6 = updated;
    if ( updated < 0 )
    {
      v10 = 313;
LABEL_9:
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, updated, v10, 0LL);
      return v6;
    }
    return 0;
  }
  v7 = *(unsigned int *)(a2 + 8);
  v8 = *(_DWORD *)(*((_QWORD *)this + 10) + 8 * v7 + 4) & 0x1FFFFFFF;
  if ( *(_DWORD *)(a2 + 12) == (_DWORD)v8 )
  {
    updated = CPropertySet::UpdateProperty<bool>(this, v7);
    v6 = updated;
    if ( updated < 0 )
    {
      v10 = 323;
      goto LABEL_9;
    }
    return 0;
  }
  v6 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x88980403, 0x140u, 0LL);
  return v6;
}
