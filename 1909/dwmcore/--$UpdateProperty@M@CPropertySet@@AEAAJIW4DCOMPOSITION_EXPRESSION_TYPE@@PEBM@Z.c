/*
 * XREFs of ??$UpdateProperty@M@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x1800A3408
 * Callers:
 *     ??$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z @ 0x1800A35D8 (--$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z @ 0x1800A3730 (--$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801F3158 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<float>(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rcx
  int v5; // r8d
  _DWORD *v6; // r9
  __int64 v7; // r10
  CResource *v8; // r11
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx

  if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                          a1 + 80,
                          a2,
                          a3,
                          a4)
    && *(_DWORD *)(*v4 + 8 * v7) == v5 )
  {
    *(_DWORD *)((*(_DWORD *)(*v4 + 8 * v7 + 4) & 0x1FFFFFFF) + v4[4]) = *v6;
    v9 = CPropertySet::PropertyUpdated<float>(v8, v7);
    v11 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x192u, 0LL);
    else
      return 0;
  }
  else
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v4, 0LL, 0, 0x80070057, 0x18Bu, 0LL);
  }
  return v11;
}
