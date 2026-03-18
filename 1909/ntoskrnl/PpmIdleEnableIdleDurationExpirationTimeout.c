/*
 * XREFs of PpmIdleEnableIdleDurationExpirationTimeout @ 0x1402EF08C
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140777198 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

void PpmIdleEnableIdleDurationExpirationTimeout()
{
  PpmIdleDurationExpirationTimeout = (unsigned int)(10000 * PpmIdleDurationExpirationTimeoutMs);
}
