/*
 * XREFs of ??$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z @ 0x1801B096C
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x1800A400C (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYSET_SETPROPER.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x18016FBD8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ??$AddProperty@_N@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x1801B0B10 (--$AddProperty@_N@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z.c)
 *     ??$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x1801B18C8 (--$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<bool>(CResource *a1, __int64 a2, __int64 a3)
{
  int updated; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // r9d
  unsigned int v7; // edx
  __int64 v8; // rdx
  _QWORD *v9; // r8
  __int64 v10; // r10
  CResource *v11; // r11
  unsigned int v13; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_DWORD *)(a2 + 20) )
  {
    updated = CPropertySet::AddProperty<bool>(a1, *(_DWORD *)(a2 + 8), a3);
    v5 = updated;
    if ( updated < 0 )
    {
      v13 = 333;
LABEL_4:
      v6 = updated;
LABEL_12:
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v6, v13);
      return v5;
    }
  }
  else
  {
    if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
            (__int64)a1 + 80,
            *(_DWORD *)(a2 + 8)) )
      goto LABEL_11;
    if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v4, v7) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( *(_DWORD *)(v10 + 12) != (*(_DWORD *)(*v9 + 8 * v8 + 4) & 0x1FFFFFFF) )
    {
LABEL_11:
      v5 = -2003303421;
      v13 = 341;
      v6 = -2003303421;
      goto LABEL_12;
    }
    updated = CPropertySet::UpdateProperty<bool>(v11);
    v5 = updated;
    if ( updated < 0 )
    {
      v13 = 344;
      goto LABEL_4;
    }
  }
  return 0;
}
