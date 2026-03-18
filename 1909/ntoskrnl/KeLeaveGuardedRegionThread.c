/*
 * XREFs of KeLeaveGuardedRegionThread @ 0x140083CD4
 * Callers:
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall KeLeaveGuardedRegionThread(__int64 a1)
{
  return KiLeaveGuardedRegionUnsafe(a1);
}
