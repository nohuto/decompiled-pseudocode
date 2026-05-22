/*
 * XREFs of _InputSystemServerConnection::Create_::_1_::dtor$0 @ 0x18003CE06
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputSystemServerConnection::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>(a2 + 152);
}
