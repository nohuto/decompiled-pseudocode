/*
 * XREFs of ??1ScreenCapture@ScreenClippingCommonTelemetry@@QEAA@XZ @ 0x1803E12D8
 * Callers:
 *     ?GrabScreenShot@ScreenClippingBrokerImpl@@CAJAEBUtagRECT@@AEAV?$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@_N@Z @ 0x1803E1E2C (-GrabScreenShot@ScreenClippingBrokerImpl@@CAJAEBUtagRECT@@AEAV-$ComPtr@UIWICBitmapSource@@@WRL@M.c)
 *     _ScreenClippingBrokerImpl::GrabScreenShot_::_1_::dtor$0 @ 0x1803E20DC (_ScreenClippingBrokerImpl--GrabScreenShot_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803E18F4 (-Destroy@-$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_.c)
 */

void __fastcall ScreenClippingCommonTelemetry::ScreenCapture::~ScreenCapture(
        ScreenClippingCommonTelemetry::ScreenCapture *this)
{
  *(_QWORD *)this = &ScreenClippingCommonTelemetry::ScreenCapture::`vftable';
  wil::ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
