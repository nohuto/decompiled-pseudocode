/*
 * XREFs of ?GetTargetSurfaceNoRef@CHwTextureRenderTarget@@WJA@EAAPEAVCD3DSurface@@XZ @ 0x1800F0550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IMessageSession *__fastcall CHwTextureRenderTarget::GetTargetSurfaceNoRef(__int64 a1)
{
  return CPartitionVerticalBlankScheduler::GetMessageSessionNoRef((CPartitionVerticalBlankScheduler *)(a1 - 144));
}
