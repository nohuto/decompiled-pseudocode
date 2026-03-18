/*
 * XREFs of ?Release@CHolographicInteropTaskQueue@@UEAAKXZ @ 0x18004D220
 * Callers:
 *     ?Release@CWARPDrawListEntry@@WJA@EAAKXZ @ 0x1800ED450 (-Release@CWARPDrawListEntry@@WJA@EAAKXZ.c)
 *     ?Release@CRadialGradientEffect@@WBA@EAAKXZ @ 0x1800ED9D0 (-Release@CRadialGradientEffect@@WBA@EAAKXZ.c)
 *     ?Release@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ @ 0x1800ED9E0 (-Release@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CHolographicInteropTaskQueue::Release(CHolographicInteropTaskQueue *this)
{
  return CDirtyRegion::Release(this);
}
