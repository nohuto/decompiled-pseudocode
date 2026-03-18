/*
 * XREFs of PdcPoPerfOverride @ 0x1408AB050
 * Callers:
 *     PopPowerAggregatorExecuteActiveCallback @ 0x1408B2240 (PopPowerAggregatorExecuteActiveCallback.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x140181C5C (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1401825B8 (PpmBeginHighPerfRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1402FF9A4 (PpmDisableHighPerfRequestDeferredExpiration.c)
 */

__int64 PdcPoPerfOverride()
{
  PpmBeginHighPerfRequest();
  PpmDisableHighPerfRequestDeferredExpiration(0);
  return PpmEndHighPerfRequest(1);
}
