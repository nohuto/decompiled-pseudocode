/*
 * XREFs of MiGetPdeAddress @ 0x14001F3F4
 * Callers:
 *     MiEliminateZeroPages @ 0x1405EC600 (MiEliminateZeroPages.c)
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     MiSessionCreateInternal @ 0x14074050C (MiSessionCreateInternal.c)
 *     MiUnmapLargeDriver @ 0x14089A82C (MiUnmapLargeDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPdeAddress(unsigned __int64 a1)
{
  return ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
}
