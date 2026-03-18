/*
 * XREFs of NtRIMUpdateInputObserverRegistration @ 0x1C00DFCC0
 * Callers:
 *     <none>
 * Callees:
 *     rimObsCheckForObservationPermissions @ 0x1C0104DE4 (rimObsCheckForObservationPermissions.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C01059F8 (rimObsUpdateInputObserverRegistration.c)
 */

__int64 __fastcall NtRIMUpdateInputObserverRegistration(HANDLE Handle, unsigned int a2)
{
  signed int v3; // ebx

  v3 = a2 == 0 ? 0xC000000D : 0;
  if ( a2 && !(unsigned int)rimObsCheckForObservationPermissions(a2) )
    v3 = -1073741790;
  if ( v3 >= 0 )
    return (unsigned int)rimObsUpdateInputObserverRegistration(Handle, 1);
  return (unsigned int)v3;
}
