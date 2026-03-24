/*
 * XREFs of MiGetPdeAddress @ 0x1400EDB64
 * Callers:
 *     MiUnloadSystemImage @ 0x140651AA4 (MiUnloadSystemImage.c)
 *     MiEliminateZeroPages @ 0x14066BEB0 (MiEliminateZeroPages.c)
 *     MiSessionCreateInternal @ 0x140715C68 (MiSessionCreateInternal.c)
 *     MiMapUserLargePages @ 0x14085D558 (MiMapUserLargePages.c)
 *     MiUnmapLargeDriver @ 0x14085D97C (MiUnmapLargeDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPdeAddress(unsigned __int64 a1)
{
  return ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
}
