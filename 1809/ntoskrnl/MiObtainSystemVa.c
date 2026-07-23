/*
 * XREFs of MiObtainSystemVa @ 0x1400F69E4
 * Callers:
 *     MmAllocatePoolMemory @ 0x140099080 (MmAllocatePoolMemory.c)
 *     MiExpandSystemCache @ 0x1400F624C (MiExpandSystemCache.c)
 *     MiExpandPtes @ 0x1400F6494 (MiExpandPtes.c)
 *     MiGetPageTablesForLargeMap @ 0x140183864 (MiGetPageTablesForLargeMap.c)
 *     MiExpandSpecialPool @ 0x1402AC64C (MiExpandSpecialPool.c)
 *     MiReserveDriverPtes @ 0x140684A6C (MiReserveDriverPtes.c)
 *     MiInitializeSystemPtes @ 0x1409B78BC (MiInitializeSystemPtes.c)
 *     MiMapBBTMemory @ 0x1409BB008 (MiMapBBTMemory.c)
 * Callees:
 *     MiObtainDynamicVa @ 0x1400F6A0C (MiObtainDynamicVa.c)
 *     MiSystemVaToDynamicBitmap @ 0x1400F7280 (MiSystemVaToDynamicBitmap.c)
 */

__int64 __fastcall MiObtainSystemVa(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  unsigned int v4; // r9d

  v2 = MiSystemVaToDynamicBitmap(a2);
  return MiObtainDynamicVa(v2, v4, v3);
}
