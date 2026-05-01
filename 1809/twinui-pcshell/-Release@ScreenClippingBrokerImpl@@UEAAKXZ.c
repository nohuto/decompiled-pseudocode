/*
 * XREFs of ?Release@ScreenClippingBrokerImpl@@UEAAKXZ @ 0x18037C720
 * Callers:
 *     ?Release@ScreenClippingBrokerImpl@@W7EAAKXZ @ 0x1800AA490 (-Release@ScreenClippingBrokerImpl@@W7EAAKXZ.c)
 *     ?Release@ScreenClippingBrokerImpl@@WCI@EAAKXZ @ 0x1800AA4A0 (-Release@ScreenClippingBrokerImpl@@WCI@EAAKXZ.c)
 *     ?Release@ScreenClippingBrokerImpl@@WDA@EAAKXZ @ 0x1800AA4B0 (-Release@ScreenClippingBrokerImpl@@WDA@EAAKXZ.c)
 *     ?Release@ScreenClippingBrokerImpl@@WDI@EAAKXZ @ 0x1800AA4C0 (-Release@ScreenClippingBrokerImpl@@WDI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ScreenClippingBrokerImpl::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release(this);
}
