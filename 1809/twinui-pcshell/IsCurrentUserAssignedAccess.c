/*
 * XREFs of IsCurrentUserAssignedAccess @ 0x1803B26FC
 * Callers:
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180093B70 (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 IsCurrentUserAssignedAccess()
{
  return IsUserAssignedAccessSingleApp(-4LL);
}
