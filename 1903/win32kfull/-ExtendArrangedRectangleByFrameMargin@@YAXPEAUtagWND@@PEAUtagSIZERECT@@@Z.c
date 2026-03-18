/*
 * XREFs of ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01D3468
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00CDEA8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x1C0091E40 (_MonitorFromRect.c)
 *     GetMaxTrackSizeForWindow @ 0x1C0093AB4 (GetMaxTrackSizeForWindow.c)
 *     GetMonitorWorkRectForWindow @ 0x1C00970A8 (GetMonitorWorkRectForWindow.c)
 *     RECTFromSIZERECT @ 0x1C010BBB8 (RECTFromSIZERECT.c)
 *     ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C0116FF0 (-GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall ExtendArrangedRectangleByFrameMargin(struct tagWND *a1, LONG *a2)
{
  __int64 v4; // rax
  struct tagRECT *MonitorWorkRectForWindow; // rax
  LONG v6; // ecx
  LONG v7; // r10d
  LONG v8; // edx
  LONG v9; // r15d
  __int64 v10; // r11
  char v11; // di
  int v12; // eax
  int v13; // ecx
  LONG v14; // eax
  char v15; // dl
  struct tagSIZE MaxTrackSizeForWindow; // rax
  LONG v17; // r8d
  __int64 v18; // [rsp+20h] [rbp-20h] BYREF
  struct tagRECT v19; // [rsp+28h] [rbp-18h] BYREF

  v18 = 0LL;
  if ( GetWindowExtendedMargin(a1, (struct FRAME_MARGIN *)&v18) )
  {
    *(_QWORD *)&v19.left = 0LL;
    *(_QWORD *)&v19.right = 0LL;
    RECTFromSIZERECT(&v19, a2);
    v4 = MonitorFromRect(&v19, 1u, *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL));
    if ( v4 )
    {
      MonitorWorkRectForWindow = (struct tagRECT *)GetMonitorWorkRectForWindow(&v19, v4, a1);
      v6 = *a2;
      v19 = *MonitorWorkRectForWindow;
      if ( v19.left > v6
        || (v7 = a2[2], v19.right < v7 + v6)
        || (v8 = a2[1], v19.top > v8)
        || (v9 = a2[3], v10 = HIDWORD(*(_QWORD *)&v19.right), v19.bottom < v9 + v8) )
      {
        if ( v19.top == a2[1] )
        {
          if ( (v15 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL), (v15 & 3) == 3)
            || (v15 & 1) != 0 && v6 + (__int16)v18 == v19.left
            || (v15 & 2) != 0 && v6 + a2[2] - SWORD1(v18) == v19.right )
          {
            MaxTrackSizeForWindow = GetMaxTrackSizeForWindow((__int64)a1);
            v17 = a2[3];
            v8 = a2[1];
            if ( v17 - v8 <= MaxTrackSizeForWindow.cy && v19.bottom == v17 + v8 )
            {
              v13 = SWORD2(v18);
              v14 = v17 + SWORD2(v18) + SHIWORD(v18);
LABEL_26:
              a2[3] = v14;
              a2[1] = v8 - v13;
            }
          }
        }
      }
      else
      {
        v11 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL);
        if ( (v11 & 3) == 3 )
        {
LABEL_15:
          if ( (_DWORD)v10 != v9 + v8 )
            return;
          v13 = SWORD2(v18);
          v14 = v9 + SWORD2(v18) + SHIWORD(v18);
          goto LABEL_26;
        }
        if ( (v11 & 1) != 0 && v19.left == v6 )
        {
          v12 = (__int16)v18;
LABEL_14:
          a2[2] = v7 + 2 * v12;
          *a2 = v6 - v12;
          goto LABEL_15;
        }
        if ( (v11 & 2) != 0 && v19.right == v7 + v6 )
        {
          v12 = SWORD1(v18);
          goto LABEL_14;
        }
      }
    }
  }
}
