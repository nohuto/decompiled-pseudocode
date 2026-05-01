/*
 * XREFs of ?Release@ScreenClippingBrokerImpl@@UEAAKXZ @ 0x180401BE0
 * Callers:
 *     ?Release@ScreenClippingBrokerImpl@@W7EAAKXZ @ 0x1800E3AE0 (-Release@ScreenClippingBrokerImpl@@W7EAAKXZ.c)
 *     ?Release@ScreenClippingBrokerImpl@@WCI@EAAKXZ @ 0x1800E3AF0 (-Release@ScreenClippingBrokerImpl@@WCI@EAAKXZ.c)
 *     ?Release@ScreenClippingBrokerImpl@@WDA@EAAKXZ @ 0x1800E3B00 (-Release@ScreenClippingBrokerImpl@@WDA@EAAKXZ.c)
 *     ?Release@ScreenClippingBrokerImpl@@WDI@EAAKXZ @ 0x1800E3B10 (-Release@ScreenClippingBrokerImpl@@WDI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ScreenClippingBrokerImpl::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release(this);
}
