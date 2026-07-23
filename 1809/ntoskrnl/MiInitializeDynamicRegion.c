/*
 * XREFs of MiInitializeDynamicRegion @ 0x1409B7DDC
 * Callers:
 *     MiInitializeSpecialPool @ 0x140716868 (MiInitializeSpecialPool.c)
 *     MiInitializeSystemCache @ 0x14072B88C (MiInitializeSystemCache.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x1400F7280 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x14017EA20 (MiBuildDynamicRegion.c)
 */

ULONG_PTR __fastcall MiInitializeDynamicRegion(int a1)
{
  __int64 *v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // r8

  v1 = MiSystemVaToDynamicBitmap(a1);
  return MiBuildDynamicRegion(v1, v2, v3);
}
