/*
 * XREFs of MiMakePageFilePte @ 0x1402BF7E4
 * Callers:
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x14085FE68 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakePageFilePte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 32);
}
