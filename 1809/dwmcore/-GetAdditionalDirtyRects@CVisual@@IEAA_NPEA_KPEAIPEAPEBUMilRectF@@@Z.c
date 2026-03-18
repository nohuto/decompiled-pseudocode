/*
 * XREFs of ?GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x1801654A0
 * Callers:
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x180166A58 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedRect@@XZ @ 0x1800A8F38 (-GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedRect@@XZ.c)
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x1800A98DC (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 */

bool __fastcall CVisual::GetAdditionalDirtyRects(
        CVisual *this,
        unsigned __int64 *a2,
        unsigned int *a3,
        const struct MilRectF **a4)
{
  bool v6; // bl
  struct CMergedRect *AdditionalDirtyRects; // rax
  unsigned int *v8; // r10
  __int64 v9; // r11
  __int64 v10; // rcx
  int v11; // eax

  v6 = 0;
  AdditionalDirtyRects = CVisual::GetAdditionalDirtyRects(this);
  v10 = (__int64)AdditionalDirtyRects;
  if ( AdditionalDirtyRects && (v11 = *((_DWORD *)AdditionalDirtyRects + 18), v6 = v11 != 0, v11) )
  {
    *a2 = *(_QWORD *)(v9 + 232);
    CMergedRectBase<4>::GetRects(v10, v8, (__int64 *)a4);
  }
  else
  {
    *v8 = 0;
  }
  return v6;
}
