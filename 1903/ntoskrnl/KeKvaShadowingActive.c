/*
 * XREFs of KeKvaShadowingActive @ 0x140139768
 * Callers:
 *     sub_1401B9D14 @ 0x1401B9D14 (sub_1401B9D14.c)
 *     PspDisablePrimaryTokenExchange @ 0x1405E732C (PspDisablePrimaryTokenExchange.c)
 *     KeQuerySpeculationControlInformation @ 0x14072D528 (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x14072D9B0 (KeQueryKvaShadowInformation.c)
 *     PsCreateMinimalProcess @ 0x140769434 (PsCreateMinimalProcess.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
