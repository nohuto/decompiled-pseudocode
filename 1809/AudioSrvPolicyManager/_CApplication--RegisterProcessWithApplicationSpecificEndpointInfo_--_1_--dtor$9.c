/*
 * XREFs of _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$9 @ 0x180038C9B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>((void **)(*(_QWORD *)(a2 + 136) + 88LL));
}
