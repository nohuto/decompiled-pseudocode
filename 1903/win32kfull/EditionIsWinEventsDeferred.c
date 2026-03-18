/*
 * XREFs of EditionIsWinEventsDeferred @ 0x1C01EB5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 EditionIsWinEventsDeferred()
{
  return gdwDeferWinEvent != 0;
}
