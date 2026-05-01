/*
 * XREFs of _WindowGroupManager::WindowGroupManager_::_1_::dtor$4 @ 0x1802044C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowGroupManager::WindowGroupManager_::_1_::dtor_4(__int64 a1, _QWORD *a2)
{
  wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_exception_policy>>::~unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_exception_policy>>(
    (wil::details **)(a2[12] + 112LL),
    a2);
}
