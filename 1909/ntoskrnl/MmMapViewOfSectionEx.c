/*
 * XREFs of MmMapViewOfSectionEx @ 0x1400E5CE4
 * Callers:
 *     PspMapSystemDll @ 0x14067E6D8 (PspMapSystemDll.c)
 *     MiMapCfgBitMapSection @ 0x1406DF860 (MiMapCfgBitMapSection.c)
 * Callees:
 *     MiMapViewOfSectionExCommon @ 0x14067E25C (MiMapViewOfSectionExCommon.c)
 */

__int64 __fastcall MmMapViewOfSectionEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        __int64 a11)
{
  char v12; // [rsp+60h] [rbp-18h]

  v12 = 0;
  return MiMapViewOfSectionExCommon(a1, a2, 1LL, a3, a4, a5, a6, a7, a8, 1, a10, a11, v12, 0);
}
