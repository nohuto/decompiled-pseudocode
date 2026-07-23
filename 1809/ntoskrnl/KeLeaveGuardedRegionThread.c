/*
 * XREFs of KeLeaveGuardedRegionThread @ 0x1400167F4
 * Callers:
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall KeLeaveGuardedRegionThread(__int64 a1)
{
  return KiLeaveGuardedRegionUnsafe(a1);
}
