/*
 * XREFs of ?OnRequestShowKeyboard@AccessibilityExperienceManager@@UEAAJXZ @ 0x1803529B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180333704 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard@@@wil@@CAX_N.c)
 */

__int64 __fastcall AccessibilityExperienceManager::OnRequestShowKeyboard(
        AccessibilityExperienceManager *this,
        __int64 a2,
        __int64 a3)
{
  wil::Feature<__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard>::ReportUsageToService((__int64)this, a2, a3);
  return 0LL;
}
