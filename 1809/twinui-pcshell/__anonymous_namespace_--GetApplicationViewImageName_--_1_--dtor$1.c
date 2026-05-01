/*
 * XREFs of __anonymous_namespace_::GetApplicationViewImageName_::_1_::dtor$1 @ 0x1801DBF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall _anonymous_namespace_::GetApplicationViewImageName_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(a2 + 104));
}
