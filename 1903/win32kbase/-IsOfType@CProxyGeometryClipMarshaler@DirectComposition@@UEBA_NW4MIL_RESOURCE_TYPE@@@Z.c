/*
 * XREFs of ?IsOfType@CProxyGeometryClipMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01A5FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CProxyGeometryClipMarshaler::IsOfType(__int64 a1, int a2)
{
  int v2; // ecx
  bool result; // al

  result = 1;
  if ( a2 != 62 )
  {
    if ( (unsigned int)(a2 - 109) > 0x18 )
      return 0;
    v2 = 20971521;
    if ( !_bittest(&v2, a2 - 109) )
      return 0;
  }
  return result;
}
