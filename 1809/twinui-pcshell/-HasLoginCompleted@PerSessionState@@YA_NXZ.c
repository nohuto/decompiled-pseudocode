/*
 * XREFs of ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x18029FB78
 * Callers:
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x18029AA4C (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 *     ?OnFirstSignAnimationFinished@XamlLauncher@@UEAAJXZ @ 0x18029C2D0 (-OnFirstSignAnimationFinished@XamlLauncher@@UEAAJXZ.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18029C470 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18029EC70 (-s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 * Callees:
 *     PerSessionState::_DoesSessionKeyExist @ 0x18029FCDC (PerSessionState--_DoesSessionKeyExist.c)
 *     ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x18029FD50 (-_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ.c)
 */

char __fastcall PerSessionState::HasLoginCompleted(PerSessionState *this)
{
  char result; // al

  result = byte_180510E75;
  if ( !byte_180510E75 )
  {
    result = PerSessionState::_HasDesktopSwitchCompleted(this)
          && !(unsigned __int8)PerSessionState::_DoesSessionKeyExist(L"FSIAInProgress");
    byte_180510E75 = result;
  }
  return result;
}
