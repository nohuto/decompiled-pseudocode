/*
 * XREFs of ?BuildFromRectFs@CRectanglesShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18024ADD8
 * Callers:
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x18024B38C (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ?Reset@CRectanglesShape@@IEAAXXZ @ 0x1800830F8 (-Reset@CRectanglesShape@@IEAAXXZ.c)
 */

__int64 __fastcall CRectanglesShape::BuildFromRectFs(CRectanglesShape *a1, const void *a2, unsigned int a3)
{
  CRectanglesShape::Reset(a1);
  return DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
           (__int64)a1 + 16,
           a2,
           a3);
}
