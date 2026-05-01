/*
 * XREFs of _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::GetAppViewTitle_::_1_::catch$7 @ 0x1800C685B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116D9C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::GetAppViewTitle_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 104),
                           (void *)0x57,
                           (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
                           a4);
  return &loc_18007689C;
}
