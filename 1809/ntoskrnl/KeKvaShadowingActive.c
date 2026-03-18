/*
 * XREFs of KeKvaShadowingActive @ 0x140136B24
 * Callers:
 *     sub_1401AEE14 @ 0x1401AEE14 (sub_1401AEE14.c)
 *     PspDisablePrimaryTokenExchange @ 0x1405F7498 (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x14075754C (PsCreateMinimalProcess.c)
 *     KeQuerySpeculationControlInformation @ 0x140843D58 (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x140844808 (KeQueryKvaShadowInformation.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
