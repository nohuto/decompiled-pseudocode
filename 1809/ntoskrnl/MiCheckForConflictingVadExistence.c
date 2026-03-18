/*
 * XREFs of MiCheckForConflictingVadExistence @ 0x1400884E8
 * Callers:
 *     MiIsVaRangeAvailable @ 0x1405F49F0 (MiIsVaRangeAvailable.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x140088510 (MiCheckForConflictingVad.c)
 */

_BOOL8 MiCheckForConflictingVadExistence()
{
  return MiCheckForConflictingVad() != 0;
}
