/*
 * XREFs of ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A0020
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180013C40 (-DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::Draw(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return CCompositionSurfaceBitmap::DrawAsDrawList(a1, a2, a3, a4, a5, 0LL);
}
