/*
 * XREFs of __lambda_9e2bde6c4eb29ed8c5e15053395d27fd_::operator()_::_1_::catch$0 @ 0x1802BF0BB
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801361BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_9e2bde6c4eb29ed8c5e15053395d27fd_::operator()_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x121,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                           a4);
  return &loc_1802BF0B1;
}
