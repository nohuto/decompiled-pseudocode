/*
 * XREFs of _WindowEventDispatcher::TerminateApp_::_1_::catch$0 @ 0x1802813E3
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116D9C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall WindowEventDispatcher::TerminateApp_::_1_::catch_0(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x7A3,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           a4);
  return &loc_1802813D9;
}
