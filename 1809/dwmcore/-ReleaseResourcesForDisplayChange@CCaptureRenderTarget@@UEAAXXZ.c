/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CCaptureRenderTarget@@UEAAXXZ @ 0x180158C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCaptureRenderTarget::ReleaseResourcesForDisplayChange(CCaptureRenderTarget *this)
{
  CCaptureRenderTarget::ReleaseRenderingResources((CCaptureRenderTarget *)((char *)this - 64));
}
