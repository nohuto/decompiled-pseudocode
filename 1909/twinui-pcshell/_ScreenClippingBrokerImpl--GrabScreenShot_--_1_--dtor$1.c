/*
 * XREFs of _ScreenClippingBrokerImpl::GrabScreenShot_::_1_::dtor$1 @ 0x180401700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall ScreenClippingBrokerImpl::GrabScreenShot_::_1_::dtor_1(__int64 a1, __m128i *a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HDC__ *,void (*)(wil::window_dc),&public: static void wil::window_dc::close(wil::window_dc),wistd::integral_constant<unsigned __int64,0>,wil::window_dc,HDC__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HDC__ *,void (*)(wil::window_dc),&public: static void wil::window_dc::close(wil::window_dc),wistd::integral_constant<unsigned __int64,0>,wil::window_dc,HDC__ *,0,std::nullptr_t>>>(a2 + 9);
}
