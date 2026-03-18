/*
 * XREFs of ?DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FA10C
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z @ 0x1C01FA5B4 (-HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01FF16C (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DisableTemporayMetricsOverrides(struct _MOVESIZEDATA *a1)
{
  int v1; // eax

  v1 = *((_DWORD *)a1 + 49);
  if ( (v1 & 0x400000) != 0 )
  {
    v1 &= 0xFFBFFBFF;
    *((_DWORD *)a1 + 49) = v1;
  }
  if ( (v1 & 0x800000) != 0 )
    *((_DWORD *)a1 + 49) = v1 & 0xFF7FF7FF;
}
