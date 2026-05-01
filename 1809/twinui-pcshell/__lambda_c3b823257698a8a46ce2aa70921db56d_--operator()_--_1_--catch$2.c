/*
 * XREFs of __lambda_c3b823257698a8a46ce2aa70921db56d_::operator()_::_1_::catch$2 @ 0x1800ABA94
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007E604 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_c3b823257698a8a46ce2aa70921db56d_::operator()_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x794,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           a4);
  return &loc_18001E7A9;
}
