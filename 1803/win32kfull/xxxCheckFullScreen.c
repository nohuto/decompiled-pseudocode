/*
 * XREFs of xxxCheckFullScreen @ 0x1C0035620
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00274E8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 * Callees:
 *     GetWindowBordersWithDpiAwareness @ 0x1C0022390 (GetWindowBordersWithDpiAwareness.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z @ 0x1C0035A40 (-IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0035A78 (GetMonitorWorkRectForWindow.c)
 *     xxxRemoveFullScreen @ 0x1C0035B8C (xxxRemoveFullScreen.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetWindowDpiLastNotify @ 0x1C00724A0 (GetWindowDpiLastNotify.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0072A9C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C0072BA0 (_MonitorFromRect.c)
 *     GetMonitorRectForWindow @ 0x1C0073764 (GetMonitorRectForWindow.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     RECTFromSIZERECT @ 0x1C00ECFCC (RECTFromSIZERECT.c)
 *     xxxAddFullScreen @ 0x1C0103394 (xxxAddFullScreen.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ExtendRectByWindowMargin @ 0x1C01BF574 (ExtendRectByWindowMargin.c)
 *     GetScreenRectForWindow @ 0x1C022B0E8 (GetScreenRectForWindow.c)
 */

__int64 __fastcall xxxCheckFullScreen(struct tagWND *a1, struct tagSIZERECT *a2)
{
  unsigned int v4; // r14d
  unsigned int WindowDpiLastNotify; // r13d
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 ThreadWin32Thread; // rax
  struct tagRECT v12; // xmm6
  BOOL v13; // r12d
  struct tagRECT v14; // xmm0
  __int64 v15; // rax
  struct tagMONITOR *v16; // rax
  __m128i *MonitorRectForWindow; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // xmm0_8
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  int DpiDependentMetric; // edx
  __int64 v26; // r8
  __int64 left; // rcx
  __int64 top; // rdx
  unsigned int v29; // eax
  int v30; // eax
  int v31; // eax
  int WindowBordersWithDpiAwareness; // eax
  LONG bottom; // edx
  int v34; // eax
  struct tagRECT v35; // [rsp+28h] [rbp-E0h] BYREF
  struct tagRECT v36; // [rsp+38h] [rbp-D0h] BYREF
  struct tagRECT v37; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-B0h]
  struct tagMONITOR *v39; // [rsp+60h] [rbp-A8h]
  __int64 v40; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+70h] [rbp-98h]
  _QWORD v42[4]; // [rsp+78h] [rbp-90h] BYREF
  struct tagRECT v43; // [rsp+98h] [rbp-70h] BYREF
  char v44[16]; // [rsp+A8h] [rbp-60h] BYREF
  char v45[16]; // [rsp+B8h] [rbp-50h] BYREF
  char v46[16]; // [rsp+C8h] [rbp-40h] BYREF
  char v47[16]; // [rsp+D8h] [rbp-30h] BYREF
  struct tagRECT v48; // [rsp+E8h] [rbp-20h] BYREF

  v4 = 0;
  WindowDpiLastNotify = 96;
  v7 = *(_QWORD *)(GetDispInfo() + 96);
  v38 = v7;
  if ( *(_DWORD *)*gpDispInfo > 1u )
  {
    *(_OWORD *)&v42[1] = *(_OWORD *)GetScreenRectForWindow(v44, a1);
    if ( (unsigned int)IsMaxedRect((struct tagRECT *)&v42[1], a2) )
      return 0LL;
    RECTFromSIZERECT(&v48, v9);
    v8 = MonitorFromRect(&v48);
  }
  else
  {
    v8 = v7;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
  v40 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v40;
  v41 = v8;
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  v12 = *(struct tagRECT *)GetMonitorWorkRectForWindow(v45, v8, a1);
  v36 = v12;
  if ( !(unsigned int)IsMaxedRect(&v36, a2) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
      SetOrClrWF(0LL, a1, 832LL, 1LL);
    v29 = xxxRemoveFullScreen(a1);
    goto LABEL_40;
  }
  v13 = v8 == v7;
  v14 = *(struct tagRECT *)GetMonitorRectForWindow(v46, v8, a1);
  v15 = *((_QWORD *)a1 + 5);
  v35 = v14;
  if ( (*(_BYTE *)(v15 + 31) & 1) != 0 )
  {
    SetOrClrWF(1LL, a1, 832LL, 1LL);
    if ( *(_DWORD *)*gpDispInfo > 1u )
    {
      v16 = _MonitorFromWindowInternal(a1, 1u, 1);
      v39 = v16;
      if ( v16 != (struct tagMONITOR *)v8 && v8 == v38 )
      {
        MonitorRectForWindow = (__m128i *)GetMonitorRectForWindow(v47, v16, a1);
        v18 = MonitorRectForWindow->m128i_i64[0];
        v19 = _mm_srli_si128(*MonitorRectForWindow, 8).m128i_u64[0];
        *(_DWORD *)a2 += MonitorRectForWindow->m128i_i64[0];
        *((_DWORD *)a2 + 2) += v35.left + v19 - v35.right - v18;
        *((_DWORD *)a2 + 1) += HIDWORD(v18);
        v20 = (unsigned int)(v35.top + HIDWORD(v19) - HIDWORD(v18) - v35.bottom);
        *((_DWORD *)a2 + 3) += v20;
        ThreadUnlock1(v18, v20, HIDWORD(v18));
        v13 = 0;
        v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21);
        v40 = *(_QWORD *)(v22 + 408);
        *(_QWORD *)(v22 + 408) = &v40;
        v41 = (__int64)v39;
        _InterlockedIncrement((volatile signed __int32 *)v39 + 2);
        v12 = v36;
      }
    }
  }
  v23 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v23 + 31) & 1) != 0 && (((*(_BYTE *)(v23 + 30) & 0xC0) == 0xC0) & *(_BYTE *)(v23 + 30)) != 0 )
  {
    if ( (*(_DWORD *)(v23 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v23 + 288) & 0xF) != 0
           || (v24 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) == 0
           || (*(_DWORD *)(**(_QWORD **)(v24 + 8) + 52LL) & 1) == 0 )
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(2LL, WindowDpiLastNotify);
    if ( *(_DWORD *)a2 + DpiDependentMetric > v35.right
      || *((_DWORD *)a2 + 2) + *(_DWORD *)a2 < v35.right
      || (left = *((unsigned int *)a2 + 1), (int)left + DpiDependentMetric > v35.top)
      || (top = (unsigned int)(left + *((_DWORD *)a2 + 3)), (int)top < v35.bottom) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) != 0 )
        v4 = xxxRemoveFullScreen(a1);
      if ( *((_DWORD *)a1 + 70) )
      {
        v37 = v12;
        v43 = v12;
        ExtendRectByWindowMargin(a1, &v43, &v37);
        left = (unsigned int)v37.left;
        top = (unsigned int)v37.top;
        v30 = v37.right - v37.left;
        *(_DWORD *)a2 = v37.left;
        *((_DWORD *)a2 + 2) = v30;
        v31 = v37.bottom - top;
        *((_DWORD *)a2 + 1) = top;
        *((_DWORD *)a2 + 3) = v31;
      }
      else
      {
        WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness((__int64)a1);
        bottom = v36.bottom;
        *(_DWORD *)a2 = v36.left - WindowBordersWithDpiAwareness;
        *((_DWORD *)a2 + 1) = v36.top - WindowBordersWithDpiAwareness;
        WindowBordersWithDpiAwareness *= 2;
        left = (unsigned int)(WindowBordersWithDpiAwareness - v36.top);
        top = (unsigned int)(left + bottom);
        *((_DWORD *)a2 + 2) = v36.right + WindowBordersWithDpiAwareness - v36.left;
        if ( v13 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
        {
          v34 = *((_DWORD *)a2 + 3);
          if ( (int)top >= v34 )
            top = (unsigned int)v34;
        }
        *((_DWORD *)a2 + 3) = top;
      }
      goto LABEL_41;
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) == 0 )
      goto LABEL_25;
  }
  else if ( (unsigned int)IsMaxedRect(&v35, a2) )
  {
LABEL_25:
    v29 = xxxAddFullScreen(a1);
LABEL_40:
    v4 = v29;
  }
LABEL_41:
  ThreadUnlock1(left, top, v26);
  return v4;
}
