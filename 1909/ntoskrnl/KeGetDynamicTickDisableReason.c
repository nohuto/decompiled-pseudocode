/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x14013DC50
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x1407209A0 (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x1408FAE04 (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
