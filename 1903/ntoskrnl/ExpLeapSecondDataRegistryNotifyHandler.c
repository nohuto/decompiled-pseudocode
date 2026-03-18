/*
 * XREFs of ExpLeapSecondDataRegistryNotifyHandler @ 0x14090A7A0
 * Callers:
 *     <none>
 * Callees:
 *     ExpReadLeapSecondData @ 0x14075F730 (ExpReadLeapSecondData.c)
 */

void ExpLeapSecondDataRegistryNotifyHandler()
{
  ExpReadLeapSecondData((bool *)ExLeapSecondData);
}
