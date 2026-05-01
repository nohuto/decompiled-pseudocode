/*
 * XREFs of ?_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ @ 0x18004F120
 * Callers:
 *     ?OnSuggestionsHidden@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18004F0F0 (-OnSuggestionsHidden@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnSuggestionsShown@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18004F140 (-OnSuggestionsShown@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnHidden@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18004F170 (-OnHidden@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnAppRequestedTransition@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18004F1A0 (-OnAppRequestedTransition@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x18004F6B0 (-OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 *     ?OnAllowForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18017F3F0 (-OnAllowForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnAppRequestedDismiss@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18017F420 (-OnAppRequestedDismiss@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnAppTransitionCompleted@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18017F450 (-OnAppTransitionCompleted@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnEnsureForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18017F4E0 (-OnEnsureForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnFocusNavigate@CortanaExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x18017F510 (-OnFocusNavigate@CortanaExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@.c)
 *     ?OnSetForegroundFailed@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18017F5B0 (-OnSetForegroundFailed@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnStartAndCortanaDismissRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18017F5E0 (-OnStartAndCortanaDismissRequested@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CortanaExperienceManagerNotification::_CanNotify(CortanaExperienceManagerNotification *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 7) )
    return *((_BYTE *)this + 48) != 0;
  return result;
}
