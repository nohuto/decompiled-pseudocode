/*
 * XREFs of ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01BF748
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00391F4 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C001D104 (GetMonitorWorkRectForWindow.c)
 *     _MonitorFromRect @ 0x1C007A8E0 (_MonitorFromRect.c)
 *     GetMaxTrackSizeForWindow @ 0x1C007AAB4 (GetMaxTrackSizeForWindow.c)
 *     ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C00CF9F8 (-GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z.c)
 *     RECTFromSIZERECT @ 0x1C0107194 (RECTFromSIZERECT.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
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
  __int16 v18; // [rsp+20h] [rbp-20h] BYREF
  __int16 v19; // [rsp+22h] [rbp-1Eh]
  __int16 v20; // [rsp+24h] [rbp-1Ch]
  __int16 v21; // [rsp+26h] [rbp-1Ah]
  struct tagRECT v22; // [rsp+28h] [rbp-18h] BYREF

  if ( GetWindowExtendedMargin(a1, (struct FRAME_MARGIN *)&v18) )
  {
    RECTFromSIZERECT(&v22, a2);
    v4 = MonitorFromRect(&v22, 1u, *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL));
    if ( v4 )
    {
      MonitorWorkRectForWindow = (struct tagRECT *)GetMonitorWorkRectForWindow(&v22, v4, a1);
      v6 = *a2;
      v22 = *MonitorWorkRectForWindow;
      if ( v22.left > v6
        || (v7 = a2[2], v22.right < v7 + v6)
        || (v8 = a2[1], v22.top > v8)
        || (v9 = a2[3], v10 = HIDWORD(*(_QWORD *)&v22.right), v22.bottom < v9 + v8) )
      {
        if ( v22.top == a2[1] )
        {
          if ( (v15 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL), (v15 & 3) == 3)
            || (v15 & 1) != 0 && v6 + v18 == v22.left
            || (v15 & 2) != 0 && v6 + a2[2] - v19 == v22.right )
          {
            MaxTrackSizeForWindow = GetMaxTrackSizeForWindow((__int64)a1);
            v17 = a2[3];
            v8 = a2[1];
            if ( v17 - v8 <= MaxTrackSizeForWindow.cy && v22.bottom == v17 + v8 )
            {
              v13 = v20;
              v14 = v17 + v20 + v21;
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
          v13 = v20;
          v14 = v9 + v20 + v21;
          goto LABEL_26;
        }
        if ( (v11 & 1) != 0 && v22.left == v6 )
        {
          v12 = v18;
LABEL_14:
          a2[2] = v7 + 2 * v12;
          *a2 = v6 - v12;
          goto LABEL_15;
        }
        if ( (v11 & 2) != 0 && v22.right == v7 + v6 )
        {
          v12 = v19;
          goto LABEL_14;
        }
      }
    }
  }
}
