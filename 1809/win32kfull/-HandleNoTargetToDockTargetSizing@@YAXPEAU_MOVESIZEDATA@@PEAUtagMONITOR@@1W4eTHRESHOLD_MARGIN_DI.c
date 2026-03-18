/*
 * XREFs of ?HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C01E4B64
 * Callers:
 *     ?SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C01E5EF4 (-SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     ?IsSizingLEFT@@YAEH@Z @ 0x1C01E5300 (-IsSizingLEFT@@YAEH@Z.c)
 *     ?IsSizingRIGHT@@YAEH@Z @ 0x1C01E531C (-IsSizingRIGHT@@YAEH@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01E5338 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C01E5BA4 (-SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01E5C24 (-SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01E63BC (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 */

void __fastcall HandleNoTargetToDockTargetSizing(
        __int64 a1,
        struct tagMONITOR *a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  int v5; // r14d
  unsigned int v9; // eax
  int v10; // edx
  int v11; // ecx
  __int64 v12; // r8
  unsigned int v13; // r10d
  int v14; // ecx
  int v15; // esi
  int v16; // eax
  __int128 v17; // xmm6
  struct _MOVESIZEDATA *v18; // rcx

  v5 = 0;
  if ( a4 == 3 )
  {
    v9 = *(_DWORD *)(a1 + 176) - 3;
  }
  else
  {
    if ( a4 )
      goto LABEL_6;
    v9 = *(_DWORD *)(a1 + 176) - 6;
  }
  if ( v9 <= 2 )
  {
LABEL_12:
    *(_QWORD *)(a1 + 232) = a2;
    return;
  }
LABEL_6:
  if ( IsSizingLEFT(*(_DWORD *)(a1 + 176)) && a4 == 1 || IsSizingRIGHT(v11) && a4 == v13 )
  {
    v14 = *(_DWORD *)(a1 + 196);
    if ( (v14 & 0x6000) == 0x6000 && (v14 & 0x300) == 0x300 )
      goto LABEL_12;
  }
  v15 = 0;
  if ( (v10 - 3 <= v13 || v10 - 6 <= v13) && (a4 == 3 || !a4) && ((unsigned __int8)v13 & *(_BYTE *)(a1 + 280)) != 0 )
    v15 = 1;
  v16 = *(_DWORD *)(a1 + 196);
  v17 = *(_OWORD *)(a1 + 40);
  if ( (v16 & 0x4000000) != 0 && !v15 && (v16 & 0x2000000) == 0 )
  {
    v5 = 1;
    *(_DWORD *)(a1 + 196) = v16 | 0x2000000;
  }
  if ( (unsigned int)VerticalSizeRectFromHitTarget(a1, a2, a4, v12, *(_DWORD *)(a1 + 300)) )
  {
    if ( v5 && a5 )
      *a5 |= 8u;
    if ( !a4 || a4 == 3 )
    {
      if ( !v15 )
      {
        *(_DWORD *)(a1 + 196) |= 0x300u;
        *(_DWORD *)(a1 + 280) &= ~2u;
        MakeArrangedStateObservable((const struct _MOVESIZEDATA *const)a1);
      }
      SetDragInToDragOutThreshold((struct _MOVESIZEDATA *)a1);
      *(_DWORD *)(a1 + 240) = a4;
      SetCurrentHitTargetMonitor(v18, a2, 1);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 196) &= ~0x2000000u;
    *(_QWORD *)(a1 + 232) = a2;
    *(_DWORD *)(a1 + 240) = a4;
    *(_OWORD *)(a1 + 40) = v17;
  }
}
