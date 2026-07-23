/*
 * XREFs of TtmIsEnabled @ 0x1405B1C70
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x1400108EC (PopGetConsoleDisplayRequestCount.c)
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     <none>
 */

bool TtmIsEnabled()
{
  return TtmpEnabled == 1;
}
