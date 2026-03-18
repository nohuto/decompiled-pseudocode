/*
 * XREFs of ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C01FBA54
 * Callers:
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD388 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01FDFBC (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C00970A8 (GetMonitorWorkRectForWindow.c)
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C01FA2FC (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 */

__int64 __fastcall TransformShellProvidedRectangles(
        __int64 a1,
        __int64 a2,
        int a3,
        const struct tagRECT *a4,
        __int64 a5,
        __int64 a6,
        int *a7,
        __int64 a8)
{
  int v8; // edi
  int v10; // esi
  int v12; // ebp
  int v13; // r15d
  char OverlapCoordinatesForArrangement; // r12
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // edx
  __int64 result; // rax
  int v21; // ecx
  int v22; // r8d
  int v23[14]; // [rsp+20h] [rbp-38h] BYREF

  v8 = *(_DWORD *)(a1 + 112);
  v10 = *(_DWORD *)(a1 + 104);
  v12 = *(_DWORD *)(a1 + 116);
  v13 = *(_DWORD *)(a1 + 108);
  OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(
                                       (const struct tagRECT *const)(*(_QWORD *)(a2 + 40) + 44LL),
                                       a4,
                                       0);
  TransformRectBetweenCoordinateSpaces(a7, a4, *(_QWORD *)(a1 + 16), a6);
  if ( a5 && a8 )
    TransformRectBetweenCoordinateSpaces(a8, a5, *(_QWORD *)(a1 + 16), a6);
  *(_OWORD *)v23 = *GetMonitorWorkRectForWindow(v23, a2, *(const struct tagWND **)(a1 + 16));
  IntersectRect(a7, a7, v23);
  if ( a3 == 1 )
  {
    v16 = v23[0];
    v17 = a7[2] - v23[0];
    *a7 = v23[0];
    if ( v17 < v10 )
      a7[2] = v16 + v10;
    if ( v17 >= v8 )
      a7[2] = v16 + v8;
  }
  else
  {
    v18 = v23[2];
    v19 = v23[2] - *a7;
    a7[2] = v23[2];
    if ( v19 < v10 )
      *a7 = v18 - v10;
    if ( v19 >= v8 )
      *a7 = v18 - v8;
  }
  if ( (OverlapCoordinatesForArrangement & 2) != 0 )
    a7[1] = v23[1];
  if ( (OverlapCoordinatesForArrangement & 8) != 0 )
    a7[3] = v23[3];
  result = (unsigned int)a7[3];
  v21 = a7[1];
  v22 = a7[3] - v21;
  if ( v22 < v13 )
  {
    if ( (OverlapCoordinatesForArrangement & 2) != 0 )
    {
      result = (unsigned int)(v21 + v13);
      a7[3] = result;
    }
    else
    {
      v21 = result - v13;
      a7[1] = result - v13;
    }
  }
  if ( v22 >= v12 )
  {
    if ( (OverlapCoordinatesForArrangement & 2) != 0 )
    {
      result = (unsigned int)(v21 + v12);
      a7[3] = result;
    }
    else
    {
      result = (unsigned int)(result - v12);
      a7[1] = result;
    }
  }
  return result;
}
