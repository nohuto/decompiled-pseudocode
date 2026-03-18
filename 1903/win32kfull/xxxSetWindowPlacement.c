/*
 * XREFs of xxxSetWindowPlacement @ 0x1C0122AB8
 * Callers:
 *     NtUserSetWindowPlacement @ 0x1C0122960 (NtUserSetWindowPlacement.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     xxxShowWindowEx @ 0x1C002E00C (xxxShowWindowEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UpdateCheckpoint @ 0x1C0090C28 (UpdateCheckpoint.c)
 *     GetMonitorRect @ 0x1C0090E1C (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C0090E5C (GetMonitorWorkRect.c)
 *     _MonitorFromRect @ 0x1C0091E40 (_MonitorFromRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C0122E44 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     WPUpdateCheckPointSettings @ 0x1C0123000 (WPUpdateCheckPointSettings.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetWindowPlacement(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagMONITOR *v4; // r12
  int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  BOOL v26; // r14d
  __int64 DesktopWindow; // rax
  __int64 v28; // rdx
  struct tagPOINT v29; // rcx
  struct tagPOINT v30; // rax
  int v31; // ebx
  __int64 v32; // rax
  int v33; // r13d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 updated; // rax
  __int64 v37; // r8
  unsigned int v38; // edx
  int v39; // edx
  int v40; // ecx
  __int64 v41; // rdx
  int v42; // ebx
  char v43; // al
  __int64 v44; // r9
  int v45; // ebx
  int v47; // ecx
  __int64 v48; // r10
  __int64 v49; // rdx
  struct tagPOINT v50; // [rsp+40h] [rbp-39h] BYREF
  struct tagPOINT v51; // [rsp+48h] [rbp-31h] BYREF
  __int128 v52; // [rsp+50h] [rbp-29h]
  __int128 v53; // [rsp+60h] [rbp-19h] BYREF
  __int128 v54; // [rsp+70h] [rbp-9h] BYREF
  struct tagRECT v55; // [rsp+80h] [rbp+7h] BYREF

  v4 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  *(_QWORD *)&v52 = 0LL;
  v7 = 1;
  v26 = 0;
  if ( a1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) + 472) + 224LL) & 1) == 0 )
    {
      v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10) + 472);
      if ( (*(_BYTE *)(v12 + 224) & 0x20) == 0 )
      {
        v15 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
        if ( (((unsigned __int16)(v15 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                 v12,
                                                                                 v11,
                                                                                 v13,
                                                                                 v14) >> 8)) & 0x1FF) != 0
          || ((v19 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL),
               (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2)
           && (v19 & 0x20000000) != 0
            ? (v20 = 1)
            : (v20 = 0),
              (W32GetCurrentThreadDpiAwarenessContext(v19, v16, v17, v18) & 0xF) == 2
           && (W32GetCurrentThreadDpiAwarenessContext(v22, v21, v23, v24) & 0x20000000) != 0
            ? (v25 = 1)
            : (v25 = 0),
              v20 != v25) )
        {
          v26 = 1;
        }
      }
    }
  }
  v55 = *(struct tagRECT *)(a2 + 28);
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v28 == DesktopWindow )
  {
    v4 = (struct tagMONITOR *)MonitorFromRect(&v55, 1u, 0);
    v52 = *GetMonitorWorkRect(&v53, (__int64)v4);
  }
  v29 = *(struct tagPOINT *)(a2 + 12);
  v50 = v29;
  if ( v29.x == -1 || v29.y == -1 )
    v7 = 0;
  v30 = *(struct tagPOINT *)(a2 + 20);
  v51 = v30;
  if ( v30.x == -1 || v30.y == -1 )
    v31 = 0;
  else
    v31 = 64;
  v32 = GetDesktopWindow((__int64)a1);
  v33 = DWORD1(v52);
  if ( v34 == v32 && *(char *)(*((_QWORD *)a1 + 5) + 24LL) >= 0 )
  {
    v35 = *(_QWORD *)GetMonitorRect(&v54, (__int64)v4);
    v55.bottom += DWORD1(v52) - HIDWORD(v35);
    v55.left += v52 - v35;
    v55.right += v52 - v35;
    v55.top += DWORD1(v52) - HIDWORD(v35);
    if ( v7 )
    {
      v50.x += v52 - v35;
      v50.y += DWORD1(v52) - HIDWORD(v35);
    }
    CheckPlacementBounds(&v55, &v50, &v51, v4);
  }
  if ( v26 )
    TransformRectBetweenCoordinateSpaces(&v55, &v55, a1, 0LL);
  updated = UpdateCheckpoint((__int64)a1);
  v37 = updated;
  if ( updated )
  {
    v38 = *(_DWORD *)(updated + 48) & 0xFFFFFFDF;
    *(struct tagRECT *)updated = v55;
    *(struct tagPOINT *)(updated + 32) = v50;
    v39 = (32 * v7) | v38;
    *(_DWORD *)(updated + 48) = v39;
    v40 = v39 ^ ((unsigned __int8)v39 ^ (unsigned __int8)*(_DWORD *)(a2 + 4)) & 1;
    *(_DWORD *)(updated + 48) = v40;
    *(struct tagPOINT *)(updated + 40) = v51;
    *(_DWORD *)(updated + 48) = v31 & 0xFFFFFFFD | v40 & 0xFFFFFFBD;
  }
  v41 = *((_QWORD *)a1 + 5);
  v42 = ((*(_DWORD *)(a2 + 4) & 4) << 12) | 0x14;
  v43 = *(_BYTE *)(v41 + 31);
  if ( (v43 & 0x20) != 0 )
  {
    if ( (!v37 || (*(_DWORD *)(v37 + 48) & 1) != 0) && v7 )
    {
      if ( v26 )
        TransformPointBetweenCoordinateSpaces(&v50, &v50, a1, 0LL);
      xxxSetWindowPos(a1, 0LL, (unsigned int)v50.x, (unsigned int)v50.y, 0, 0, v42 | 1);
    }
  }
  else if ( (v43 & 1) != 0 )
  {
    if ( v37 )
    {
      v47 = *(_DWORD *)(v37 + 48);
      if ( (*(_BYTE *)(v41 + 19) & 0x40) != 0 )
      {
        v47 &= ~0x40u;
        *(_DWORD *)(v37 + 48) = v47;
      }
      if ( (v47 & 0x40) != 0 )
      {
        if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
        {
          v51.x += v52;
          v51.y += v33;
        }
        if ( v26 )
          TransformPointBetweenCoordinateSpaces(&v51, &v51, a1, 0LL);
        xxxSetWindowPos(a1, 0LL, (unsigned int)v51.x, (unsigned int)v51.y, 0, 0, v42 | 1);
      }
    }
  }
  else
  {
    xxxSetWindowPos(
      a1,
      0LL,
      (unsigned int)v55.left,
      (unsigned int)v55.top,
      v55.right - v55.left,
      v55.bottom - v55.top,
      v42);
  }
  v44 = *(unsigned int *)(a2 + 4);
  if ( (v44 & 4) == 0
    || (v48 = *((_QWORD *)a1 + 2), v49 = *(_QWORD *)(v48 + 424), v49 == *(_QWORD *)(gptiCurrent + 424LL)) )
  {
    v45 = 0;
    xxxShowWindowEx(a1, *(_BYTE *)(a2 + 8), 0);
  }
  else
  {
    v45 = 1;
    PostEventMessageEx(
      (struct tagTHREADINFO *)v48,
      v49,
      1u,
      (__int64)a1,
      0,
      v44,
      *(unsigned int *)(a2 + 8) | (unsigned __int64)(gdwPUDFlags & 0x10000),
      0LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 && !v45 )
    WPUpdateCheckPointSettings(a1, *(unsigned int *)(a2 + 4));
  return 1LL;
}
