/*
 * XREFs of ?NotifyDeviceInvalid@CDeviceManager@CCaptureRenderTarget@@QEAAXXZ @ 0x1800EC00C
 * Callers:
 *     ?ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID@@@Z @ 0x18024F674 (-ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDE.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x18024F8FC (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

void __fastcall CCaptureRenderTarget::CDeviceManager::NotifyDeviceInvalid(CCaptureRenderTarget::CDeviceManager *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)this;
  *(_QWORD *)this = 0LL;
  if ( v1 )
    CMILPoolResource::Release((CMILPoolResource *)(v1 + 496));
}
