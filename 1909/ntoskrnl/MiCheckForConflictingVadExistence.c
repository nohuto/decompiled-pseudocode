/*
 * XREFs of MiCheckForConflictingVadExistence @ 0x14001CC9C
 * Callers:
 *     MiIsVaRangeAvailable @ 0x1405EB9BC (MiIsVaRangeAvailable.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x14001CCBC (MiCheckForConflictingVad.c)
 */

_BOOL8 MiCheckForConflictingVadExistence()
{
  return MiCheckForConflictingVad() != 0;
}
