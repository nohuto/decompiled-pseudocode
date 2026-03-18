/*
 * XREFs of ??$UpdateProperty@M@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x1800A43BC
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x1800A400C (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYSET_SETPROPER.c)
 * Callees:
 *     ??$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z @ 0x1800A44AC (--$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x18016FBD8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<float>(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v6; // rcx
  int v7; // r8d
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 80) )
    goto LABEL_9;
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  if ( *(_DWORD *)(*v6 + 8 * v8) == v7 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v9) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    *(_DWORD *)((*(_DWORD *)(v11 + 8 * v12 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v10 + 32)) = *a4;
    v13 = CPropertySet::PropertyUpdated<float>(a1, (unsigned int)v12, 1LL, a4);
    v15 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1A6u);
    else
      return 0;
  }
  else
  {
LABEL_9:
    v15 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v6, 0LL, 0, -2147024809, 0x19Fu);
  }
  return v15;
}
