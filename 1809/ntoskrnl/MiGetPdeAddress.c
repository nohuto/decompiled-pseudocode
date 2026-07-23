/*
 * XREFs of MiGetPdeAddress @ 0x1400EDBE4
 * Callers:
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     MiEliminateZeroPages @ 0x14066D070 (MiEliminateZeroPages.c)
 *     MiSessionCreateInternal @ 0x140716F08 (MiSessionCreateInternal.c)
 *     MiMapUserLargePages @ 0x14085E7B8 (MiMapUserLargePages.c)
 *     MiUnmapLargeDriver @ 0x14085EBDC (MiUnmapLargeDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPdeAddress(unsigned __int64 a1)
{
  return ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
}
