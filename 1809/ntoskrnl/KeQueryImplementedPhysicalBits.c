/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x14029A600
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x140845A48 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)KiImplementedPhysicalBits;
}
