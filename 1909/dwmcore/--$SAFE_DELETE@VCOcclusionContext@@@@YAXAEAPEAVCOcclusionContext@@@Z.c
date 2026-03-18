/*
 * XREFs of ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x180025664
 * Callers:
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x180024674 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ??1CDrawingContext@@EEAA@XZ @ 0x180024C68 (--1CDrawingContext@@EEAA@XZ.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180080FA0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?SetOcclusionContext@CDrawingContext@@QEAAXPEAVCOcclusionContext@@@Z @ 0x18016FF58 (-SetOcclusionContext@CDrawingContext@@QEAAXPEAVCOcclusionContext@@@Z.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x1801A5C0C (--1CDesktopRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x180024820 (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 */

COcclusionContext *__fastcall SAFE_DELETE<COcclusionContext>(COcclusionContext **a1)
{
  COcclusionContext *v2; // rcx
  COcclusionContext *result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = COcclusionContext::`scalar deleting destructor'(v2);
    *a1 = 0LL;
  }
  return result;
}
