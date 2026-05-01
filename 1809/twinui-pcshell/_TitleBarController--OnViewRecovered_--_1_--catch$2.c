/*
 * XREFs of _TitleBarController::OnViewRecovered_::_1_::catch$2 @ 0x1801F86B3
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800EFCAC (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall TitleBarController::OnViewRecovered_::_1_::catch_2(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x100,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
    a4);
  return &loc_1801F8693;
}
