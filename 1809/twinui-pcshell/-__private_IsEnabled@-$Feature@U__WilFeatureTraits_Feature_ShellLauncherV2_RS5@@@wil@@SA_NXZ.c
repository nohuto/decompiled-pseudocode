/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_ShellLauncherV2_RS5@@@wil@@SA_NXZ @ 0x18008A440
 * Callers:
 *     _lambda_7dce459d489fa1384d40ebd6fa301128_::operator() @ 0x180089C4C (_lambda_7dce459d489fa1384d40ebd6fa301128_--operator().c)
 *     ?TryLaunchCustomShell@CustomShellManager@@UEAAJPEAH@Z @ 0x18008C810 (-TryLaunchCustomShell@CustomShellManager@@UEAAJPEAH@Z.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x18008D1F0 (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ShellLauncherV2_RS5@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180089FB8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ShellLauncherV2_RS5@@@wil@@C.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ShellLauncherV2_RS5@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008A110 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ShellLauncherV2_RS5@@@wil@@CAX_NW4Re.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_ShellLauncherV2_RS5>::__private_IsEnabled(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_ShellLauncherV2_RS5>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_ShellLauncherV2_RS5>::ReportUsageToService(v2, v3, v4);
  return v1;
}
