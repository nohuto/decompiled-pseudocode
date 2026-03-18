/*
 * XREFs of ?IsDirectFlipSupportedOnTarget@CGlobalCompositionSurfaceInfo@@UEAA_NPEAVIRenderTarget@@@Z @ 0x18025D6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CGlobalCompositionSurfaceInfo::IsDirectFlipSupportedOnTarget(
        CGlobalCompositionSurfaceInfo *this,
        struct IRenderTarget *a2)
{
  return CGlobalCompositionSurfaceInfo::CBindInfo::IsDirectFlipSupportedOnTarget(
           (CGlobalCompositionSurfaceInfo *)((char *)this + 88),
           a2);
}
