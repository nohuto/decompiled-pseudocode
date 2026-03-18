/*
 * XREFs of MiCheckForConflictingVadExistence @ 0x14001C8AC
 * Callers:
 *     MiIsVaRangeAvailable @ 0x1405EB1EC (MiIsVaRangeAvailable.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x14001C8CC (MiCheckForConflictingVad.c)
 */

_BOOL8 MiCheckForConflictingVadExistence()
{
  return MiCheckForConflictingVad() != 0;
}
