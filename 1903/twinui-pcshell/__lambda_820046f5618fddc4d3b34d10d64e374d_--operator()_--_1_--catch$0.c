/*
 * XREFs of __lambda_820046f5618fddc4d3b34d10d64e374d_::operator()_::_1_::catch$0 @ 0x1802A3D85
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116D9C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_820046f5618fddc4d3b34d10d64e374d_::operator()_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x73,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
                           a4);
  return &loc_1802A3D7C;
}
