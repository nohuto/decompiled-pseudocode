/*
 * XREFs of ?SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FB504
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C01FA408 (-HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DI.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01FF16C (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDragInToDragOutThreshold(struct _MOVESIZEDATA *a1)
{
  int v1; // edx

  v1 = *((_DWORD *)a1 + 49);
  if ( (v1 & 0x30000) == 0 )
    *((_DWORD *)a1 + 49) = v1 ^ (v1 ^ (v1 + 0x10000)) & 0x38000;
}
