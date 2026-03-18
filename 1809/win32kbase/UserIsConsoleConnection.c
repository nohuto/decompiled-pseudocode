/*
 * XREFs of UserIsConsoleConnection @ 0x1C0095A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 UserIsConsoleConnection()
{
  return gProtocolType == 0;
}
