/*
 * XREFs of ?Transform3DBounds@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV2@@Z @ 0x18021BAA4
 * Callers:
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180082C60 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char __fastcall CMILMatrix::Transform3DBounds(__int64 a1, float *a2, __m128 *a3)
{
  return CMILMatrix::Transform3DBoundsHelper<0>(a1, a2, a3);
}
