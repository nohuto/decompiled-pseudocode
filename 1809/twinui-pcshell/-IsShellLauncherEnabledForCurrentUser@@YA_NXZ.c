/*
 * XREFs of ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x18008D1F0
 * Callers:
 *     ?LoadShellLauncherConfiguration@KioskPositioner@@AEAAXXZ @ 0x180098D14 (-LoadShellLauncherConfiguration@KioskPositioner@@AEAAXXZ.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18014A884 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18015D124 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18029C470 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_ShellLauncherV2_RS5@@@wil@@SA_NXZ @ 0x18008A440 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_ShellLauncherV2_RS5@@@wil@@SA_NXZ.c)
 *     _lambda_3ed3b67832afae62349e61fe37bd42c9_::operator() @ 0x18008CCF0 (_lambda_3ed3b67832afae62349e61fe37bd42c9_--operator().c)
 */

char __fastcall IsShellLauncherEnabledForCurrentUser(__int64 a1)
{
  char result; // al
  __int64 v2; // rcx
  char v3; // bl
  char v4; // [rsp+30h] [rbp+8h] BYREF

  result = wil::Feature<__WilFeatureTraits_Feature_ShellLauncherV2_RS5>::__private_IsEnabled(a1);
  v3 = 0;
  if ( result )
  {
    v4 = 0;
    if ( (int)lambda_3ed3b67832afae62349e61fe37bd42c9_::operator()(v2, &v4) >= 0 )
      return v4 != 0;
    return v3;
  }
  return result;
}
