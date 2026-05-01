/*
 * XREFs of _CSplashScreen::OnViewRemoved_::_1_::catch$24 @ 0x180152E08
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180114540 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall CSplashScreen::OnViewRemoved_::_1_::catch_24(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x4C,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\splashscreen.cpp",
    a4);
  return &loc_180152DE8;
}
