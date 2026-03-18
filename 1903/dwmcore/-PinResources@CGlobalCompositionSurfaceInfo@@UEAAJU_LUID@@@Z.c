/*
 * XREFs of ?PinResources@CGlobalCompositionSurfaceInfo@@UEAAJU_LUID@@@Z @ 0x18025DA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::PinResources(CGlobalCompositionSurfaceInfo *this, struct _LUID a2)
{
  return CGlobalCompositionSurfaceInfo::CBindInfo::PinResources(
           (CGlobalCompositionSurfaceInfo *)((char *)this + 88),
           a2);
}
