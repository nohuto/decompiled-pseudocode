/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x14013BB14
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x1406DBF2C (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x1408BE6FC (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
