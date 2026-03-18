/*
 * XREFs of ??$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x1801B18C8
 * Callers:
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A4630 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z @ 0x1801B096C (--$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x18016FBD8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ??$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z @ 0x1801B15E0 (--$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<bool>(
        CResource *this,
        unsigned int a2,
        __int64 a3,
        unsigned __int8 *a4)
{
  _QWORD *v6; // rcx
  unsigned int v7; // r10d
  unsigned int v8; // edx
  int v9; // r8d
  __int64 v10; // r10
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r10
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((__int64)this + 80, a2) )
    goto LABEL_9;
  if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((__int64)v6, v7) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  if ( *(_DWORD *)(*v6 + 8 * v10) == v9 )
  {
    if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((__int64)v6, v8) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v12, v11) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    *(_BYTE *)((*(_DWORD *)(v14 + 8 * v15 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v13 + 32)) = *a4;
    v16 = CPropertySet::PropertyUpdated<D2DVector4>(this, v15, 1u, a4);
    v18 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1A6u);
    else
      return 0;
  }
  else
  {
LABEL_9:
    v18 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, -2147024809, 0x19Fu);
  }
  return v18;
}
