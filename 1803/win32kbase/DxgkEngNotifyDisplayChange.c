/*
 * XREFs of DxgkEngNotifyDisplayChange @ 0x1C00C97E0
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A34A0 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C006E590 (GreIncrementDisplaySettingsUniqueness.c)
 *     UserNotifyDisplayChange @ 0x1C00A6D00 (UserNotifyDisplayChange.c)
 */

__int64 __fastcall DxgkEngNotifyDisplayChange(char a1)
{
  if ( a1 )
  {
    if ( gpGdiSharedMemory )
    {
      _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393380);
      DisplayScenarioJournalDisplayUniquenessIncremented();
    }
  }
  else
  {
    GreIncrementDisplaySettingsUniqueness();
  }
  return UserNotifyDisplayChange();
}
