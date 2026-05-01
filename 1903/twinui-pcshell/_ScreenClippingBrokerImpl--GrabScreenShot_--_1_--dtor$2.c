/*
 * XREFs of _ScreenClippingBrokerImpl::GrabScreenShot_::_1_::dtor$2 @ 0x1803E20F4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall ScreenClippingBrokerImpl::GrabScreenShot_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HDC__ *,int (*)(HDC__ *),&int DeleteDC(HDC__ *),wistd::integral_constant<unsigned __int64,0>,HDC__ *,HDC__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HDC__ *,int (*)(HDC__ *),&int DeleteDC(HDC__ *),wistd::integral_constant<unsigned __int64,0>,HDC__ *,HDC__ *,0,std::nullptr_t>>>((HDC *)(a2 + 136));
}
