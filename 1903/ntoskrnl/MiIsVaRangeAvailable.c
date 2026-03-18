/*
 * XREFs of MiIsVaRangeAvailable @ 0x1405EB1EC
 * Callers:
 *     MiMapViewOfImageSection @ 0x1405EA270 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x140607B60 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x140609300 (MiMapViewOfDataSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140711D38 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x14077A454 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x14089304C (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiCheckForConflictingVadExistence @ 0x14001C8AC (MiCheckForConflictingVadExistence.c)
 */

_BOOL8 __fastcall MiIsVaRangeAvailable(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // r8

  v5 = a2 + a3 - 1;
  return (a2 >= 0x10000 || *(_QWORD *)(a1 + 1856))
      && a2 >= a4
      && v5 <= a5
      && v5 > a2
      && !MiCheckForConflictingVadExistence();
}
