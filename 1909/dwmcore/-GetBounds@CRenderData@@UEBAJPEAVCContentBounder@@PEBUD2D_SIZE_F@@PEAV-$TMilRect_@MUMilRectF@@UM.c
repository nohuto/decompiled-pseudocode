/*
 * XREFs of ?GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058740
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058794 (-GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 */

__int64 __fastcall CRenderData::GetBounds(__int64 a1, CContentBounder *a2, __int64 a3, float *a4)
{
  __int64 result; // rax
  bool v7; // cl

  result = CContentBounder::GetContentBounds(a2);
  v7 = a4[2] <= *a4 || a4[3] <= a4[1];
  *(_BYTE *)(a1 + 153) = v7;
  return result;
}
