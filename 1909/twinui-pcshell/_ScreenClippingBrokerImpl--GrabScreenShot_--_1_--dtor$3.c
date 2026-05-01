/*
 * XREFs of _ScreenClippingBrokerImpl::GrabScreenShot_::_1_::dtor$3 @ 0x180401718
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall ScreenClippingBrokerImpl::GrabScreenShot_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>((void **)(a2 + 96));
}
