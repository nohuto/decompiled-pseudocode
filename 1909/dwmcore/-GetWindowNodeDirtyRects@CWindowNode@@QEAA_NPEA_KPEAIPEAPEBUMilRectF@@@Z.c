/*
 * XREFs of ?GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x18019A540
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18006A664 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 * Callees:
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x1800C9E28 (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 */

char __fastcall CWindowNode::GetWindowNodeDirtyRects(
        __m128i *this,
        unsigned __int64 *a2,
        unsigned int *a3,
        __m128i **a4)
{
  char v4; // bl

  v4 = 0;
  if ( this[39].m128i_i32[2] )
  {
    *a2 = this[14].m128i_u64[1];
    v4 = 1;
    CMergedRectBase<4>::GetRects(this + 35, a3, a4);
  }
  else
  {
    *a3 = 0;
  }
  return v4;
}
