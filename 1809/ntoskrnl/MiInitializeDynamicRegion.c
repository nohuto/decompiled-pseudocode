/*
 * XREFs of MiInitializeDynamicRegion @ 0x1409B6DDC
 * Callers:
 *     MiInitializeSpecialPool @ 0x1407155E8 (MiInitializeSpecialPool.c)
 *     MiInitializeSystemCache @ 0x14072A6BC (MiInitializeSystemCache.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x1400F71E0 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x14017E8C0 (MiBuildDynamicRegion.c)
 */

ULONG_PTR __fastcall MiInitializeDynamicRegion(int a1)
{
  __int64 *v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // r8

  v1 = MiSystemVaToDynamicBitmap(a1);
  return MiBuildDynamicRegion(v1, v2, v3);
}
