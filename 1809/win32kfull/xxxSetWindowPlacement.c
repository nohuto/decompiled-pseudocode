/*
 * XREFs of xxxSetWindowPlacement @ 0x1C00B87BC
 * Callers:
 *     NtUserSetWindowPlacement @ 0x1C00B8AF0 (NtUserSetWindowPlacement.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxShowWindowEx @ 0x1C006B634 (xxxShowWindowEx.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     _MonitorFromRect @ 0x1C007A8E0 (_MonitorFromRect.c)
 *     UpdateCheckpoint @ 0x1C00B6E60 (UpdateCheckpoint.c)
 *     GetMonitorWorkRect @ 0x1C00B7058 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C00B709C (GetMonitorRect.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C00B8F34 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 *     WPUpdateCheckPointSettings @ 0x1C0134260 (WPUpdateCheckPointSettings.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
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
  __int32 v17; // r13d
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
  struct tagPOINT v33; // [rsp+40h] [rbp-39h] BYREF
  struct tagPOINT v34; // [rsp+48h] [rbp-31h] BYREF
  __m128i v35; // [rsp+50h] [rbp-29h]
  __m128i v36; // [rsp+60h] [rbp-19h] BYREF
  __m128i v37; // [rsp+70h] [rbp-9h] BYREF
  struct tagRECT v38; // [rsp+80h] [rbp+7h] BYREF

  v2 = 0LL;
  v35.m128i_i64[0] = 0LL;
  v5 = 1;
  v10 = 0;
  if ( a1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) + 480) + 224LL) & 1) == 0 )
    {
      v8 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6) + 480);
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
  v38 = *(struct tagRECT *)(a2 + 28);
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v12 == DesktopWindow )
  {
    v2 = (struct tagMONITOR *)MonitorFromRect(&v38, 1u, 0);
    v35 = *GetMonitorWorkRect(&v36, (__int64)v2);
  }
  v13 = *(struct tagPOINT *)(a2 + 12);
  v33 = v13;
  if ( v13.x == -1 || v13.y == -1 )
    v5 = 0;
  v14 = *(struct tagPOINT *)(a2 + 20);
  v34 = v14;
  if ( v14.x == -1 || v14.y == -1 )
    v15 = 0;
  else
    v15 = 64;
  v16 = GetDesktopWindow((__int64)a1);
  v17 = v35.m128i_i32[1];
  if ( v18 == v16 && *(char *)(*((_QWORD *)a1 + 5) + 24LL) >= 0 )
  {
    v19 = GetMonitorRect(&v37, (__int64)v2)->m128i_i64[0];
    v38.bottom += v35.m128i_i32[1] - HIDWORD(v19);
    v38.left += v35.m128i_i32[0] - v19;
    v38.right += v35.m128i_i32[0] - v19;
    v38.top += v35.m128i_i32[1] - HIDWORD(v19);
    if ( v5 )
    {
      v33.x += v35.m128i_i32[0] - v19;
      v33.y += v35.m128i_i32[1] - HIDWORD(v19);
    }
    CheckPlacementBounds(&v38, &v33, &v34, v2);
  }
  if ( v10 )
    TransformRectBetweenCoordinateSpaces(&v38, &v38, a1, 0LL);
  updated = UpdateCheckpoint((__int64)a1);
  v21 = updated;
  if ( updated )
  {
    v22 = *(_DWORD *)(updated + 48) & 0xFFFFFFDF;
    *(struct tagRECT *)updated = v38;
    *(struct tagPOINT *)(updated + 32) = v33;
    v23 = (32 * v5) | v22;
    *(_DWORD *)(updated + 48) = v23;
    v24 = v23 ^ ((unsigned __int8)v23 ^ (unsigned __int8)*(_DWORD *)(a2 + 4)) & 1;
    *(_DWORD *)(updated + 48) = v24;
    *(struct tagPOINT *)(updated + 40) = v34;
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
        TransformPointBetweenCoordinateSpaces(&v33, &v33, a1, 0LL);
      xxxSetWindowPos(a1, 0LL, (unsigned int)v33.x, (unsigned int)v33.y, 0, 0, v26 | 1);
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
          v34.x += v35.m128i_i32[0];
          v34.y += v17;
        }
        if ( v10 )
          TransformPointBetweenCoordinateSpaces(&v34, &v34, a1, 0LL);
        xxxSetWindowPos(a1, 0LL, (unsigned int)v34.x, (unsigned int)v34.y, 0, 0, v26 | 1);
      }
    }
  }
  else
  {
    xxxSetWindowPos(
      a1,
      0LL,
      (unsigned int)v38.left,
      (unsigned int)v38.top,
      v38.right - v38.left,
      v38.bottom - v38.top,
      v26);
  }
  v28 = *(unsigned int *)(a2 + 4);
  if ( (v28 & 4) == 0 || (v32 = *((_QWORD *)a1 + 2), *(_QWORD *)(v32 + 432) == *(_QWORD *)(gptiCurrent + 432LL)) )
  {
    v29 = 0;
    xxxShowWindowEx((ULONG_PTR)a1, *(_BYTE *)(a2 + 8), 0);
  }
  else
  {
    v29 = 1;
    PostEventMessageEx(
      (struct tagTHREADINFO *)v32,
      0,
      v28,
      *(unsigned int *)(a2 + 8) | (unsigned __int64)(gdwPUDFlags & 0x10000),
      0LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 && !v29 )
    WPUpdateCheckPointSettings(a1, *(unsigned int *)(a2 + 4));
  return 1LL;
}
