/*
 * XREFs of ?GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x1801657B8
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x1800ADF38 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 * Callees:
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x1800A98DC (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 */

bool __fastcall CWindowNode::GetWindowNodeDirtyRects(
        CWindowNode *this,
        unsigned __int64 *a2,
        unsigned int *a3,
        const struct MilRectF **a4)
{
  int v4; // eax
  bool v5; // bl

  v4 = *((_DWORD *)this + 158);
  v5 = v4 != 0;
  if ( v4 )
  {
    *a2 = *((_QWORD *)this + 29);
    CMergedRectBase<4>::GetRects((__int64)this + 560, a3, (__int64 *)a4);
  }
  else
  {
    *a3 = 0;
  }
  return v5;
}
