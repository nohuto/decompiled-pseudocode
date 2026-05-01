/*
 * XREFs of ?OnLauncherHide@XamlLauncher@@UEAAXXZ @ 0x1800116E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180011758 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ?LinkUIATrees@XamlLauncher@@AEAAX_N@Z @ 0x180011824 (-LinkUIATrees@XamlLauncher@@AEAAX_N@Z.c)
 */

void __fastcall XamlLauncher::OnLauncherHide(XamlLauncher *this)
{
  XamlLauncher::LinkUIATrees((XamlLauncher *)((char *)this - 72), 0);
  XamlLauncher::PublishLauncherVisibilityState((XamlLauncher *)((char *)this - 72), 0);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 56LL))(*((_QWORD *)this + 6));
}
