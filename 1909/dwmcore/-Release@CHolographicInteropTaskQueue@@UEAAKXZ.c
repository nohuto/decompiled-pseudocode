/*
 * XREFs of ?Release@CHolographicInteropTaskQueue@@UEAAKXZ @ 0x1800D1C00
 * Callers:
 *     ?Release@CWARPDrawListEntry@@WJA@EAAKXZ @ 0x1800F1110 (-Release@CWARPDrawListEntry@@WJA@EAAKXZ.c)
 *     ?Release@CRadialGradientEffect@@WBA@EAAKXZ @ 0x1800F1690 (-Release@CRadialGradientEffect@@WBA@EAAKXZ.c)
 *     ?Release@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ @ 0x1800F16A0 (-Release@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHolographicInteropTaskQueue::Release(CDirtyRegion *this)
{
  return CDirtyRegion::Release(this);
}
