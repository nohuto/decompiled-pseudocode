/*
 * XREFs of MmMapLockedRestartPages @ 0x14084C6A0
 * Callers:
 *     <none>
 * Callees:
 *     MiMapMdlCommon @ 0x14018EAD4 (MiMapMdlCommon.c)
 *     MiReserveDriverPtes @ 0x1406838CC (MiReserveDriverPtes.c)
 */

__int64 __fastcall MmMapLockedRestartPages(_DWORD *a1, int a2, int a3)
{
  unsigned __int64 v6; // rax
  int v7; // r8d

  if ( (a3 & 0xBFFFFFFF) != 0 )
    return 0LL;
  v6 = MiReserveDriverPtes(0, (((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12);
  if ( !v6 )
    return 0LL;
  if ( (MiFlags & 0x10000) != 0 || (v7 = 6, (a3 & 0x40000000) != 0) )
    v7 = 4;
  return MiMapMdlCommon((__int64)a1, v6, v7, a2);
}
