/*
 * XREFs of ?IsProperRectForArrangement@@YAHQEBUtagRECT@@0W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01E5280
 * Callers:
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01E8650 (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 * Callees:
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C01E4A58 (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 */

__int64 __fastcall IsProperRectForArrangement(const struct tagRECT *a1, const struct tagRECT *a2, int a3)
{
  unsigned int v4; // ebx
  char OverlapCoordinatesForArrangement; // dl
  int v6; // ecx
  int v7; // r8d
  int v8; // edi
  bool v9; // zf

  v4 = 0;
  OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(a1, a2, 1);
  v6 = 55553;
  if ( (OverlapCoordinatesForArrangement & 3) != 3 )
    v6 = 0;
  if ( (OverlapCoordinatesForArrangement & 9) == 9 )
    v6 = 55553;
  v7 = v6 | 0xD902;
  if ( (OverlapCoordinatesForArrangement & 6) != 6 )
    v7 = v6;
  if ( (OverlapCoordinatesForArrangement & 0xC) == 0xC )
    v7 |= 0xD902u;
  v8 = a3 - 1;
  if ( !v8 )
  {
    v9 = v7 == 55553;
    goto LABEL_13;
  }
  if ( v8 == 1 )
  {
    v9 = v7 == 55554;
LABEL_13:
    LOBYTE(v4) = v9;
  }
  return v4;
}
