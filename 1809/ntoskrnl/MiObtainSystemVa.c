/*
 * XREFs of MiObtainSystemVa @ 0x1400F6944
 * Callers:
 *     MmAllocatePoolMemory @ 0x140099140 (MmAllocatePoolMemory.c)
 *     MiExpandSystemCache @ 0x1400F61AC (MiExpandSystemCache.c)
 *     MiExpandPtes @ 0x1400F63F4 (MiExpandPtes.c)
 *     MiGetPageTablesForLargeMap @ 0x140183704 (MiGetPageTablesForLargeMap.c)
 *     MiExpandSpecialPool @ 0x1402AC35C (MiExpandSpecialPool.c)
 *     MiReserveDriverPtes @ 0x1406838CC (MiReserveDriverPtes.c)
 *     MiInitializeSystemPtes @ 0x1409B68BC (MiInitializeSystemPtes.c)
 *     MiMapBBTMemory @ 0x1409BA008 (MiMapBBTMemory.c)
 * Callees:
 *     MiObtainDynamicVa @ 0x1400F696C (MiObtainDynamicVa.c)
 *     MiSystemVaToDynamicBitmap @ 0x1400F71E0 (MiSystemVaToDynamicBitmap.c)
 */

__int64 __fastcall MiObtainSystemVa(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  unsigned int v4; // r9d

  v2 = MiSystemVaToDynamicBitmap(a2);
  return MiObtainDynamicVa(v2, v4, v3);
}
