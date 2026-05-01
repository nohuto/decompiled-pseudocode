/*
 * XREFs of ?OnLauncherShow@XamlLauncher@@UEAAXXZ @ 0x180070900
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180070928 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 */

void __fastcall XamlLauncher::OnLauncherShow(XamlLauncher *this)
{
  XamlLauncher::PublishLauncherVisibilityState((XamlLauncher *)((char *)this - 72), 1);
  *((_DWORD *)this + 47) = 0;
}
