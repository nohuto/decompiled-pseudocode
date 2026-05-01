/*
 * XREFs of ??1ScreenCapture@ScreenClippingCommonTelemetry@@QEAA@XZ @ 0x18037B458
 * Callers:
 *     ?GrabScreenShot@ScreenClippingBrokerImpl@@CAJAEBUtagRECT@@AEAV?$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@_N@Z @ 0x18037BFC4 (-GrabScreenShot@ScreenClippingBrokerImpl@@CAJAEBUtagRECT@@AEAV-$ComPtr@UIWICBitmapSource@@@WRL@M.c)
 *     _ScreenClippingBrokerImpl::GrabScreenShot_::_1_::dtor$0 @ 0x18037C274 (_ScreenClippingBrokerImpl--GrabScreenShot_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18037BA74 (-Destroy@-$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Para.c)
 */

void __fastcall ScreenClippingCommonTelemetry::ScreenCapture::~ScreenCapture(
        ScreenClippingCommonTelemetry::ScreenCapture *this)
{
  *(_QWORD *)this = &ScreenClippingCommonTelemetry::ScreenCapture::`vftable';
  wil::ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
