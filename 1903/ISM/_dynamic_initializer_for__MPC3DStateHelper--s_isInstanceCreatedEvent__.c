/*
 * XREFs of _dynamic_initializer_for__MPC3DStateHelper::s_isInstanceCreatedEvent__ @ 0x180001290
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0W4EventOptions@wil@@$$V@?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@QEAA@$$QEAW4EventOptions@1@@Z @ 0x18001F2D4 (--$-0W4EventOptions@wil@@$$V@-$unique_any_t@V-$event_t@V-$unique_storage@U-$resource_policy@PEAX.c)
 */

int dynamic_initializer_for__MPC3DStateHelper::s_isInstanceCreatedEvent__()
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 1;
  wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_exception_policy>>::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_exception_policy>>(
    &MPC3DStateHelper::s_isInstanceCreatedEvent,
    &v1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__MPC3DStateHelper::s_isInstanceCreatedEvent__);
}
