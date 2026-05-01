/*
 * XREFs of ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x18029AA4C
 * Callers:
 *     ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x18000B270 (-OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18000B2E0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180010820 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180011758 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x18029FB78 (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 *     ?IsLauncherVisible@PerSessionState@@YA_N_N@Z @ 0x18029FC08 (-IsLauncherVisible@PerSessionState@@YA_N_N@Z.c)
 */

void __fastcall XamlLauncher::HandleInitialHShellEvent(XamlLauncher *this, enum _TABLETMODESTATE *a2)
{
  bool v3; // bl
  PerSessionState *v4; // rcx
  bool v5; // dl
  PerSessionState *v6; // rcx
  bool IsLauncherVisible; // bl

  v3 = TabletModeHelpers::IsTabletMode(this, a2) == 0;
  if ( PerSessionState::HasLoginCompleted(v4) )
  {
    LOBYTE(v6) = !v3;
    IsLauncherVisible = PerSessionState::IsLauncherVisible(v6, v5);
    if ( !IsLauncherVisible )
      return;
    XamlLauncher::PublishLauncherVisibilityState(this, 0);
LABEL_6:
    if ( !IsLauncherVisible )
      return;
    goto LABEL_7;
  }
  if ( v3 )
  {
    IsLauncherVisible = 0;
    goto LABEL_6;
  }
LABEL_7:
  XamlLauncher::ShowStartView((__int64)this + 24, 1u, 4u);
}
