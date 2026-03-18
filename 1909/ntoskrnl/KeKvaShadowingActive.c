/*
 * XREFs of KeKvaShadowingActive @ 0x140139E08
 * Callers:
 *     sub_1401BA434 @ 0x1401BA434 (sub_1401BA434.c)
 *     PspDisablePrimaryTokenExchange @ 0x1405E7AFC (PspDisablePrimaryTokenExchange.c)
 *     KeQuerySpeculationControlInformation @ 0x14072F3F8 (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x14072F880 (KeQueryKvaShadowInformation.c)
 *     PsCreateMinimalProcess @ 0x1407580C4 (PsCreateMinimalProcess.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
