/*
 * XREFs of _PenWorkspace::Discover::RecentAppsCache::OnForegroundProcessChanged_::_1_::catch$32 @ 0x1800AE406
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800EFCAC (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall PenWorkspace::Discover::RecentAppsCache::OnForegroundProcessChanged_::_1_::catch_32(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 104),
    (void *)0xA9,
    (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
    a4);
  return &loc_18005C4D3;
}
