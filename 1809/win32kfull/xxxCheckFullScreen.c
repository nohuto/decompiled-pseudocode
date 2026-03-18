/*
 * XREFs of xxxCheckFullScreen @ 0x1C001CD74
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00391F4 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     GetMonitorRectForWindow @ 0x1C001CCB8 (GetMonitorRectForWindow.c)
 *     ?IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z @ 0x1C001D0CC (-IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1C001D104 (GetMonitorWorkRectForWindow.c)
 *     xxxRemoveFullScreen @ 0x1C001D218 (xxxRemoveFullScreen.c)
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00691A4 (GetWindowBordersWithDpiAwareness.c)
 *     _MonitorFromRect @ 0x1C007A8E0 (_MonitorFromRect.c)
 *     GetWindowDpiLastNotify @ 0x1C00A7B60 (GetWindowDpiLastNotify.c)
 *     RECTFromSIZERECT @ 0x1C0107194 (RECTFromSIZERECT.c)
 *     xxxAddFullScreen @ 0x1C012321C (xxxAddFullScreen.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     ?ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C0224534 (-ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 *     GetScreenRectForWindow @ 0x1C0241034 (GetScreenRectForWindow.c)
 */

__int64 __fastcall xxxCheckFullScreen(struct tagWND *a1, struct tagSIZERECT *a2)
{
  unsigned int v4; // esi
  unsigned int WindowDpiLastNotify; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r12
  struct _KTHREAD *CurrentThread; // r13
  __int64 v11; // r15
  __int64 *ThreadWin32Thread; // rax
  struct tagRECT v13; // xmm6
  struct tagRECT *MonitorRectForWindow; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int DpiDependentMetric; // eax
  __int64 top; // rdx
  __int64 v20; // r8
  __int64 left; // rcx
  unsigned int v22; // eax
  int v23; // eax
  int v24; // eax
  int WindowBordersWithDpiAwareness; // eax
  LONG bottom; // edx
  int v27; // eax
  struct tagRECT v28; // [rsp+28h] [rbp-99h] BYREF
  struct tagRECT v29; // [rsp+38h] [rbp-89h] BYREF
  struct tagRECT v30; // [rsp+48h] [rbp-79h] BYREF
  __int64 v31; // [rsp+58h] [rbp-69h]
  struct tagRECT v32; // [rsp+60h] [rbp-61h] BYREF
  _QWORD v33[3]; // [rsp+70h] [rbp-51h] BYREF
  char v34[16]; // [rsp+88h] [rbp-39h] BYREF
  char v35[16]; // [rsp+98h] [rbp-29h] BYREF
  __int128 v36; // [rsp+A8h] [rbp-19h] BYREF
  struct tagRECT v37; // [rsp+B8h] [rbp-9h] BYREF

  v4 = 0;
  WindowDpiLastNotify = 96;
  v6 = *(_QWORD *)(GetDispInfo() + 96);
  v31 = v6;
  v7 = gpDispInfo;
  if ( *(_DWORD *)*gpDispInfo > 1u )
  {
    v32 = *(struct tagRECT *)GetScreenRectForWindow(v34, a1);
    if ( (unsigned int)IsMaxedRect(&v32, a2) )
      return 0LL;
    RECTFromSIZERECT(&v37);
    v8 = MonitorFromRect(&v37);
  }
  else
  {
    v8 = v6;
  }
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v6) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
  }
  v33[0] = *(_QWORD *)(v11 + 416);
  *(_QWORD *)(v11 + 416) = v33;
  v33[1] = v8;
  _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
  v13 = *(struct tagRECT *)GetMonitorWorkRectForWindow(v35, v8, a1);
  v28 = v13;
  if ( !(unsigned int)IsMaxedRect(&v28, a2) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
      SetOrClrWF(0, (__int64)a1, 0x340u, 1);
    v22 = xxxRemoveFullScreen(a1);
    goto LABEL_39;
  }
  MonitorRectForWindow = (struct tagRECT *)GetMonitorRectForWindow(&v36, v8, a1);
  v15 = *((_QWORD *)a1 + 5);
  v30 = *MonitorRectForWindow;
  if ( (*(_BYTE *)(v15 + 31) & 1) != 0
    && (SetOrClrWF(1, (__int64)a1, 0x340u, 1), v16 = *((_QWORD *)a1 + 5), (*(_BYTE *)(v16 + 31) & 1) != 0)
    && (((*(_BYTE *)(v16 + 30) & 0xC0) == 0xC0) & *(_BYTE *)(v16 + 30)) != 0 )
  {
    if ( (*(_DWORD *)(v16 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v16 + 288) & 0xF) != 0
           || (v17 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) == 0
           || (*(_DWORD *)(**(_QWORD **)(v17 + 8) + 64LL) & 1) == 0 )
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(2LL, WindowDpiLastNotify);
    v20 = DpiDependentMetric;
    if ( (int)(*(_DWORD *)a2 + DpiDependentMetric) > v30.right
      || (left = (unsigned int)(*((_DWORD *)a2 + 2) + *(_DWORD *)a2), (int)left < v30.right)
      || (top = *((unsigned int *)a2 + 1), (int)(top + DpiDependentMetric) > v30.top)
      || (top = (unsigned int)(*((_DWORD *)a2 + 3) + top), (int)top < v30.bottom) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) != 0 )
        v4 = xxxRemoveFullScreen(a1);
      if ( *((_DWORD *)a1 + 73) )
      {
        v29 = v13;
        ExtendRectByWindowMargin(a1, &v29, &v29);
        left = (unsigned int)v29.left;
        top = (unsigned int)v29.top;
        v23 = v29.right - v29.left;
        *(_DWORD *)a2 = v29.left;
        *((_DWORD *)a2 + 2) = v23;
        v24 = v29.bottom - top;
        *((_DWORD *)a2 + 1) = top;
        *((_DWORD *)a2 + 3) = v24;
      }
      else
      {
        WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, top, v20);
        bottom = v28.bottom;
        *(_DWORD *)a2 = v28.left - WindowBordersWithDpiAwareness;
        *((_DWORD *)a2 + 1) = v28.top - WindowBordersWithDpiAwareness;
        WindowBordersWithDpiAwareness *= 2;
        left = (unsigned int)(WindowBordersWithDpiAwareness - v28.top);
        top = (unsigned int)(left + bottom);
        *((_DWORD *)a2 + 2) = v28.right + WindowBordersWithDpiAwareness - v28.left;
        if ( v8 == v31 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
        {
          v27 = *((_DWORD *)a2 + 3);
          if ( (int)top >= v27 )
            top = (unsigned int)v27;
        }
        *((_DWORD *)a2 + 3) = top;
      }
      goto LABEL_40;
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) == 0 )
      goto LABEL_24;
  }
  else if ( (unsigned int)IsMaxedRect(&v30, a2) )
  {
LABEL_24:
    v22 = xxxAddFullScreen(a1);
LABEL_39:
    v4 = v22;
  }
LABEL_40:
  ThreadUnlock1(left, top);
  return v4;
}
