/*
 * XREFs of MiObtainSystemVa @ 0x1400E648C
 * Callers:
 *     MmAllocatePoolMemory @ 0x140022AFC (MmAllocatePoolMemory.c)
 *     MiExpandPtes @ 0x1400E5D60 (MiExpandPtes.c)
 *     MiExpandSystemCache @ 0x14012BF4C (MiExpandSystemCache.c)
 *     MiGetPageTablesForLargeMap @ 0x14018D694 (MiGetPageTablesForLargeMap.c)
 *     MiReserveDriverPtes @ 0x140712F54 (MiReserveDriverPtes.c)
 *     MiInitializeSystemPtes @ 0x1409EE318 (MiInitializeSystemPtes.c)
 *     MiMapBBTMemory @ 0x140A23054 (MiMapBBTMemory.c)
 * Callees:
 *     MiObtainDynamicVa @ 0x1400E64B4 (MiObtainDynamicVa.c)
 *     MiSystemVaToDynamicBitmap @ 0x1400E84A4 (MiSystemVaToDynamicBitmap.c)
 */

__int64 __fastcall MiObtainSystemVa(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // edx
  unsigned int v5; // r9d

  v3 = MiSystemVaToDynamicBitmap((unsigned int)a2, a2, a3, a1);
  return MiObtainDynamicVa(v3, v5, v4);
}
