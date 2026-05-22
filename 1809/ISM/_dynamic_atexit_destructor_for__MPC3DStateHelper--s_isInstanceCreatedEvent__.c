/*
 * XREFs of _dynamic_atexit_destructor_for__MPC3DStateHelper::s_isInstanceCreatedEvent__ @ 0x180136E00
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void dynamic_atexit_destructor_for__MPC3DStateHelper::s_isInstanceCreatedEvent__()
{
  const char *v0; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( MPC3DStateHelper::s_isInstanceCreatedEvent && !CloseHandle(MPC3DStateHelper::s_isInstanceCreatedEvent) )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x90E,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v0);
    JUMPOUT(0x180136E35LL);
  }
}
