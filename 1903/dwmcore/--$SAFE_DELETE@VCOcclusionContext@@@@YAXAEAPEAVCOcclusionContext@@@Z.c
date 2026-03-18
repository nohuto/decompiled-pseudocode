/*
 * XREFs of ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x180046F24
 * Callers:
 *     ??1CDrawingContext@@EEAA@XZ @ 0x180046554 (--1CDrawingContext@@EEAA@XZ.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180055110 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x1800B518C (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?SetOcclusionContext@CDrawingContext@@QEAAXPEAVCOcclusionContext@@@Z @ 0x1801716B0 (-SetOcclusionContext@CDrawingContext@@QEAAXPEAVCOcclusionContext@@@Z.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x1801A74CC (--1CDesktopRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x1800CBC8C (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 */

void *__fastcall SAFE_DELETE<COcclusionContext>(COcclusionContext **a1, unsigned int a2)
{
  COcclusionContext *v3; // rcx
  void *result; // rax

  v3 = *a1;
  if ( v3 )
  {
    result = COcclusionContext::`scalar deleting destructor'(v3, a2);
    *a1 = 0LL;
  }
  return result;
}
