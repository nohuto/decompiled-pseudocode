/*
 * XREFs of ??$?0W4EventOptions@wil@@$$V@?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@QEAA@$$QEAW4EventOptions@1@@Z @ 0x18001F2D4
 * Callers:
 *     _dynamic_initializer_for__MPC3DStateHelper::s_isInstanceCreatedEvent__ @ 0x180001290 (_dynamic_initializer_for__MPC3DStateHelper--s_isInstanceCreatedEvent__.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18001F94C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180059CF0 (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
wil::details **__fastcall wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_exception_policy>>::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_exception_policy>>(
        wil::details **a1,
        int *a2)
{
  int v3; // r8d
  void *v4; // rdx
  wil::details *Event; // rbp
  unsigned int v6; // r8d
  const char *v7; // r9
  wil::details *v8; // rsi
  DWORD LastError; // ebx
  void *v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a2;
  *a1 = 0LL;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, v3 & 3, 0x1F0003u);
  if ( !Event )
  {
    wil::details::in1diag3::Throw_GetLastError(retaddr, v4, v6, v7);
    JUMPOUT(0x18001F351LL);
  }
  GetLastError();
  v8 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    wil::details::CloseHandle(v8, v11);
    SetLastError(LastError);
  }
  *a1 = Event;
  return a1;
}
