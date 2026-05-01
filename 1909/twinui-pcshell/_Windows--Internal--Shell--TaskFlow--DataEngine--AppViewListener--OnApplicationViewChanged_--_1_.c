/*
 * XREFs of _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::OnApplicationViewChanged_::_1_::catch$7 @ 0x1800E88F5
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801361BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::OnApplicationViewChanged_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 96) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x9F,
                           (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
                           a4);
  return &loc_18006A1D6;
}
