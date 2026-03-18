/*
 * XREFs of ?IsOfType@CSharedHostProjectedShadowCasterMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01C71E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSharedHostProjectedShadowCasterMarshaler::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  bool result; // al

  v2 = a2 - 76;
  result = 0;
  if ( v2 <= 0x37 )
  {
    v3 = 0x90000200000001LL;
    if ( _bittest64(&v3, (int)v2) )
      return 1;
  }
  return result;
}
