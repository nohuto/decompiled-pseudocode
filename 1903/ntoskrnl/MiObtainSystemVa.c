/*
 * XREFs of MiObtainSystemVa @ 0x1400AAF7C
 * Callers:
 *     MmAllocatePoolMemory @ 0x14002270C (MmAllocatePoolMemory.c)
 *     MiExpandPtes @ 0x1400AA84C (MiExpandPtes.c)
 *     MiExpandSystemCache @ 0x14012B47C (MiExpandSystemCache.c)
 *     MiGetPageTablesForLargeMap @ 0x14018CE14 (MiGetPageTablesForLargeMap.c)
 *     MiReserveDriverPtes @ 0x140711174 (MiReserveDriverPtes.c)
 *     MiInitializeSystemPtes @ 0x1409EE400 (MiInitializeSystemPtes.c)
 *     MiMapBBTMemory @ 0x140A22F74 (MiMapBBTMemory.c)
 * Callees:
 *     MiObtainDynamicVa @ 0x1400AAFA4 (MiObtainDynamicVa.c)
 *     MiSystemVaToDynamicBitmap @ 0x1400ACF94 (MiSystemVaToDynamicBitmap.c)
 */

__int64 __fastcall MiObtainSystemVa(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // edx
  unsigned int v5; // r9d

  v3 = MiSystemVaToDynamicBitmap((unsigned int)a2, a2, a3, a1);
  return MiObtainDynamicVa(v3, v5, v4);
}
