/*
 * XREFs of _ScreenClippingBrokerImpl::GrabScreenShot_::_1_::dtor$4 @ 0x1803E210C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HGDIOBJ __fastcall ScreenClippingBrokerImpl::GrabScreenShot_::_1_::dtor_4(__int64 a1, __m128i *a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(wil::select_result),&public: static void wil::select_result::close(wil::select_result),wistd::integral_constant<unsigned __int64,0>,wil::select_result,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(wil::select_result),&public: static void wil::select_result::close(wil::select_result),wistd::integral_constant<unsigned __int64,0>,wil::select_result,void *,0,std::nullptr_t>>>(a2 + 7);
}
