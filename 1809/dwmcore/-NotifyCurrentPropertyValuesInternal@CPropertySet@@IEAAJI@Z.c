/*
 * XREFs of ?NotifyCurrentPropertyValuesInternal@CPropertySet@@IEAAJI@Z @ 0x1801B19CC
 * Callers:
 *     ?NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z @ 0x1801B19C0 (-NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z.c)
 * Callees:
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800A4DF4 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x18016FBD8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::NotifyCurrentPropertyValuesInternal(CPropertySet *this, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  unsigned int v5; // ebp
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0LL;
  v3 = a2;
  if ( a2 )
  {
    while ( 1 )
    {
      v5 = v3;
      if ( (v3 & 1) != 0 && (unsigned int)v2 < *((_DWORD *)this + 26) )
      {
        if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((__int64)this + 80, v2) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v7 = CPropertySet::NotifyPropertyValue((__int64)this, v6, *(_DWORD *)(*((_QWORD *)this + 10) + 8 * v2));
        if ( v7 < 0 )
          break;
      }
      v3 >>= 1;
      v2 = (unsigned int)(v2 + 1);
      if ( v5 < 2 )
        return 0LL;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x213u);
  }
  return 0LL;
}
