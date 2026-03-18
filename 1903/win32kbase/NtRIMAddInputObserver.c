/*
 * XREFs of NtRIMAddInputObserver @ 0x1C0136130
 * Callers:
 *     <none>
 * Callees:
 *     rimObsAddInputObserver @ 0x1C0159554 (rimObsAddInputObserver.c)
 *     rimObsCheckForObservationPermissions @ 0x1C0159974 (rimObsCheckForObservationPermissions.c)
 */

__int64 __fastcall NtRIMAddInputObserver(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        __int64 a8)
{
  if ( !a7 )
    return 3221225485LL;
  if ( (unsigned int)rimObsCheckForObservationPermissions(a7) )
    return rimObsAddInputObserver(a1, a2, a3, 1LL, a4, a5, a6, a7, a8);
  return 3221225506LL;
}
