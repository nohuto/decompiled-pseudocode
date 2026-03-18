/*
 * XREFs of IsLogonConnected @ 0x1C0104720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 IsLogonConnected()
{
  return gWinLogonRpcHandle != 0LL;
}
