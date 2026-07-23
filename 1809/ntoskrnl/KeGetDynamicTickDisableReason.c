/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x14013BC14
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x1406DD1CC (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x1408BF9BC (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
