/*
 * XREFs of _CApplicationManager::RpcGetProcess_::_1_::dtor$4 @ 0x180036D42
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HLOCAL __fastcall CApplicationManager::RpcGetProcess_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)(a2 + 248));
}
