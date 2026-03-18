/*
 * XREFs of ?IsOfType@CSkewTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01A6280
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C007EED8 (-IsOfType@CTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall DirectComposition::CSkewTransformMarshaler::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 170 )
    return 1;
  v2 = DirectComposition::CTransformMarshaler::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
