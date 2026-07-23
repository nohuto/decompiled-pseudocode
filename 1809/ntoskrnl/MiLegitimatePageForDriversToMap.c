/*
 * XREFs of MiLegitimatePageForDriversToMap @ 0x1400298DC
 * Callers:
 *     MiSetProbePagesAhead @ 0x140029710 (MiSetProbePagesAhead.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x14018EA60 (MmMapLockedPagesWithReservedMapping.c)
 *     MmRotatePhysicalView @ 0x14066CAD0 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140696CE4 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiLegitimatePageForDriversToMap(__int64 a1)
{
  unsigned __int64 v1; // rdx
  char v3; // dl

  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
    return 0LL;
  v1 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
  if ( v1 < 0xFFFFF68000000000uLL )
    return 0LL;
  if ( v1 > 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  v3 = *(_BYTE *)(a1 + 34);
  if ( (v3 & 0x20) != 0 && (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 && *(_WORD *)(a1 + 32) )
    return 0LL;
  if ( (v3 & 8) != 0 || ((*(_QWORD *)a1 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) == 0xFFFF800000000030uLL )
    return 0LL;
  else
    return 3221225496LL;
}
