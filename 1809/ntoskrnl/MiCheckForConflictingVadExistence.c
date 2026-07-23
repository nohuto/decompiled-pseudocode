/*
 * XREFs of MiCheckForConflictingVadExistence @ 0x1400884D8
 * Callers:
 *     MiIsVaRangeAvailable @ 0x1405F59F0 (MiIsVaRangeAvailable.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x140088500 (MiCheckForConflictingVad.c)
 */

_BOOL8 MiCheckForConflictingVadExistence()
{
  return MiCheckForConflictingVad() != 0;
}
