/*
 * XREFs of PopRecordPoBlackboxInformation @ 0x1408BAA9C
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1403015D0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopRecordPepWorkorderBlackboxInformation @ 0x140305F08 (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x140306288 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x140306558 (PopRecordPowerWatchdogBlackboxInformation.c)
 */

void PopRecordPoBlackboxInformation()
{
  PopRecordPoIrpBlackboxInformation();
  PopRecordPepWorkorderBlackboxInformation();
  PopRecordPowerWatchdogBlackboxInformation();
}
