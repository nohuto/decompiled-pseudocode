/*
 * XREFs of PopRecordPoBlackboxInformation @ 0x1408BA36C
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x140301080 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopRecordPepWorkorderBlackboxInformation @ 0x1403059B8 (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x140305D38 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x140306008 (PopRecordPowerWatchdogBlackboxInformation.c)
 */

void PopRecordPoBlackboxInformation()
{
  PopRecordPoIrpBlackboxInformation();
  PopRecordPepWorkorderBlackboxInformation();
  PopRecordPowerWatchdogBlackboxInformation();
}
