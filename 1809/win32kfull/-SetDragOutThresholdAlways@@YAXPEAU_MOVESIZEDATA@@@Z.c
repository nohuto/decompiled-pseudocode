/*
 * XREFs of ?SetDragOutThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01E5C50
 * Callers:
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01E9754 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDragOutThresholdAlways(struct _MOVESIZEDATA *a1)
{
  unsigned int v1; // edx
  unsigned int v2; // eax
  int v3; // eax

  v1 = *((_DWORD *)a1 + 49);
  v2 = (v1 >> 15) & 7;
  if ( v2 < 2 )
  {
    v3 = v1 + 0x10000;
  }
  else
  {
    if ( v2 - 4 > 1 )
      return;
    v3 = ((*((_DWORD *)a1 + 49) >> 15) - 2) << 15;
  }
  *((_DWORD *)a1 + 49) = v1 ^ (v1 ^ v3) & 0x38000;
}
