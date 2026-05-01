/*
 * XREFs of ?QueryInterface@ScreenClippingBrokerImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18037C710
 * Callers:
 *     ?QueryInterface@ScreenClippingBrokerImpl@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AA430 (-QueryInterface@ScreenClippingBrokerImpl@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ScreenClippingBrokerImpl@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AA440 (-QueryInterface@ScreenClippingBrokerImpl@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ScreenClippingBrokerImpl@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AA450 (-QueryInterface@ScreenClippingBrokerImpl@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ScreenClippingBrokerImpl@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AA460 (-QueryInterface@ScreenClippingBrokerImpl@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ScreenClippingBrokerImpl::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,IScreenClippingBroker,Microsoft::WRL::CloakedIid<IScreenClippingBrokerPrivate>>>(
           this,
           a2,
           a3);
}
