/*
 * XREFs of ?NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z @ 0x1801F4890
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180094B94 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPropertySet::NotifyCurrentPropertyValues(CPropertySet *this, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  unsigned int v5; // ebp
  signed int v6; // eax
  __int64 v7; // rcx

  v2 = 0LL;
  v3 = a2;
  if ( a2 )
  {
    while ( 1 )
    {
      v5 = v3;
      if ( (v3 & 1) != 0 && (unsigned int)v2 < *((_DWORD *)this + 26) )
      {
        v6 = CPropertySet::NotifyPropertyValue((__int64)this, v2, *(_DWORD *)(*((_QWORD *)this + 10) + 8 * v2));
        if ( v6 < 0 )
          break;
      }
      v3 >>= 1;
      v2 = (unsigned int)(v2 + 1);
      if ( v5 < 2 )
        return 0LL;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1F8u, 0LL);
  }
  return 0LL;
}
