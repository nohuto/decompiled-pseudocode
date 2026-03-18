/*
 * XREFs of MiLegitimatePageForDriversToMap @ 0x140156E60
 * Callers:
 *     MiSetProbePagesAhead @ 0x1400F0A70 (MiSetProbePagesAhead.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1401986D0 (MmMapLockedPagesWithReservedMapping.c)
 *     MmRotatePhysicalView @ 0x1406BFCA0 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140711D38 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiLegitimatePageForDriversToMap(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int64 v2; // rdx
  char v4; // dl

  v1 = *(_QWORD *)(a1 + 40);
  if ( (v1 & 0x200000000000000LL) != 0 )
    return 0LL;
  v2 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
  if ( v2 < 0xFFFFF68000000000uLL )
    return 0LL;
  if ( v2 > 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  if ( (v1 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
    return 0LL;
  v4 = *(_BYTE *)(a1 + 34);
  if ( (v4 & 0x20) != 0 && (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 && *(_WORD *)(a1 + 32) )
    return 0LL;
  if ( (v4 & 8) != 0 || ((*(_QWORD *)a1 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) == 0xFFFF800000000030uLL )
    return 0LL;
  else
    return 3221225496LL;
}
