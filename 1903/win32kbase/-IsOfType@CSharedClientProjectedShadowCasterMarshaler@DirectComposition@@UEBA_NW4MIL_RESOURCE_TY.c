/*
 * XREFs of ?IsOfType@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01C6FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSharedClientProjectedShadowCasterMarshaler::IsOfType(__int64 a1, int a2)
{
  int v2; // ecx
  bool result; // al

  result = 1;
  if ( a2 != 18 )
  {
    if ( (unsigned int)(a2 - 109) > 0x16 )
      return 0;
    v2 = 4718593;
    if ( !_bittest(&v2, a2 - 109) )
      return 0;
  }
  return result;
}
