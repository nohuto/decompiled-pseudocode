/*
 * XREFs of _HandleAccessChangeNotification_::_1_::dtor$0 @ 0x1800D9175
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall HandleAccessChangeNotification_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * RtlFreeSid(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * RtlFreeSid(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>((void **)(a2 + 136));
}
