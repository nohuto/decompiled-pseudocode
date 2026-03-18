/*
 * XREFs of ?Release@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ @ 0x1800F16A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProjectedShadowApproxBlurEffect::Release(__int64 a1)
{
  return CHolographicInteropTaskQueue::Release((CDirtyRegion *)(a1 - 24));
}
