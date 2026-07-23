/*
 * XREFs of ExpLeapSecondDataRegistryNotifyHandler @ 0x1408CE450
 * Callers:
 *     <none>
 * Callees:
 *     ExpReadLeapSecondData @ 0x1407354CC (ExpReadLeapSecondData.c)
 */

void ExpLeapSecondDataRegistryNotifyHandler()
{
  ExpReadLeapSecondData((bool *)ExLeapSecondData, 1);
}
