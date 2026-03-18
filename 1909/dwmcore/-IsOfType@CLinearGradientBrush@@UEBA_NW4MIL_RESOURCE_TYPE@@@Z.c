/*
 * XREFs of ?IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001EF10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001EF34 (-IsOfType@CGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CLinearGradientBrush::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 94 )
    return 1;
  v2 = CGradientBrush::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
