/*
 * XREFs of PdcPoPerfOverride @ 0x14086ECA0
 * Callers:
 *     PopPowerAggregatorExecuteActiveCallback @ 0x140875B50 (PopPowerAggregatorExecuteActiveCallback.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x140177B08 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1401785C0 (PpmBeginHighPerfRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1402E31C4 (PpmDisableHighPerfRequestDeferredExpiration.c)
 */

__int64 PdcPoPerfOverride()
{
  PpmBeginHighPerfRequest();
  PpmDisableHighPerfRequestDeferredExpiration(0);
  return PpmEndHighPerfRequest(1);
}
