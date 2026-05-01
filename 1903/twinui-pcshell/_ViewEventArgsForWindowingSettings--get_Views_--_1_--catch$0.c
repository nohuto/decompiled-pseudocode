/*
 * XREFs of _ViewEventArgsForWindowingSettings::get_Views_::_1_::catch$0 @ 0x180282C8D
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116D9C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewEventArgsForWindowingSettings::get_Views_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x35D,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventargs.h",
                           a4);
  return &loc_180282C83;
}
