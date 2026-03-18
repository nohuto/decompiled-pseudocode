/*
 * XREFs of PdcPoPerfOverride @ 0x14086ECC0
 * Callers:
 *     PopPowerAggregatorExecuteActiveCallback @ 0x140875B70 (PopPowerAggregatorExecuteActiveCallback.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x140177AE8 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1401785A0 (PpmBeginHighPerfRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1402E30C4 (PpmDisableHighPerfRequestDeferredExpiration.c)
 */

__int64 PdcPoPerfOverride()
{
  PpmBeginHighPerfRequest();
  PpmDisableHighPerfRequestDeferredExpiration(0);
  return PpmEndHighPerfRequest(1);
}
