/*
 * XREFs of ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x180176014
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180177000 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801894E0 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x1802F4390 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?LoadShellLauncherConfiguration@KioskPositioner@@AEAAXXZ @ 0x18039D7B8 (-LoadShellLauncherConfiguration@KioskPositioner@@AEAAXXZ.c)
 * Callees:
 *     _lambda_158cd24150d3aa70f7981189111b69bc_::operator() @ 0x180174F00 (_lambda_158cd24150d3aa70f7981189111b69bc_--operator().c)
 */

char __fastcall IsShellLauncherEnabledForCurrentUser(__int64 a1)
{
  char v1; // bl
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v3 = 0;
  if ( (int)lambda_158cd24150d3aa70f7981189111b69bc_::operator()(a1, &v3) >= 0 )
    return v3 != 0;
  return v1;
}
