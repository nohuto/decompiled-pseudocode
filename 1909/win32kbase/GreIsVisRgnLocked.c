/*
 * XREFs of GreIsVisRgnLocked @ 0x1C012E8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 GreIsVisRgnLocked()
{
  return ExIsResourceAcquiredExclusiveLite(ghsemDCVisRgn) != 0;
}
