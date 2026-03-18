/*
 * XREFs of ??$UpdateProperty@M@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x1800BB7B4
 * Callers:
 *     ??$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z @ 0x1800BB5C4 (--$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z.c)
 * Callees:
 *     ??$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z @ 0x180091AA0 (--$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<float>(CResource *this, unsigned int a2, int a3, unsigned __int8 *a4)
{
  __int64 v4; // rax
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  v4 = *((_QWORD *)this + 10);
  if ( *(_DWORD *)(v4 + 8LL * a2) == a3 )
  {
    *(_DWORD *)((*(_DWORD *)(v4 + 8LL * a2 + 4) & 0x1FFFFFFF) + *((_QWORD *)this + 14)) = *(_DWORD *)a4;
    v5 = CPropertySet::PropertyUpdated<float>(this, a2, 1u, a4);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x190u, 0LL);
    else
      return 0;
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070057, 0x189u, 0LL);
  }
  return v7;
}
