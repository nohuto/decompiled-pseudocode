/*
 * XREFs of MmMapLockedRestartPages @ 0x1408873F0
 * Callers:
 *     MmMapLockedRestartPagesNoAlignment @ 0x1402BD200 (MmMapLockedRestartPagesNoAlignment.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiMapMdlCommon @ 0x140198F04 (MiMapMdlCommon.c)
 *     MiReserveDriverPtes @ 0x140712F54 (MiReserveDriverPtes.c)
 */

__int64 __fastcall MmMapLockedRestartPages(_DWORD *a1, __int64 a2, int a3)
{
  int v3; // esi
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v6; // rdx
  int v7; // r9d

  v3 = a2;
  if ( (a3 & 0xBFFFFFFF) != 0
    || !MiReserveDriverPtes((((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12, a2, 0) )
  {
    return 0LL;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  return MiMapMdlCommon((__int64)a1, v6, (__int64)AnyMultiplexedVm, v7, v3);
}
