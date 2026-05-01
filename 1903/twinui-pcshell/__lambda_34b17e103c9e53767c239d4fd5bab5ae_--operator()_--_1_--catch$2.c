/*
 * XREFs of __lambda_34b17e103c9e53767c239d4fd5bab5ae_::operator()_::_1_::catch$2 @ 0x18009AA97
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116D9C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_34b17e103c9e53767c239d4fd5bab5ae_::operator()_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x849,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           a4);
  return &loc_18009AA45;
}
