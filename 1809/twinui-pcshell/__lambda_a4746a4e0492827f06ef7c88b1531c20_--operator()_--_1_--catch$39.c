/*
 * XREFs of __lambda_a4746a4e0492827f06ef7c88b1531c20_::operator()_::_1_::catch$39 @ 0x18023B939
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800EFCAC (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_a4746a4e0492827f06ef7c88b1531c20_::operator()_::_1_::catch_39(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 472),
    (void *)0x61,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
    a4);
  return &loc_18023B7DD;
}
