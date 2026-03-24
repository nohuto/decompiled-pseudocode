/*
 * XREFs of PpmIdleEnableIdleDurationExpirationTimeout @ 0x1402D4C80
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x14074F434 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

void PpmIdleEnableIdleDurationExpirationTimeout()
{
  PpmIdleDurationExpirationTimeout = (unsigned int)(10000 * PpmIdleDurationExpirationTimeoutMs);
}
