/*
 * XREFs of ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x18008EBAC
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180048F10 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x18008E610 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ??1CDrawingContext@@EEAA@XZ @ 0x1800C2B80 (--1CDrawingContext@@EEAA@XZ.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x180159404 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ?SetOcclusionContext@CDrawingContext@@QEAAXPEAVCOcclusionContext@@@Z @ 0x180167180 (-SetOcclusionContext@CDrawingContext@@QEAAXPEAVCOcclusionContext@@@Z.c)
 * Callees:
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18008EBD4 (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
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
