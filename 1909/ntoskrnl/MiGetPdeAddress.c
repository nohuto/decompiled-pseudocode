/*
 * XREFs of MiGetPdeAddress @ 0x14001F7E4
 * Callers:
 *     MiEliminateZeroPages @ 0x1405ECDD0 (MiEliminateZeroPages.c)
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 *     MiSessionCreateInternal @ 0x14074240C (MiSessionCreateInternal.c)
 *     MiUnmapLargeDriver @ 0x14089A04C (MiUnmapLargeDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPdeAddress(unsigned __int64 a1)
{
  return ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
}
