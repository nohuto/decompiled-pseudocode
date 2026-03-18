/*
 * XREFs of ?GetMessageSessionNoRef@CPartitionVerticalBlankScheduler@@UEBAPEAUIMessageSession@@XZ @ 0x1800D9BA0
 * Callers:
 *     ?GetTargetSurfaceNoRef@CHwTextureRenderTarget@@WJA@EAAPEAVCD3DSurface@@XZ @ 0x1800EC890 (-GetTargetSurfaceNoRef@CHwTextureRenderTarget@@WJA@EAAPEAVCD3DSurface@@XZ.c)
 * Callees:
 *     <none>
 */

struct IMessageSession *__fastcall CPartitionVerticalBlankScheduler::GetMessageSessionNoRef(
        CPartitionVerticalBlankScheduler *this)
{
  return (struct IMessageSession *)*((_QWORD *)this + 17);
}
