/*
 * XREFs of ExpLeapSecondDataRegistryNotifyHandler @ 0x1408CD1B0
 * Callers:
 *     <none>
 * Callees:
 *     ExpReadLeapSecondData @ 0x1407342FC (ExpReadLeapSecondData.c)
 */

void ExpLeapSecondDataRegistryNotifyHandler()
{
  ExpReadLeapSecondData((bool *)ExLeapSecondData, 1);
}
