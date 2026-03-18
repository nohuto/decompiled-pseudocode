/*
 * XREFs of xxxSetWindowPlacement @ 0x1C0012ED8
 * Callers:
 *     NtUserSetWindowPlacement @ 0x1C0012D80 (NtUserSetWindowPlacement.c)
 * Callees:
 *     WPUpdateCheckPointSettings @ 0x1C0011190 (WPUpdateCheckPointSettings.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C0012BC0 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     UpdateCheckpoint @ 0x1C00143E8 (UpdateCheckpoint.c)
 *     GetMonitorRect @ 0x1C00145DC (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C001461C (GetMonitorWorkRect.c)
 *     _MonitorFromRect @ 0x1C00147D0 (_MonitorFromRect.c)
 *     xxxShowWindowEx @ 0x1C002372C (xxxShowWindowEx.c)
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetWindowPlacement(struct tagWND *a1, __int64 a2)
{
  struct tagMONITOR *v2; // r12
  int v5; // r15d
  unsigned int v6; // ebx
  int v7; // ebx
  int v8; // eax
  BOOL v9; // r14d
  __int64 DesktopWindow; // rax
  __int64 v11; // rdx
  struct tagPOINT v12; // rcx
  struct tagPOINT v13; // rax
  int v14; // ebx
  __int64 v15; // rax
  int v16; // r13d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 updated; // rax
  __int64 v20; // r8
  unsigned int v21; // edx
  int v22; // edx
  int v23; // ecx
  __int64 v24; // rdx
  int v25; // ebx
  char v26; // al
  __int64 v27; // r9
  int v28; // ebx
  int v30; // ecx
  __int64 v31; // r10
  struct tagPOINT v32; // [rsp+40h] [rbp-39h] BYREF
  struct tagPOINT v33; // [rsp+48h] [rbp-31h] BYREF
  __int128 v34; // [rsp+50h] [rbp-29h]
  _BYTE v35[16]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v36[16]; // [rsp+70h] [rbp-9h] BYREF
  struct tagRECT v37; // [rsp+80h] [rbp+7h] BYREF

  v2 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  *(_QWORD *)&v34 = 0LL;
  v5 = 1;
  v9 = 0;
  if ( a1
    && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 472) + 224LL) & 1) == 0
    && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 472) + 224LL) & 0x20) == 0 )
  {
    v6 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
    if ( (((unsigned __int16)(v6 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) != 0
      || ((*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2
       && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0x20000000) != 0
        ? (v7 = 1)
        : (v7 = 0),
          (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2
       && (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) != 0
        ? (v8 = 1)
        : (v8 = 0),
          v7 != v8) )
    {
      v9 = 1;
    }
  }
  v37 = *(struct tagRECT *)(a2 + 28);
  DesktopWindow = GetDesktopWindow(a1);
  if ( v11 == DesktopWindow )
  {
    v2 = (struct tagMONITOR *)MonitorFromRect(&v37);
    v34 = *(_OWORD *)GetMonitorWorkRect(v35, v2);
  }
  v12 = *(struct tagPOINT *)(a2 + 12);
  v32 = v12;
  if ( v12.x == -1 || v12.y == -1 )
    v5 = 0;
  v13 = *(struct tagPOINT *)(a2 + 20);
  v33 = v13;
  if ( v13.x == -1 || v13.y == -1 )
    v14 = 0;
  else
    v14 = 64;
  v15 = GetDesktopWindow(a1);
  v16 = DWORD1(v34);
  if ( v17 == v15 && *(char *)(*((_QWORD *)a1 + 5) + 24LL) >= 0 )
  {
    v18 = *(_QWORD *)GetMonitorRect(v36, v2);
    v37.bottom += DWORD1(v34) - HIDWORD(v18);
    v37.left += v34 - v18;
    v37.right += v34 - v18;
    v37.top += DWORD1(v34) - HIDWORD(v18);
    if ( v5 )
    {
      v32.x += v34 - v18;
      v32.y += DWORD1(v34) - HIDWORD(v18);
    }
    CheckPlacementBounds(&v37, &v32, &v33, v2);
  }
  if ( v9 )
    TransformRectBetweenCoordinateSpaces(&v37, &v37, a1, 0LL);
  updated = UpdateCheckpoint(a1);
  v20 = updated;
  if ( updated )
  {
    v21 = *(_DWORD *)(updated + 48) & 0xFFFFFFDF;
    *(struct tagRECT *)updated = v37;
    *(struct tagPOINT *)(updated + 32) = v32;
    v22 = (32 * v5) | v21;
    *(_DWORD *)(updated + 48) = v22;
    v23 = v22 ^ ((unsigned __int8)v22 ^ (unsigned __int8)*(_DWORD *)(a2 + 4)) & 1;
    *(_DWORD *)(updated + 48) = v23;
    *(struct tagPOINT *)(updated + 40) = v33;
    *(_DWORD *)(updated + 48) = v14 & 0xFFFFFFFD | v23 & 0xFFFFFFBD;
  }
  v24 = *((_QWORD *)a1 + 5);
  v25 = ((*(_DWORD *)(a2 + 4) & 4) << 12) | 0x14;
  v26 = *(_BYTE *)(v24 + 31);
  if ( (v26 & 0x20) != 0 )
  {
    if ( v20 && (*(_DWORD *)(v20 + 48) & 1) == 0 || !v5 )
      goto LABEL_31;
    if ( v9 )
      TransformPointBetweenCoordinateSpaces(&v32, &v32, a1, 0LL);
    goto LABEL_55;
  }
  if ( (v26 & 1) == 0 )
  {
    xxxSetWindowPos(a1, v37.right - v37.left, v37.bottom - v37.top, v25);
    goto LABEL_31;
  }
  if ( v20 )
  {
    v30 = *(_DWORD *)(v20 + 48);
    if ( (*(_BYTE *)(v24 + 19) & 0x40) != 0 )
    {
      v30 &= ~0x40u;
      *(_DWORD *)(v20 + 48) = v30;
    }
    if ( (v30 & 0x40) != 0 )
    {
      if ( *((_QWORD *)a1 + 13) == GetDesktopWindow(a1) )
      {
        v33.x += v34;
        v33.y += v16;
      }
      if ( v9 )
        TransformPointBetweenCoordinateSpaces(&v33, &v33, a1, 0LL);
LABEL_55:
      xxxSetWindowPos(a1, 0, 0, v25 | 1);
    }
  }
LABEL_31:
  v27 = *(unsigned int *)(a2 + 4);
  if ( (v27 & 4) == 0 || (v31 = *((_QWORD *)a1 + 2), *(_QWORD *)(v31 + 424) == *(_QWORD *)(gptiCurrent + 424LL)) )
  {
    v28 = 0;
    xxxShowWindowEx(a1);
  }
  else
  {
    v28 = 1;
    PostEventMessageEx(
      (struct tagTHREADINFO *)v31,
      0,
      v27,
      *(unsigned int *)(a2 + 8) | (unsigned __int64)(gdwPUDFlags & 0x10000),
      0LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 && !v28 )
    WPUpdateCheckPointSettings((__int64)a1, *(_DWORD *)(a2 + 4));
  return 1LL;
}
