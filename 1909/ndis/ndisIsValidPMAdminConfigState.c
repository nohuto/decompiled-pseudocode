/*
 * XREFs of ndisIsValidPMAdminConfigState @ 0x1C00732D4
 * Callers:
 *     ndisWmiSetPMAdminConfig @ 0x1C00777F4 (ndisWmiSetPMAdminConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIsValidPMAdminConfigState(unsigned int a1, int a2)
{
  if ( a1 > 2 )
    return 3221225485LL;
  if ( a2 || !a1 )
    return 0LL;
  return 3221226021LL;
}
