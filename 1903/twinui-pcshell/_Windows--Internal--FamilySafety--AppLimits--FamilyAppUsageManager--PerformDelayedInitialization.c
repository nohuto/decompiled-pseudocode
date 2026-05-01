/*
 * XREFs of _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::PerformDelayedInitialization_::_1_::catch$3 @ 0x1800A3FC6
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116D9C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::PerformDelayedInitialization_::_1_::catch_3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x53,
                           (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                           a4);
  return &loc_1800A3FBC;
}
