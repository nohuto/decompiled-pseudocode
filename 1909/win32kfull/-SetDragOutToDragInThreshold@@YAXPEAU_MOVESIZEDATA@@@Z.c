/*
 * XREFs of ?SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FB2C8
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z @ 0x1C01FA304 (-HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01FEEBC (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDragOutToDragInThreshold(struct _MOVESIZEDATA *a1)
{
  if ( ((*((_DWORD *)a1 + 49) >> 15) & 7u) - 2 <= 1 )
    *((_DWORD *)a1 + 49) ^= (*((_DWORD *)a1 + 49) ^ (((*((_DWORD *)a1 + 49) >> 15) - 2) << 15)) & 0x38000;
}
