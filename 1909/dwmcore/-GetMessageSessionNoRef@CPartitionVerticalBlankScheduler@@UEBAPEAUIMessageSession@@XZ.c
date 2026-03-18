/*
 * XREFs of ?GetMessageSessionNoRef@CPartitionVerticalBlankScheduler@@UEBAPEAUIMessageSession@@XZ @ 0x1800DA810
 * Callers:
 *     ?GetTargetSurfaceNoRef@CHwTextureRenderTarget@@WJA@EAAPEAVCD3DSurface@@XZ @ 0x1800F0550 (-GetTargetSurfaceNoRef@CHwTextureRenderTarget@@WJA@EAAPEAVCD3DSurface@@XZ.c)
 * Callees:
 *     <none>
 */

struct IMessageSession *__fastcall CPartitionVerticalBlankScheduler::GetMessageSessionNoRef(
        CPartitionVerticalBlankScheduler *this)
{
  return (struct IMessageSession *)*((_QWORD *)this + 17);
}
