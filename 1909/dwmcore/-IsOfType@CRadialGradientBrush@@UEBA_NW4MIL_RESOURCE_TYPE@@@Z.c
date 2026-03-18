/*
 * XREFs of ?IsOfType@CRadialGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019F6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001EF34 (-IsOfType@CGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CRadialGradientBrush::IsOfType(__int64 a1, int a2)
{
  bool v2; // al
  char v3; // cl

  if ( a2 == 134 )
    return 1;
  v2 = CGradientBrush::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
