/*
 * XREFs of _MPCFocusTarget::MPCFocusTarget_::_1_::dtor$2 @ 0x180056D71
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCFocusTarget::MPCFocusTarget_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(*(_QWORD *)(a2 + 64) + 88LL);
}
