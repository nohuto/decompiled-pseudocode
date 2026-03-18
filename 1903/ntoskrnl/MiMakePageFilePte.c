/*
 * XREFs of MiMakePageFilePte @ 0x140143CFC
 * Callers:
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x1406F6734 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakePageFilePte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 32);
}
