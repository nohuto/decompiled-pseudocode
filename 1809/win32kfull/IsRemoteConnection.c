/*
 * XREFs of IsRemoteConnection @ 0x1C0018210
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsRemoteConnection()
{
  return gProtocolType != 0;
}
