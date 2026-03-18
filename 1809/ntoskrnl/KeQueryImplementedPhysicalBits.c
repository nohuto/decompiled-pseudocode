/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x14029A310
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x140844808 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)KiImplementedPhysicalBits;
}
