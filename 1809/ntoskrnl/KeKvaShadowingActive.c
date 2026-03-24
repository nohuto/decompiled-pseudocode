/*
 * XREFs of KeKvaShadowingActive @ 0x140136B44
 * Callers:
 *     sub_1401AEE34 @ 0x1401AEE34 (sub_1401AEE34.c)
 *     PspDisablePrimaryTokenExchange @ 0x1405F7498 (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x14075752C (PsCreateMinimalProcess.c)
 *     KeQuerySpeculationControlInformation @ 0x140843D38 (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x1408447E8 (KeQueryKvaShadowInformation.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
