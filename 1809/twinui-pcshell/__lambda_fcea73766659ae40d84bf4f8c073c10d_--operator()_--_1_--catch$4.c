/*
 * XREFs of __lambda_fcea73766659ae40d84bf4f8c073c10d_::operator()_::_1_::catch$4 @ 0x18026CCF5
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800EFCAC (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_fcea73766659ae40d84bf4f8c073c10d_::operator()_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0xB5,
    (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\monitorframe.h",
    a4);
  return &loc_18026CCB7;
}
