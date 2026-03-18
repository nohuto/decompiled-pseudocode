/*
 * XREFs of ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x1801C3030
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800873F0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18016CDD8 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x180089E04 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 */

__int64 __fastcall CVisual::GetBspPolygonListCount(CVisual *this)
{
  __int64 BspPolygonList; // rax
  unsigned int v2; // r10d

  BspPolygonList = CVisual::GetBspPolygonList((__int64)this);
  if ( BspPolygonList )
    return *(unsigned int *)(BspPolygonList + 24);
  return v2;
}
