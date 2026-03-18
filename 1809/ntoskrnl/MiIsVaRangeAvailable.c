/*
 * XREFs of MiIsVaRangeAvailable @ 0x1405F49F0
 * Callers:
 *     MiMapViewOfDataSection @ 0x1405F0BB0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405F1600 (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x1405F3660 (MiMapViewOfImageSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140695B44 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407544C0 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x140859178 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiCheckForConflictingVadExistence @ 0x1400884E8 (MiCheckForConflictingVadExistence.c)
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
  return (a2 >= 0x10000 || *(_QWORD *)(a1 + 1808))
      && a2 >= a4
      && v5 <= a5
      && v5 > a2
      && !MiCheckForConflictingVadExistence();
}
