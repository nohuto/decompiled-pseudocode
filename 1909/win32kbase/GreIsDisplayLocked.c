/*
 * XREFs of GreIsDisplayLocked @ 0x1C012E8A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 GreIsDisplayLocked()
{
  return ExIsResourceAcquiredExclusiveLite(ghsemGreLock) != 0;
}
