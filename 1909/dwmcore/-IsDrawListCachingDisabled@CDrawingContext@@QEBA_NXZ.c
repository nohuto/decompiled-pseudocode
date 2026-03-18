/*
 * XREFs of ?IsDrawListCachingDisabled@CDrawingContext@@QEBA_NXZ @ 0x18003531C
 * Callers:
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x18003523C (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801EEC40 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     <none>
 */

char __fastcall CDrawingContext::IsDrawListCachingDisabled(CDrawingContext *this)
{
  char result; // al

  result = 0;
  if ( CCommonRegistryData::m_fDisableDrawListCaching || !*((_BYTE *)this + 6350) )
    return 1;
  return result;
}
