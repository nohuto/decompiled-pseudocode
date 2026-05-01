/*
 * XREFs of __lambda_795e02c192f463c18ca265aec6362396_::operator()_::_1_::catch$23 @ 0x1802C320E
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801361BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_795e02c192f463c18ca265aec6362396_::operator()_::_1_::catch_23(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 184),
                           (void *)0xCC,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
                           a4);
  return &loc_1802C319D;
}
