/*
 * XREFs of ?ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID@@@Z @ 0x18024F674
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??9@YA_NAEBU_LUID@@0@Z @ 0x1800A8C70 (--9@YA_NAEBU_LUID@@0@Z.c)
 *     ?NotifyDeviceInvalid@CDeviceManager@CCaptureRenderTarget@@QEAAXXZ @ 0x1800EC00C (-NotifyDeviceInvalid@CDeviceManager@CCaptureRenderTarget@@QEAAXXZ.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x18024F8FC (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetAdapterLUID(
        CCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID *a3)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rsi

  v3 = (_QWORD *)((char *)a3 + 8);
  v5 = (_QWORD *)((char *)this + 400);
  if ( operator!=((_DWORD *)this + 100, (_DWORD *)a3 + 2) )
  {
    CCaptureRenderTarget::ReleaseRenderingResources(this);
    *v5 = *v3;
    CCaptureRenderTarget::CDeviceManager::NotifyDeviceInvalid((CCaptureRenderTarget *)((char *)this + 392));
  }
  return 0LL;
}
