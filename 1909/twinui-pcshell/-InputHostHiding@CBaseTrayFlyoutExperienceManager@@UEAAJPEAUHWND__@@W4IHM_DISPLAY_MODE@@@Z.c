/*
 * XREFs of ?InputHostHiding@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x180098490
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?HandleInputHostVisibilityChanged@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z @ 0x1800981F0 (-HandleInputHostVisibilityChanged@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISP.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::InputHostHiding(__int64 a1)
{
  return CBaseTrayFlyoutExperienceManager::HandleInputHostVisibilityChanged((CBaseTrayFlyoutExperienceManager *)(a1 - 24));
}
