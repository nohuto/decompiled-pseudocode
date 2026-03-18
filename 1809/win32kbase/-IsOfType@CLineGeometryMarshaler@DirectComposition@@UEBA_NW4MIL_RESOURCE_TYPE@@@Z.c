/*
 * XREFs of ?IsOfType@CLineGeometryMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0168BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CBaseClipMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C006AD70 (-IsOfType@CBaseClipMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall DirectComposition::CLineGeometryMarshaler::IsOfType(__int64 a1, int a2)
{
  bool v2; // al
  char v3; // cl

  if ( a2 == 91 )
    return 1;
  v2 = DirectComposition::CBaseClipMarshaler::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
