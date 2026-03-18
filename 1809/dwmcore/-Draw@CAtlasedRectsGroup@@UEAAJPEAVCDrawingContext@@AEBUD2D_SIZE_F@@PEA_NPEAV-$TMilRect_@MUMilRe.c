/*
 * XREFs of ?Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180174FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawAsDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008DC10 (-DrawAsDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRec.c)
 */

__int64 __fastcall CAtlasedRectsGroup::Draw(
        CAtlasedRectsGroup *a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  return CAtlasedRectsGroup::DrawAsDrawList(a1, a2, a3, a4, a5, 0LL);
}
