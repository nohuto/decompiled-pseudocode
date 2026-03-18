/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x14013DD04
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x14072F880 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)KiImplementedPhysicalBits;
}
