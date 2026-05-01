/*
 * XREFs of __lambda_5f9e95539f8e1465166802ff2b1874b7_::operator()_::_1_::catch$1 @ 0x1801F68F3
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800EFCAC (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall _lambda_5f9e95539f8e1465166802ff2b1874b7_::operator()_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x112,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
    a4);
  return &loc_1801F68E1;
}
