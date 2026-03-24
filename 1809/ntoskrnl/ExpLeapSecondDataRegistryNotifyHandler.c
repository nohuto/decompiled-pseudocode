/*
 * XREFs of ExpLeapSecondDataRegistryNotifyHandler @ 0x1408CD190
 * Callers:
 *     <none>
 * Callees:
 *     ExpReadLeapSecondData @ 0x1407342DC (ExpReadLeapSecondData.c)
 */

void ExpLeapSecondDataRegistryNotifyHandler()
{
  ExpReadLeapSecondData((bool *)ExLeapSecondData, 1);
}
