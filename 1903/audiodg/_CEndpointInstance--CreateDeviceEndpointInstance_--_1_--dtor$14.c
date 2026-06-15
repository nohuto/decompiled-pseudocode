/*
 * XREFs of _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$14 @ 0x14001B1D5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor_14(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(a2 + 48));
}
