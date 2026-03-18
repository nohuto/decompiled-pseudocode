/*
 * XREFs of ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A0050
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180079C90 (-DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 */

__int64 __fastcall CPrimitiveGroup::Draw(CPrimitiveGroup *a1, unsigned int *a2, __int64 a3, _BYTE *a4, __int64 a5)
{
  return CPrimitiveGroup::DrawWorker(a1, 0, a2, a3, a4, a5, 0LL);
}
