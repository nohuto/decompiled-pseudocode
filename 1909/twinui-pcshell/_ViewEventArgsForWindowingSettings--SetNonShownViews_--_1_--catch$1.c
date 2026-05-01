/*
 * XREFs of _ViewEventArgsForWindowingSettings::SetNonShownViews_::_1_::catch$1 @ 0x18029FBBE
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801361BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewEventArgsForWindowingSettings::SetNonShownViews_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 72) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x372,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventargs.h",
                           a4);
  return &loc_18029FBA2;
}
