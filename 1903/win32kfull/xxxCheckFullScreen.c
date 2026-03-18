/*
 * XREFs of xxxCheckFullScreen @ 0x1C0096CF8
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00CDEA8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     _MonitorFromRect @ 0x1C0091E40 (_MonitorFromRect.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00920C8 (GetWindowBordersWithDpiAwareness.c)
 *     GetWindowDpiLastNotify @ 0x1C0093050 (GetWindowDpiLastNotify.c)
 *     GetMonitorRectForWindow @ 0x1C0095B2C (GetMonitorRectForWindow.c)
 *     ?IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z @ 0x1C0097070 (-IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1C00970A8 (GetMonitorWorkRectForWindow.c)
 *     xxxRemoveFullScreen @ 0x1C0097200 (xxxRemoveFullScreen.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     RECTFromSIZERECT @ 0x1C010BBB8 (RECTFromSIZERECT.c)
 *     xxxAddFullScreen @ 0x1C012D744 (xxxAddFullScreen.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     ?ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023C9B4 (-ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 *     GetScreenRectForWindow @ 0x1C0259DF0 (GetScreenRectForWindow.c)
 */

__int64 __fastcall xxxCheckFullScreen(struct tagWND *a1, struct tagSIZERECT *a2)
{
  unsigned int v4; // esi
  unsigned int WindowDpiLastNotify; // r14d
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r13
  struct _KTHREAD *CurrentThread; // r12
  __int64 v13; // r15
  __int64 *ThreadWin32Thread; // rax
  struct tagRECT v15; // xmm6
  struct tagRECT *MonitorRectForWindow; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int DpiDependentMetric; // eax
  __int64 v21; // r8
  __int64 left; // rcx
  int v23; // edx
  __int64 top; // rdx
  unsigned int v25; // eax
  int v26; // eax
  int v27; // eax
  int WindowBordersWithDpiAwareness; // eax
  LONG bottom; // edx
  int v30; // eax
  struct tagRECT v31; // [rsp+28h] [rbp-99h] BYREF
  struct tagRECT v32; // [rsp+38h] [rbp-89h] BYREF
  struct tagRECT v33; // [rsp+48h] [rbp-79h] BYREF
  __int64 v34; // [rsp+58h] [rbp-69h]
  __int64 v35; // [rsp+60h] [rbp-61h] BYREF
  __int64 v36; // [rsp+68h] [rbp-59h]
  __int64 v37; // [rsp+70h] [rbp-51h]
  struct tagRECT v38; // [rsp+78h] [rbp-49h] BYREF
  char v39[16]; // [rsp+88h] [rbp-39h] BYREF
  char v40[16]; // [rsp+98h] [rbp-29h] BYREF
  __int128 v41; // [rsp+A8h] [rbp-19h] BYREF
  struct tagRECT v42; // [rsp+B8h] [rbp-9h] BYREF

  v35 = 0LL;
  v36 = 0LL;
  v4 = 0;
  v37 = 0LL;
  *(_QWORD *)&v42.left = 0LL;
  *(_QWORD *)&v42.right = 0LL;
  WindowDpiLastNotify = 96;
  v6 = *(_QWORD *)(GetDispInfo(a1, a2) + 96);
  v34 = v6;
  v9 = gpDispInfo;
  if ( *(_DWORD *)*gpDispInfo > 1u )
  {
    v38 = *(struct tagRECT *)GetScreenRectForWindow(v39, a1);
    if ( (unsigned int)IsMaxedRect(&v38, a2) )
      return 0LL;
    RECTFromSIZERECT(&v42);
    v10 = MonitorFromRect(&v42, 1u, *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL));
  }
  else
  {
    v10 = v6;
  }
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v6, v7, v8) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v13 = *ThreadWin32Thread;
  }
  v35 = *(_QWORD *)(v13 + 408);
  *(_QWORD *)(v13 + 408) = &v35;
  v36 = v10;
  HMLockObject(v10);
  v15 = *(struct tagRECT *)GetMonitorWorkRectForWindow(v40, v10, a1);
  v31 = v15;
  if ( !(unsigned int)IsMaxedRect(&v31, a2) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
      SetOrClrWF(0, (__int64)a1, 0x340u, 1);
    v25 = xxxRemoveFullScreen(a1);
    goto LABEL_39;
  }
  MonitorRectForWindow = (struct tagRECT *)GetMonitorRectForWindow(&v41, v10, a1);
  v17 = *((_QWORD *)a1 + 5);
  v33 = *MonitorRectForWindow;
  if ( (*(_BYTE *)(v17 + 31) & 1) != 0
    && (SetOrClrWF(1, (__int64)a1, 0x340u, 1), v18 = *((_QWORD *)a1 + 5), (*(_BYTE *)(v18 + 31) & 1) != 0)
    && (((*(_BYTE *)(v18 + 30) & 0xC0) == 0xC0) & *(_BYTE *)(v18 + 30)) != 0 )
  {
    if ( (*(_DWORD *)(v18 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
    }
    else if ( (*(_DWORD *)(v18 + 288) & 0xF) != 0
           || (v19 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) == 0
           || (*(_DWORD *)(**(_QWORD **)(v19 + 8) + 64LL) & 1) == 0 )
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(2LL, WindowDpiLastNotify);
    v21 = DpiDependentMetric;
    if ( (int)(*(_DWORD *)a2 + DpiDependentMetric) > v33.right
      || (left = (unsigned int)(*((_DWORD *)a2 + 2) + *(_DWORD *)a2), (int)left < v33.right)
      || (v23 = *((_DWORD *)a2 + 1), (int)(v23 + DpiDependentMetric) > v33.top)
      || (top = (unsigned int)(*((_DWORD *)a2 + 3) + v23), (int)top < v33.bottom) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) != 0 )
        v4 = xxxRemoveFullScreen(a1);
      if ( *((_DWORD *)a1 + 77) )
      {
        v32 = v15;
        ExtendRectByWindowMargin(a1, &v32, &v32);
        left = (unsigned int)v32.left;
        top = (unsigned int)v32.top;
        v26 = v32.right - v32.left;
        *(_DWORD *)a2 = v32.left;
        *((_DWORD *)a2 + 2) = v26;
        v27 = v32.bottom - top;
        *((_DWORD *)a2 + 1) = top;
        *((_DWORD *)a2 + 3) = v27;
      }
      else
      {
        WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness((__int64)a1);
        bottom = v31.bottom;
        *(_DWORD *)a2 = v31.left - WindowBordersWithDpiAwareness;
        *((_DWORD *)a2 + 1) = v31.top - WindowBordersWithDpiAwareness;
        WindowBordersWithDpiAwareness *= 2;
        left = (unsigned int)(WindowBordersWithDpiAwareness - v31.top);
        top = (unsigned int)(left + bottom);
        *((_DWORD *)a2 + 2) = v31.right + WindowBordersWithDpiAwareness - v31.left;
        if ( v10 == v34 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
        {
          v30 = *((_DWORD *)a2 + 3);
          if ( (int)top >= v30 )
            top = (unsigned int)v30;
        }
        *((_DWORD *)a2 + 3) = top;
      }
      goto LABEL_40;
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) == 0 )
      goto LABEL_24;
  }
  else if ( (unsigned int)IsMaxedRect(&v33, a2) )
  {
LABEL_24:
    v25 = xxxAddFullScreen(a1);
LABEL_39:
    v4 = v25;
  }
LABEL_40:
  ThreadUnlock1(left, top, v21);
  return v4;
}
