/*
 * XREFs of PdcPoPerfOverride @ 0x14086FF00
 * Callers:
 *     PopPowerAggregatorExecuteActiveCallback @ 0x140876DB0 (PopPowerAggregatorExecuteActiveCallback.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x140177C08 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1401786C0 (PpmBeginHighPerfRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1402E33B4 (PpmDisableHighPerfRequestDeferredExpiration.c)
 */

__int64 PdcPoPerfOverride()
{
  PpmBeginHighPerfRequest();
  PpmDisableHighPerfRequestDeferredExpiration(0);
  return PpmEndHighPerfRequest(1);
}
