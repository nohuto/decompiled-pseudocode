/*
 * XREFs of MiInitializeDynamicRegion @ 0x1409EE7CC
 * Callers:
 *     MiInitializeSystemCache @ 0x14074F094 (MiInitializeSystemCache.c)
 *     MiInitializeSystemPtes @ 0x1409EE318 (MiInitializeSystemPtes.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x1400E84A4 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x140187624 (MiBuildDynamicRegion.c)
 */

ULONG_PTR __fastcall MiInitializeDynamicRegion(int a1)
{
  __int64 *v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // r8

  v1 = MiSystemVaToDynamicBitmap(a1);
  return MiBuildDynamicRegion(v1, v2, v3);
}
