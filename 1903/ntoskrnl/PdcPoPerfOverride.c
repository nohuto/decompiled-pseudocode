/*
 * XREFs of PdcPoPerfOverride @ 0x1408AB7F0
 * Callers:
 *     PopPowerAggregatorExecuteActiveCallback @ 0x1408B29E0 (PopPowerAggregatorExecuteActiveCallback.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x14018156C (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x140181EC8 (PpmBeginHighPerfRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1402FFEF4 (PpmDisableHighPerfRequestDeferredExpiration.c)
 */

__int64 PdcPoPerfOverride()
{
  PpmBeginHighPerfRequest();
  PpmDisableHighPerfRequestDeferredExpiration(0);
  return PpmEndHighPerfRequest(1);
}
