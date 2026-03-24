/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x14029A410
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x1408447E8 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)KiImplementedPhysicalBits;
}
