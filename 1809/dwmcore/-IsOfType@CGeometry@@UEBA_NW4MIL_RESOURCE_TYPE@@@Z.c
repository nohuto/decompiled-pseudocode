/*
 * XREFs of ?IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800603A8
 * Callers:
 *     ?IsOfType@CRectangleGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180060380 (-IsOfType@CRectangleGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCombinedGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180175520 (-IsOfType@CCombinedGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CEllipseGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801755B0 (-IsOfType@CEllipseGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CGeometryGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801756B0 (-IsOfType@CGeometryGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CLineGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180175740 (-IsOfType@CLineGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CPathGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801757F0 (-IsOfType@CPathGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CProxyGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180175850 (-IsOfType@CProxyGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800604E0 (-IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CGeometry::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  char v4; // al

  if ( a2 == 59 )
    return 1;
  v4 = CPropertyChangeResource::IsOfType();
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
