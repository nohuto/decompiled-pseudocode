/*
 * XREFs of ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x18016AE80
 * Callers:
 *     ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x1800EC234 (-UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18016B174 (-GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList.c)
 *     ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18017A85C (-ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV-$TMilRect_@HUtagRECT@@.c)
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x18025D740 (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 */

void __fastcall SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    operator delete(v2);
    *a1 = 0LL;
  }
}
