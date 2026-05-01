/*
 * XREFs of _PenWorkspace::Discover::RecentAppsCache::GetMRUApps_::_1_::catch$107 @ 0x180199D8C
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800EFCAC (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall PenWorkspace::Discover::RecentAppsCache::GetMRUApps_::_1_::catch_107(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 184),
    (void *)0xC4,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
    a4);
  return &loc_180199CE8;
}
