/*
 * XREFs of ?GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004C6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004C5CC (-GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 */

__int64 __fastcall CRenderData::GetBounds(__int64 a1, CDrawingContext **a2, __int64 a3, float *a4)
{
  __int64 result; // rax
  bool v7; // cl

  result = CContentBounder::GetContentBounds(a2, a1, a4);
  v7 = a4[2] <= *a4 || a4[3] <= a4[1];
  *(_BYTE *)(a1 + 137) = v7;
  return result;
}
