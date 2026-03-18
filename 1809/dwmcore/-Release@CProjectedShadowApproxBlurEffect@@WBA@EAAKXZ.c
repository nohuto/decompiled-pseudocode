/*
 * XREFs of ?Release@CProjectedShadowApproxBlurEffect@@WBA@EAAKXZ @ 0x1800F14E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CProjectedShadowApproxBlurEffect::Release(__int64 a1)
{
  return CHolographicInteropTaskQueue::Release((CHolographicInteropTaskQueue *)(a1 - 16));
}
