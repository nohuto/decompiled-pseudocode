/*
 * XREFs of MiGetLargestPageIndex @ 0x1400DE350
 * Callers:
 *     MiAssembleLargePagePfnList @ 0x140898EF4 (MiAssembleLargePagePfnList.c)
 *     MiMapUserLargePages @ 0x140899CBC (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiGetLargestPageIndex()
{
  return (KeFeatureBits & 0x2000000000LL) == 0;
}
