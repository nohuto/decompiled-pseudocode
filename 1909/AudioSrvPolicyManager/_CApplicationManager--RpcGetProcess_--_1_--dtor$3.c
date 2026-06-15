/*
 * XREFs of _CApplicationManager::RpcGetProcess_::_1_::dtor$3 @ 0x180036D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CApplicationManager::RpcGetProcess_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(a2 + 192));
}
