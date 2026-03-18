/*
 * XREFs of xxxSetWindowPlacement @ 0x1C0065970
 * Callers:
 *     NtUserSetWindowPlacement @ 0x1C0065870 (NtUserSetWindowPlacement.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     WPUpdateCheckPointSettings @ 0x1C0065010 (WPUpdateCheckPointSettings.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C006565C (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     UpdateCheckpoint @ 0x1C00669AC (UpdateCheckpoint.c)
 *     GetMonitorRect @ 0x1C0066BB4 (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C0066BF8 (GetMonitorWorkRect.c)
 *     _MonitorFromRect @ 0x1C0072BA0 (_MonitorFromRect.c)
 *     xxxShowWindowEx @ 0x1C0075774 (xxxShowWindowEx.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetWindowPlacement(struct tagWND *a1, __int64 a2)
{
  struct tagMONITOR *v2; // r12
  int v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  BOOL v10; // r14d
  __int64 DesktopWindow; // rax
  __int64 v12; // rdx
  struct tagPOINT v13; // rcx
  struct tagPOINT v14; // rax
  int v15; // ebx
  __int64 v16; // rax
  int v17; // r13d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 updated; // rax
  __int64 v21; // r8
  unsigned int v22; // edx
  int v23; // edx
  int v24; // ecx
  __int64 v25; // rdx
  int v26; // ebx
  char v27; // al
  __int64 v28; // r9
  int v29; // ebx
  int v31; // ecx
  __int64 v32; // r10
  __int64 v33; // rdx
  struct tagPOINT v34; // [rsp+40h] [rbp-39h] BYREF
  struct tagPOINT v35; // [rsp+48h] [rbp-31h] BYREF
  __int128 v36; // [rsp+50h] [rbp-29h]
  _BYTE v37[16]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v38[16]; // [rsp+70h] [rbp-9h] BYREF
  struct tagRECT v39; // [rsp+80h] [rbp+7h] BYREF

  v2 = 0LL;
  *(_QWORD *)&v36 = 0LL;
  v5 = 1;
  v10 = 0;
  if ( a1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) + 472) + 224LL) & 1) == 0 )
    {
      v8 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6) + 472);
      if ( (*(_BYTE *)(v8 + 224) & 0x20) == 0 )
      {
        v9 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
        if ( (((unsigned __int16)(v9 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                v8,
                                                                                v7) >> 8)) & 0x1FF) != 0 )
          v10 = 1;
      }
    }
  }
  v39 = *(struct tagRECT *)(a2 + 28);
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v12 == DesktopWindow )
  {
    v2 = (struct tagMONITOR *)MonitorFromRect(&v39);
    v36 = *(_OWORD *)GetMonitorWorkRect(v37, v2);
  }
  v13 = *(struct tagPOINT *)(a2 + 12);
  v34 = v13;
  if ( v13.x == -1 || v13.y == -1 )
    v5 = 0;
  v14 = *(struct tagPOINT *)(a2 + 20);
  v35 = v14;
  if ( v14.x == -1 || v14.y == -1 )
    v15 = 0;
  else
    v15 = 64;
  v16 = GetDesktopWindow((__int64)a1);
  v17 = DWORD1(v36);
  if ( v18 == v16 && *(char *)(*((_QWORD *)a1 + 5) + 24LL) >= 0 )
  {
    v19 = *(_QWORD *)GetMonitorRect(v38, v2);
    v39.bottom += DWORD1(v36) - HIDWORD(v19);
    v39.left += v36 - v19;
    v39.right += v36 - v19;
    v39.top += DWORD1(v36) - HIDWORD(v19);
    if ( v5 )
    {
      v34.x += v36 - v19;
      v34.y += DWORD1(v36) - HIDWORD(v19);
    }
    CheckPlacementBounds(&v39, &v34, &v35, v2);
  }
  if ( v10 )
    TransformRectBetweenCoordinateSpaces(&v39, &v39, a1, 0LL);
  updated = UpdateCheckpoint(a1);
  v21 = updated;
  if ( updated )
  {
    v22 = *(_DWORD *)(updated + 48) & 0xFFFFFFDF;
    *(struct tagRECT *)updated = v39;
    *(struct tagPOINT *)(updated + 32) = v34;
    v23 = (32 * v5) | v22;
    *(_DWORD *)(updated + 48) = v23;
    v24 = v23 ^ ((unsigned __int8)v23 ^ (unsigned __int8)*(_DWORD *)(a2 + 4)) & 1;
    *(_DWORD *)(updated + 48) = v24;
    *(struct tagPOINT *)(updated + 40) = v35;
    *(_DWORD *)(updated + 48) = v15 & 0xFFFFFFFD | v24 & 0xFFFFFFBD;
  }
  v25 = *((_QWORD *)a1 + 5);
  v26 = ((*(_DWORD *)(a2 + 4) & 4) << 12) | 0x14;
  v27 = *(_BYTE *)(v25 + 31);
  if ( (v27 & 0x20) != 0 )
  {
    if ( (!v21 || (*(_DWORD *)(v21 + 48) & 1) != 0) && v5 )
    {
      if ( v10 )
        TransformPointBetweenCoordinateSpaces(&v34, &v34, a1, 0LL);
      xxxSetWindowPos(a1, 0LL, (unsigned int)v34.x, (unsigned int)v34.y, 0, 0, v26 | 1);
    }
  }
  else if ( (v27 & 1) != 0 )
  {
    if ( v21 )
    {
      v31 = *(_DWORD *)(v21 + 48);
      if ( (*(_BYTE *)(v25 + 19) & 0x40) != 0 )
      {
        v31 &= ~0x40u;
        *(_DWORD *)(v21 + 48) = v31;
      }
      if ( (v31 & 0x40) != 0 )
      {
        if ( *((_QWORD *)a1 + 10) == GetDesktopWindow((__int64)a1) )
        {
          v35.x += v36;
          v35.y += v17;
        }
        if ( v10 )
          TransformPointBetweenCoordinateSpaces(&v35, &v35, a1, 0LL);
        xxxSetWindowPos(a1, 0LL, (unsigned int)v35.x, (unsigned int)v35.y, 0, 0, v26 | 1);
      }
    }
  }
  else
  {
    xxxSetWindowPos(
      a1,
      0LL,
      (unsigned int)v39.left,
      (unsigned int)v39.top,
      v39.right - v39.left,
      v39.bottom - v39.top,
      v26);
  }
  v28 = *(unsigned int *)(a2 + 4);
  if ( (v28 & 4) == 0
    || (v32 = *((_QWORD *)a1 + 2), v33 = *(_QWORD *)(v32 + 424), v33 == *(_QWORD *)(gptiCurrent + 424LL)) )
  {
    v29 = 0;
    xxxShowWindowEx(a1);
  }
  else
  {
    v29 = 1;
    PostEventMessageEx(
      (struct tagTHREADINFO *)v32,
      v33,
      1u,
      (__int64)a1,
      0,
      v28,
      *(unsigned int *)(a2 + 8) | (unsigned __int64)(gdwPUDFlags & 0x10000),
      0LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 && !v29 )
    WPUpdateCheckPointSettings((__int64)a1, *(_DWORD *)(a2 + 4));
  return 1LL;
}
