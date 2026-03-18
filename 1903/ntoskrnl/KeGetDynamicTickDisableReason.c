/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x14013D710
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x14071EB10 (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x1408FB424 (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
