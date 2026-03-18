/*
 * XREFs of MiGetLargestPageIndex @ 0x1400F0C40
 * Callers:
 *     MiAssembleLargePagePfnList @ 0x1408996D4 (MiAssembleLargePagePfnList.c)
 *     MiMapUserLargePages @ 0x14089A49C (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiGetLargestPageIndex()
{
  return (KeFeatureBits & 0x2000000000LL) == 0;
}
