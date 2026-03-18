/*
 * XREFs of ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDeviceLevel1@@XZ @ 0x1800EA934
 * Callers:
 *     ?CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z @ 0x1801A6B0C (-CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z.c)
 *     ?Present@CCaptureRenderTarget@@UEAAJ_NI@Z @ 0x18024F480 (-Present@CCaptureRenderTarget@@UEAAJ_NI@Z.c)
 *     ?Render@CCaptureRenderTarget@@UEAAJPEA_N@Z @ 0x18024FA40 (-Render@CCaptureRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CD3DDeviceLevel1 *__fastcall CCaptureRenderTarget::GetD3DDeviceNoRef(CCaptureRenderTarget *this)
{
  return CCaptureRenderTarget::CDeviceManager::GetD3DDeviceNoRef(
           (struct CD3DDeviceLevel1 **)this + 49,
           (const struct _LUID *)this + 50,
           *((struct IFlipProducer **)this + 60));
}
