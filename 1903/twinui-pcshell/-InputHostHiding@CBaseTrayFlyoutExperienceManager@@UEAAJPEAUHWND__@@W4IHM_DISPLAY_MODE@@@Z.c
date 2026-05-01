/*
 * XREFs of ?InputHostHiding@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x180090920
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?HandleInputHostVisibilityChanged@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z @ 0x18009067C (-HandleInputHostVisibilityChanged@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISP.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::InputHostHiding(__int64 a1)
{
  return CBaseTrayFlyoutExperienceManager::HandleInputHostVisibilityChanged((CBaseTrayFlyoutExperienceManager *)(a1 - 24));
}
