/*
 * XREFs of ?IsOfType@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C38B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0480 (-IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  bool v4; // al

  if ( a2 == 140 )
    return 1;
  if ( a2 == 62 )
    return 1;
  v4 = CPropertyChangeResource::IsOfType(a1, a2);
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
