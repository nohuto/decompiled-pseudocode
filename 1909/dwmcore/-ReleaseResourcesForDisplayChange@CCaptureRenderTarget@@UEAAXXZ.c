/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CCaptureRenderTarget@@UEAAXXZ @ 0x1801A00A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCaptureRenderTarget::ReleaseResourcesForDisplayChange(CCaptureRenderTarget *this)
{
  CCaptureRenderTarget::ReleaseRenderingResources((CCaptureRenderTarget *)((char *)this - 64));
}
