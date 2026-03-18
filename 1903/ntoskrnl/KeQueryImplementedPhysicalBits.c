/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x14013D7C4
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x14072D9B0 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)KiImplementedPhysicalBits;
}
