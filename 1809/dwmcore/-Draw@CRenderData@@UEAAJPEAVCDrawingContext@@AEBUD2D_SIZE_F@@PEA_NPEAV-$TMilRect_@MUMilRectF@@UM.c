/*
 * XREFs of ?Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B58F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderData::Draw(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = 0;
  if ( *(_QWORD *)(a2 + 360) || *(_QWORD *)(a2 + 6296) )
    v2 = 1;
  return CRenderData::Draw(a1, a2, v2);
}
