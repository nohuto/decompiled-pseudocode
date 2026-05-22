/*
 * XREFs of _MPC3DStateHelper::MPC3DStateHelper_::_1_::dtor$4 @ 0x18003CD43
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPC3DStateHelper::MPC3DStateHelper_::_1_::dtor_4(__int64 a1, _QWORD *a2)
{
  wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_failfast_policy>>::~unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_failfast_policy>>(
    (wil::details **)(a2[12] + 64LL),
    a2);
}
