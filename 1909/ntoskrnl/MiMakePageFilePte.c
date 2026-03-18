/*
 * XREFs of MiMakePageFilePte @ 0x14014423C
 * Callers:
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x1406F84F4 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakePageFilePte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 32);
}
