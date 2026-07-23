/*
 * XREFs of KeKvaShadowingActive @ 0x140136C44
 * Callers:
 *     sub_1401AEF74 @ 0x1401AEF74 (sub_1401AEF74.c)
 *     PspDisablePrimaryTokenExchange @ 0x1405F8498 (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x14075871C (PsCreateMinimalProcess.c)
 *     KeQuerySpeculationControlInformation @ 0x140844F98 (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x140845A48 (KeQueryKvaShadowInformation.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
