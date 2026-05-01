/*
 * XREFs of _ScreenClippingBrokerImpl::GrabScreenShot_::_1_::dtor$4 @ 0x18037C2A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HGDIOBJ __fastcall ScreenClippingBrokerImpl::GrabScreenShot_::_1_::dtor_4(__int64 a1, __m128i *a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(wil::SelectResult),&public: static void wil::SelectResult::Close(wil::SelectResult),wistd::integral_constant<unsigned __int64,0>,wil::SelectResult,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(wil::SelectResult),&public: static void wil::SelectResult::Close(wil::SelectResult),wistd::integral_constant<unsigned __int64,0>,wil::SelectResult,0,std::nullptr_t>>>(a2 + 7);
}
