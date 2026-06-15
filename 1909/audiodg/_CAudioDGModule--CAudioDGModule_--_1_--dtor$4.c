/*
 * XREFs of _CAudioDGModule::CAudioDGModule_::_1_::dtor$4 @ 0x1400157BB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDGModule::CAudioDGModule_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>::~unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>(*(_QWORD *)(a2 + 288) + 152LL);
}
