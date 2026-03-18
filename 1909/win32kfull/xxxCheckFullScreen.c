/*
 * XREFs of xxxCheckFullScreen @ 0x1C0037A28
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006F578 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x1C00147D0 (_MonitorFromRect.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C0032DF0 (GetWindowBordersWithDpiAwareness.c)
 *     GetWindowDpiLastNotify @ 0x1C0033D78 (GetWindowDpiLastNotify.c)
 *     GetMonitorRectForWindow @ 0x1C0036864 (GetMonitorRectForWindow.c)
 *     ?IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z @ 0x1C0037DA0 (-IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0037DD8 (GetMonitorWorkRectForWindow.c)
 *     xxxRemoveFullScreen @ 0x1C0037F30 (xxxRemoveFullScreen.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     RECTFromSIZERECT @ 0x1C00E5E30 (RECTFromSIZERECT.c)
 *     xxxAddFullScreen @ 0x1C0108784 (xxxAddFullScreen.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     ?ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023C394 (-ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 *     GetScreenRectForWindow @ 0x1C02596B0 (GetScreenRectForWindow.c)
 */

__int64 __fastcall xxxCheckFullScreen(struct tagWND *a1, struct tagSIZERECT *a2)
{
  unsigned int v4; // esi
  unsigned int WindowDpiLastNotify; // r14d
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r13
  struct _KTHREAD *CurrentThread; // r12
  __int64 v12; // r15
  __int64 *ThreadWin32Thread; // rax
  struct tagRECT v14; // xmm6
  struct tagRECT *MonitorRectForWindow; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int DpiDependentMetric; // eax
  __int64 top; // rdx
  __int64 v21; // r8
  __int64 left; // rcx
  unsigned int v23; // eax
  int v24; // eax
  int v25; // eax
  int WindowBordersWithDpiAwareness; // eax
  LONG bottom; // edx
  int v28; // eax
  struct tagRECT v29; // [rsp+28h] [rbp-99h] BYREF
  struct tagRECT v30; // [rsp+38h] [rbp-89h] BYREF
  struct tagRECT v31; // [rsp+48h] [rbp-79h] BYREF
  __int64 v32; // [rsp+58h] [rbp-69h]
  __int64 v33; // [rsp+60h] [rbp-61h] BYREF
  __int64 v34; // [rsp+68h] [rbp-59h]
  __int64 v35; // [rsp+70h] [rbp-51h]
  struct tagRECT v36; // [rsp+78h] [rbp-49h] BYREF
  char v37[16]; // [rsp+88h] [rbp-39h] BYREF
  char v38[16]; // [rsp+98h] [rbp-29h] BYREF
  __int128 v39; // [rsp+A8h] [rbp-19h] BYREF
  struct tagRECT v40; // [rsp+B8h] [rbp-9h] BYREF

  v33 = 0LL;
  v34 = 0LL;
  v4 = 0;
  v35 = 0LL;
  *(_QWORD *)&v40.left = 0LL;
  *(_QWORD *)&v40.right = 0LL;
  WindowDpiLastNotify = 96;
  v6 = *(_QWORD *)(GetDispInfo(a1, a2) + 96);
  v32 = v6;
  v8 = gpDispInfo;
  if ( *(_DWORD *)*gpDispInfo > 1u )
  {
    v36 = *(struct tagRECT *)GetScreenRectForWindow(v37, a1);
    if ( (unsigned int)IsMaxedRect(&v36, a2) )
      return 0LL;
    RECTFromSIZERECT(&v40);
    v9 = MonitorFromRect(&v40, 1u, *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL));
  }
  else
  {
    v9 = v6;
  }
  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v6, v7) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
  }
  v33 = *(_QWORD *)(v12 + 408);
  *(_QWORD *)(v12 + 408) = &v33;
  v34 = v9;
  HMLockObject(v9);
  v14 = *(struct tagRECT *)GetMonitorWorkRectForWindow(v38, v9, a1);
  v29 = v14;
  if ( !(unsigned int)IsMaxedRect(&v29, a2) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
      SetOrClrWF(0LL, a1, 832LL, 1LL);
    v23 = xxxRemoveFullScreen(a1);
    goto LABEL_39;
  }
  MonitorRectForWindow = (struct tagRECT *)GetMonitorRectForWindow(&v39, v9, a1);
  v16 = *((_QWORD *)a1 + 5);
  v31 = *MonitorRectForWindow;
  if ( (*(_BYTE *)(v16 + 31) & 1) != 0
    && (SetOrClrWF(1LL, a1, 832LL, 1LL), v17 = *((_QWORD *)a1 + 5), (*(_BYTE *)(v17 + 31) & 1) != 0)
    && (((*(_BYTE *)(v17 + 30) & 0xC0) == 0xC0) & *(_BYTE *)(v17 + 30)) != 0 )
  {
    if ( (*(_DWORD *)(v17 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
    }
    else if ( (*(_DWORD *)(v17 + 288) & 0xF) != 0
           || (v18 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) == 0
           || (*(_DWORD *)(**(_QWORD **)(v18 + 8) + 64LL) & 1) == 0 )
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(2LL, WindowDpiLastNotify);
    v21 = DpiDependentMetric;
    if ( (int)(*(_DWORD *)a2 + DpiDependentMetric) > v31.right
      || (left = (unsigned int)(*((_DWORD *)a2 + 2) + *(_DWORD *)a2), (int)left < v31.right)
      || (top = *((unsigned int *)a2 + 1), (int)(top + DpiDependentMetric) > v31.top)
      || (top = (unsigned int)(*((_DWORD *)a2 + 3) + top), (int)top < v31.bottom) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) != 0 )
        v4 = xxxRemoveFullScreen(a1);
      if ( *((_DWORD *)a1 + 77) )
      {
        v30 = v14;
        ExtendRectByWindowMargin(a1, &v30, &v30);
        left = (unsigned int)v30.left;
        top = (unsigned int)v30.top;
        v24 = v30.right - v30.left;
        *(_DWORD *)a2 = v30.left;
        *((_DWORD *)a2 + 2) = v24;
        v25 = v30.bottom - top;
        *((_DWORD *)a2 + 1) = top;
        *((_DWORD *)a2 + 3) = v25;
      }
      else
      {
        WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness((__int64)a1, top);
        bottom = v29.bottom;
        *(_DWORD *)a2 = v29.left - WindowBordersWithDpiAwareness;
        *((_DWORD *)a2 + 1) = v29.top - WindowBordersWithDpiAwareness;
        WindowBordersWithDpiAwareness *= 2;
        left = (unsigned int)(WindowBordersWithDpiAwareness - v29.top);
        top = (unsigned int)(left + bottom);
        *((_DWORD *)a2 + 2) = v29.right + WindowBordersWithDpiAwareness - v29.left;
        if ( v9 == v32 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
        {
          v28 = *((_DWORD *)a2 + 3);
          if ( (int)top >= v28 )
            top = (unsigned int)v28;
        }
        *((_DWORD *)a2 + 3) = top;
      }
      goto LABEL_40;
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) == 0 )
      goto LABEL_24;
  }
  else if ( (unsigned int)IsMaxedRect(&v31, a2) )
  {
LABEL_24:
    v23 = xxxAddFullScreen(a1);
LABEL_39:
    v4 = v23;
  }
LABEL_40:
  ThreadUnlock1(left, top, v21);
  return v4;
}
