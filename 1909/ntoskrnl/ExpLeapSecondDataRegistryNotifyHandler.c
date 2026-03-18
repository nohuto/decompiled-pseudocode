/*
 * XREFs of ExpLeapSecondDataRegistryNotifyHandler @ 0x14090A200
 * Callers:
 *     <none>
 * Callees:
 *     ExpReadLeapSecondData @ 0x140764054 (ExpReadLeapSecondData.c)
 */

void ExpLeapSecondDataRegistryNotifyHandler()
{
  ExpReadLeapSecondData((bool *)ExLeapSecondData, 1);
}
