/*
 * XREFs of EditionIsWinEventsDeferred @ 0x1C01EB420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 EditionIsWinEventsDeferred()
{
  return gdwDeferWinEvent != 0;
}
