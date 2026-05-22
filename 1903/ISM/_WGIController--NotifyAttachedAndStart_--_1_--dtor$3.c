/*
 * XREFs of _WGIController::NotifyAttachedAndStart_::_1_::dtor$3 @ 0x1800AA391
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WGIController::NotifyAttachedAndStart_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long BCryptDestroyHash(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long BCryptDestroyHash(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>((void **)(a2 + 64));
}
