/*
 * XREFs of ?IsOfType@CColorMatrixEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801754F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CFilterEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801755E0 (-IsOfType@CFilterEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CColorMatrixEffect::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 21 )
    return 1;
  v2 = CFilterEffect::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
