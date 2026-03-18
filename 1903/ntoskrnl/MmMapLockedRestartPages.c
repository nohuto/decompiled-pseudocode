/*
 * XREFs of MmMapLockedRestartPages @ 0x140887BC4
 * Callers:
 *     MmMapLockedRestartPagesNoAlignment @ 0x1402BD4A0 (MmMapLockedRestartPagesNoAlignment.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiMapMdlCommon @ 0x1401988A4 (MiMapMdlCommon.c)
 *     MiReserveDriverPtes @ 0x140711174 (MiReserveDriverPtes.c)
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
