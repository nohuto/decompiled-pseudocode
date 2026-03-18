/*
 * XREFs of TtmIsEnabled @ 0x140670BDC
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x1400D5B9C (PopGetConsoleDisplayRequestCount.c)
 *     PopPowerSourceChangeCallback @ 0x14018C3A0 (PopPowerSourceChangeCallback.c)
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     <none>
 */

bool TtmIsEnabled()
{
  return TtmpEnabled == 1;
}
