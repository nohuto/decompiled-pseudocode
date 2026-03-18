/*
 * XREFs of PopRecordPoBlackboxInformation @ 0x14087CFB4
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1402E46A0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopRecordPepWorkorderBlackboxInformation @ 0x1402E8A14 (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1402E8BD8 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1402E8E98 (PopRecordPowerWatchdogBlackboxInformation.c)
 */

void PopRecordPoBlackboxInformation()
{
  PopRecordPoIrpBlackboxInformation();
  PopRecordPepWorkorderBlackboxInformation();
  PopRecordPowerWatchdogBlackboxInformation();
}
