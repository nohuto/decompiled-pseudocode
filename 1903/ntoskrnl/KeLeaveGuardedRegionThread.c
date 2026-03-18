/*
 * XREFs of KeLeaveGuardedRegionThread @ 0x1400838D4
 * Callers:
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall KeLeaveGuardedRegionThread(__int64 a1)
{
  return KiLeaveGuardedRegionUnsafe(a1);
}
