/*
 * XREFs of EditionIsWinEventsDeferred @ 0x1C01D5E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 EditionIsWinEventsDeferred()
{
  return gdwDeferWinEvent != 0;
}
