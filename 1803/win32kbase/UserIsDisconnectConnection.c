/*
 * XREFs of UserIsDisconnectConnection @ 0x1C0042560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 UserIsDisconnectConnection()
{
  return gProtocolType == -1;
}
