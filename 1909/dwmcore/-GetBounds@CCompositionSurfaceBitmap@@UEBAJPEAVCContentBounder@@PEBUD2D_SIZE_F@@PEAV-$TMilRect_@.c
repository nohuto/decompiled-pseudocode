/*
 * XREFs of ?GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800125A0
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180068340 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@WEA@EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F0CE0 (-GetBounds@CCompositionSurfaceBitmap@@WEA@EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRec.c)
 *     ?GetBounds@CYCbCrSurface@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802126B0 (-GetBounds@CYCbCrSurface@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x1800AB8E0 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetBounds(
        CCompositionSurfaceBitmap *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CCompositionSurfaceBitmap::EnsureBitmapRealization(a1, 0);
  return CCompositionSurfaceBitmap::GetBoundsInternal(a1, a3, a4);
}
