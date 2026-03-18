/*
 * XREFs of IsRemoteConnection @ 0x1C00AC240
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     xxxRemoteReconnect @ 0x1C015EF70 (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsRemoteConnection()
{
  return gProtocolType != 0;
}
