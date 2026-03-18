/*
 * XREFs of MiLockPageTable @ 0x14015D3F4
 * Callers:
 *     NtLockVirtualMemory @ 0x1400CB120 (NtLockVirtualMemory.c)
 *     MiMapRetpolineStubs @ 0x140154F68 (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x14018065C (MiUnmapRetpolineStubs.c)
 *     MiInitializeDynamicBitmap @ 0x1407420E8 (MiInitializeDynamicBitmap.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiLockPageTable(__int64 a1, unsigned __int64 a2)
{
  return MiLockPageTableInternal(a1, a2, 0LL);
}
