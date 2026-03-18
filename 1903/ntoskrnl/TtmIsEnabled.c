/*
 * XREFs of TtmIsEnabled @ 0x1406A3134
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x1400EE61C (PopGetConsoleDisplayRequestCount.c)
 *     PopPowerSourceChangeCallback @ 0x14018BA10 (PopPowerSourceChangeCallback.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     <none>
 */

bool TtmIsEnabled()
{
  return TtmpEnabled == 1;
}
