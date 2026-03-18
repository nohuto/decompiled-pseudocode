/*
 * XREFs of ?IsOfType@CEllipseGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A0AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800BFD18 (-IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CEllipseGeometry::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 54 )
    return 1;
  v2 = CGeometry::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
