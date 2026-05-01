/*
 * XREFs of ?PerformDelayedInitialization@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ @ 0x1800A3FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800A4AB4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart@@@wi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::PerformDelayedInitialization(
        Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *this)
{
  const char *v1; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart>::ReportUsageToService(this);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x53,
                           (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                           v1);
  }
  return result;
}
