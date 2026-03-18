/*
 * XREFs of NtRIMUpdateInputObserverRegistration @ 0x1C0137260
 * Callers:
 *     <none>
 * Callees:
 *     rimObsCheckForObservationPermissions @ 0x1C0159974 (rimObsCheckForObservationPermissions.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C015A6BC (rimObsUpdateInputObserverRegistration.c)
 */

__int64 __fastcall NtRIMUpdateInputObserverRegistration(HANDLE Handle, unsigned int a2)
{
  if ( !a2 )
    return 3221225485LL;
  if ( (unsigned int)rimObsCheckForObservationPermissions(a2) )
    return rimObsUpdateInputObserverRegistration(Handle, 1);
  return 3221225506LL;
}
