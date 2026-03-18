/*
 * XREFs of ?IsOfType@CAffineTransform2DEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019F070
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CFilterEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019F250 (-IsOfType@CFilterEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CAffineTransform2DEffect::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 1 )
    return 1;
  v2 = CFilterEffect::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
