/*
 * XREFs of _PenWorkspace::Discover::RecentAppsCache::TrackProcess_::_1_::catch$51 @ 0x1800E67B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801339B0 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall PenWorkspace::Discover::RecentAppsCache::TrackProcess_::_1_::catch_51(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 264),
    (void *)0x1EE,
    (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
    a4);
  return &loc_1800276DB;
}
