/*
 * XREFs of ?OobeCompletedCallback@TouchKeyboardExperienceManager@@CAXPEAX@Z @ 0x180331EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18033A440 (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 */

void __fastcall TouchKeyboardExperienceManager::OobeCompletedCallback(TouchKeyboardExperienceManager *a1)
{
  TouchKeyboardExperienceManager::UpdateSettingsLauncherAvailability(a1);
  if ( *((_QWORD *)a1 + 114) )
  {
    UnregisterWaitUntilOOBECompleted();
    *((_QWORD *)a1 + 114) = 0LL;
  }
}
