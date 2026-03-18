/*
 * XREFs of ?GetRenderingRealizationNoRef@CGlobalCompositionSurfaceInfo@@UEAAPEAVCBitmapRealization@@XZ @ 0x1800BD910
 * Callers:
 *     ?SetAdvancedDirectFlipState@CGlobalCompositionSurfaceInfo@@UEAAJPEAVIRenderTargetDisplay@@AEBV?$shared_ptr@VCRegion@@@std@@@Z @ 0x18025C350 (-SetAdvancedDirectFlipState@CGlobalCompositionSurfaceInfo@@UEAAJPEAVIRenderTargetDisplay@@AEBV-$.c)
 * Callees:
 *     ?EnsureCurrentRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAAJXZ @ 0x1800BD94C (-EnsureCurrentRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAAJXZ.c)
 */

struct CBitmapRealization *__fastcall CGlobalCompositionSurfaceInfo::GetRenderingRealizationNoRef(
        CGlobalCompositionSurfaceInfo *this)
{
  struct CBitmapRealization *result; // rax

  result = (struct CBitmapRealization *)*((_QWORD *)this + 20);
  if ( !result && !*((_BYTE *)this + 80) )
  {
    *((_BYTE *)this + 80) = 1;
    CGlobalCompositionSurfaceInfo::EnsureCurrentRenderingRealization(this);
    result = (struct CBitmapRealization *)*((_QWORD *)this + 20);
    *((_BYTE *)this + 80) = 0;
  }
  return result;
}
