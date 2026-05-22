/*
 * XREFs of _ViewHierarchy::ViewHierarchy_::_1_::dtor$9 @ 0x18003DC18
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewHierarchy::ViewHierarchy_::_1_::dtor_9(__int64 a1, _QWORD *a2)
{
  wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_failfast_policy>>::~unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_failfast_policy>>(
    (wil::details **)(a2[10] + 192LL),
    a2);
}
