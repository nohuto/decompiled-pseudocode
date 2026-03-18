/*
 * XREFs of IsRemoteConnection @ 0x1C004D060
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     xxxRemoteReconnect @ 0x1C015FF30 (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsRemoteConnection()
{
  return gProtocolType != 0;
}
