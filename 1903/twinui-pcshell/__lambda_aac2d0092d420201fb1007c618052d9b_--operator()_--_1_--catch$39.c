/*
 * XREFs of __lambda_aac2d0092d420201fb1007c618052d9b_::operator()_::_1_::catch$39 @ 0x1802918B1
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180114540 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_aac2d0092d420201fb1007c618052d9b_::operator()_::_1_::catch_39(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 472),
    (void *)0x76,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
    a4);
  return &loc_180291748;
}
