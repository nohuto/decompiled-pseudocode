/*
 * XREFs of MiObtainSystemVa @ 0x1400F6964
 * Callers:
 *     MmAllocatePoolMemory @ 0x140099140 (MmAllocatePoolMemory.c)
 *     MiExpandSystemCache @ 0x1400F61CC (MiExpandSystemCache.c)
 *     MiExpandPtes @ 0x1400F6414 (MiExpandPtes.c)
 *     MiGetPageTablesForLargeMap @ 0x140183724 (MiGetPageTablesForLargeMap.c)
 *     MiExpandSpecialPool @ 0x1402AC45C (MiExpandSpecialPool.c)
 *     MiReserveDriverPtes @ 0x1406838AC (MiReserveDriverPtes.c)
 *     MiInitializeSystemPtes @ 0x1409B68BC (MiInitializeSystemPtes.c)
 *     MiMapBBTMemory @ 0x1409BA008 (MiMapBBTMemory.c)
 * Callees:
 *     MiObtainDynamicVa @ 0x1400F698C (MiObtainDynamicVa.c)
 *     MiSystemVaToDynamicBitmap @ 0x1400F7200 (MiSystemVaToDynamicBitmap.c)
 */

__int64 __fastcall MiObtainSystemVa(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  unsigned int v4; // r9d

  v2 = MiSystemVaToDynamicBitmap(a2);
  return MiObtainDynamicVa(v2, v4, v3);
}
