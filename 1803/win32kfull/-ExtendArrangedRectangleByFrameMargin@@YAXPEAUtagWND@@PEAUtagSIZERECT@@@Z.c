/*
 * XREFs of ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C019E220
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00274E8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0035A78 (GetMonitorWorkRectForWindow.c)
 *     GetWindowExtendedMargin @ 0x1C0059034 (GetWindowExtendedMargin.c)
 *     _MonitorFromRect @ 0x1C0072BA0 (_MonitorFromRect.c)
 *     GetMaxTrackSizeForWindow @ 0x1C0073494 (GetMaxTrackSizeForWindow.c)
 *     RECTFromSIZERECT @ 0x1C00ECFCC (RECTFromSIZERECT.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall ExtendArrangedRectangleByFrameMargin(struct tagWND *a1, LONG *a2)
{
  __int64 v4; // r9
  __int64 v5; // rax
  struct tagRECT *MonitorWorkRectForWindow; // rax
  LONG v7; // ecx
  LONG v8; // r10d
  LONG v9; // edx
  LONG v10; // r15d
  __int64 v11; // r11
  char v12; // di
  int v13; // eax
  int v14; // ecx
  LONG v15; // eax
  char v16; // dl
  struct tagSIZE MaxTrackSizeForWindow; // rax
  LONG v18; // r8d
  __int16 v19; // [rsp+20h] [rbp-20h] BYREF
  __int16 v20; // [rsp+22h] [rbp-1Eh]
  __int16 v21; // [rsp+24h] [rbp-1Ch]
  __int16 v22; // [rsp+26h] [rbp-1Ah]
  struct tagRECT v23; // [rsp+28h] [rbp-18h] BYREF

  if ( (unsigned int)GetWindowExtendedMargin((__int64)a1, (__int64)&v19) )
  {
    RECTFromSIZERECT(&v23, a2);
    v5 = MonitorFromRect(&v23, 1LL, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), v4);
    if ( v5 )
    {
      MonitorWorkRectForWindow = (struct tagRECT *)GetMonitorWorkRectForWindow(&v23, v5, a1);
      v7 = *a2;
      v23 = *MonitorWorkRectForWindow;
      if ( v23.left > v7
        || (v8 = a2[2], v23.right < v8 + v7)
        || (v9 = a2[1], v23.top > v9)
        || (v10 = a2[3], v11 = HIDWORD(*(_QWORD *)&v23.right), v23.bottom < v10 + v9) )
      {
        if ( v23.top == a2[1] )
        {
          if ( (v16 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL), (v16 & 3) == 3)
            || (v16 & 1) != 0 && v7 + v19 == v23.left
            || (v16 & 2) != 0 && v7 + a2[2] - v20 == v23.right )
          {
            MaxTrackSizeForWindow = GetMaxTrackSizeForWindow((__int64)a1);
            v18 = a2[3];
            v9 = a2[1];
            if ( v18 - v9 <= MaxTrackSizeForWindow.cy && v23.bottom == v18 + v9 )
            {
              v14 = v21;
              v15 = v18 + v21 + v22;
LABEL_26:
              a2[3] = v15;
              a2[1] = v9 - v14;
            }
          }
        }
      }
      else
      {
        v12 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL);
        if ( (v12 & 3) == 3 )
        {
LABEL_15:
          if ( (_DWORD)v11 != v10 + v9 )
            return;
          v14 = v21;
          v15 = v10 + v21 + v22;
          goto LABEL_26;
        }
        if ( (v12 & 1) != 0 && v23.left == v7 )
        {
          v13 = v19;
LABEL_14:
          a2[2] = v8 + 2 * v13;
          *a2 = v7 - v13;
          goto LABEL_15;
        }
        if ( (v12 & 2) != 0 && v23.right == v8 + v7 )
        {
          v13 = v20;
          goto LABEL_14;
        }
      }
    }
  }
}
