/*
 * XREFs of ?SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C01C1760
 * Callers:
 *     ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C01C1598 (-SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     ?ComputeSizeOutcome@@YA?AW4_MOUSE_SIZE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01C03F8 (-ComputeSizeOutcome@@YA-AW4_MOUSE_SIZE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@.c)
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C01C0908 (-HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DI.c)
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z @ 0x1C01C0AC0 (-HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C01C1464 (-SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01C1C0C (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 */

void __fastcall SnapSizeRect(
        struct _MOVESIZEDATA *a1,
        struct tagCHECKPOINT *a2,
        struct tagMONITOR *a3,
        unsigned int *a4)
{
  int v8; // eax
  int v9; // eax
  int v10; // eax
  struct tagMONITOR *v11; // rdx
  struct tagMONITOR *v12; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  v8 = ComputeSizeOutcome(*(struct tagPOINT *)((char *)a1 + 300), (__int64)a1, &v12, &v13) - 2;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
          HandleNoTargetToDockTargetSizing((__int64)a1, v12, (__int64)a3, v13, a4);
      }
      else
      {
        HandleSizingAwayFromDockTarget(a1, a2, a4);
      }
    }
    else
    {
      v11 = v12;
      *((_DWORD *)a1 + 60) = v13;
      SetCurrentHitTargetMonitor(a1, v11, 1);
    }
  }
  else
  {
    VerticalSizeRectFromHitTarget(a1, v12, v13, a3, *((_DWORD *)a1 + 75));
  }
}
