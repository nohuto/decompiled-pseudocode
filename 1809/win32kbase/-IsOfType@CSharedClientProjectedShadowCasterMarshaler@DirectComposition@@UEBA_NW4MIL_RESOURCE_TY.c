/*
 * XREFs of ?IsOfType@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0182E80
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
    if ( (unsigned int)(a2 - 102) > 0xD )
      return 0;
    v2 = 9217;
    if ( !_bittest(&v2, a2 - 102) )
      return 0;
  }
  return result;
}
