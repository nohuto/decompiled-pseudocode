/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x14013BAF4
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x1406DBF4C (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x1408BE71C (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
