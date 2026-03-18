/*
 * XREFs of ??$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1801F3030
 * Callers:
 *     ??$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800A0E64 (--$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERT.c)
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A37E0 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$PropertyUpdated@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIPEBU_D3DCOLORVALUE@@@Z @ 0x1800A1074 (--$PropertyUpdated@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIPEBU_D3DCOLORVALUE@@@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801F3158 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<_D3DCOLORVALUE>(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edx
  __int64 v5; // rcx
  int v6; // r8d
  unsigned __int8 *v7; // r9
  CResource *v8; // r11
  __int64 v9; // rax
  signed int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx

  if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                          a1 + 80,
                          a2,
                          a3,
                          a4)
    && (v9 = *((_QWORD *)v8 + 10), v5 = v4, *(_DWORD *)(v9 + 8LL * v4) == v6) )
  {
    *(_OWORD *)((*(_DWORD *)(v9 + 8LL * v4 + 4) & 0x1FFFFFFF) + *((_QWORD *)v8 + 14)) = *(_OWORD *)v7;
    v10 = CPropertySet::PropertyUpdated<_D3DCOLORVALUE>(v8, v4, 1u, v7);
    v12 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x192u, 0LL);
    else
      return 0;
  }
  else
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x80070057, 0x18Bu, 0LL);
  }
  return v12;
}
