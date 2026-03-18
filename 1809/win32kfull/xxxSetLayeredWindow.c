/*
 * XREFs of xxxSetLayeredWindow @ 0x1C007BECC
 * Callers:
 *     ComposeWindow @ 0x1C000D698 (ComposeWindow.c)
 *     xxxSetWindowStyle @ 0x1C002C580 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C0155FC8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C000DBA0 (DwmAsyncChildStyleChange.c)
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C003AB88 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00431A8 (IsToplevelWindowDesktopComposed.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     GreUpdateSpriteClipRgn @ 0x1C00746A8 (GreUpdateSpriteClipRgn.c)
 *     UpdateWindowSpriteDPI @ 0x1C0074A68 (UpdateWindowSpriteDPI.c)
 *     zzzUpdateLayeredWindow @ 0x1C0077B50 (zzzUpdateLayeredWindow.c)
 *     TrackLayeredZorder @ 0x1C0079E4C (TrackLayeredZorder.c)
 *     IsChildWindowDpiBoundary @ 0x1C007A5D8 (IsChildWindowDpiBoundary.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C007A680 (UserGetRedirectedWindowOrigin.c)
 *     IsDesktopWindow @ 0x1C007A740 (IsDesktopWindow.c)
 *     CreateSprite @ 0x1C007C114 (CreateSprite.c)
 *     IsWindowBeingDestroyed @ 0x1C007C6F4 (IsWindowBeingDestroyed.c)
 *     SendDwmIconChange @ 0x1C00B7154 (SendDwmIconChange.c)
 *     xxxRedrawWindow @ 0x1C00C7520 (xxxRedrawWindow.c)
 *     DwmAsyncTextChange @ 0x1C010E150 (DwmAsyncTextChange.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C0110FE0 (IsChildWindowDpiIsolationEnabled.c)
 *     GreGetSprite @ 0x1C012B03C (GreGetSprite.c)
 *     xxxUpdateThreadsWindows @ 0x1C01EC6DC (xxxUpdateThreadsWindows.c)
 */

__int64 __fastcall xxxSetLayeredWindow(struct tagWND *a1, int a2, __int64 *a3)
{
  int v3; // ebx
  struct tagWND *TopLevelWindow; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 result; // rax
  unsigned int updated; // r14d
  __int64 v13; // rcx
  __int64 v14; // rax
  HRGN v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  void *v19; // rax
  __int64 Sprite; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // ebx
  void *v24; // rax
  int v25; // eax
  __int64 DCEx; // rax
  HDC v27; // rbx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 RectRgnIndirect; // rax
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct tagSIZE v37; // [rsp+50h] [rbp-30h] BYREF
  struct tagPOINT v38; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v39[8]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v40[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v41; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v42; // [rsp+C8h] [rbp+48h] BYREF

  v3 = 0;
  if ( a3 )
    *a3 = 0LL;
  TopLevelWindow = (struct tagWND *)GetTopLevelWindow((__int64)a1);
  if ( TopLevelWindow )
  {
    if ( TopLevelWindow == a1
      || *((_WORD *)a1 + 120) >= 0x602u
      || (v25 = IsChildWindowDpiIsolationEnabled(a1, *((_QWORD *)a1 + 10)),
          v25 && (unsigned int)IsChildWindowDpiBoundary(a1)) )
    {
      v3 = 1;
    }
  }
  LOBYTE(v8) = IsDesktopWindow((__int64)a1);
  if ( v8 && (unsigned int)IsWindowDesktopComposed(v9) )
    v3 = 1;
  if ( !v3 )
    return 2151546883LL;
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x20) == 0 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(a1) )
    {
      result = CreateSprite(*(_QWORD *)(gpDispInfo + 40LL), a1, v10 + 88, a3);
      updated = result;
      if ( (int)result < 0 )
        return result;
      SetOrClrWF(1, (__int64)a1, 0xA08u, 1);
      TrackLayeredZorder(a1);
      if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
      {
        v14 = *((_QWORD *)a1 + 5);
        v15 = *(HRGN *)(v14 + 168);
        if ( v15 )
        {
          if ( (*(_BYTE *)(v14 + 21) & 8) == 0 )
            GreUpdateSpriteClipRgn(v13, *(struct PDEVOBJ **)a1, v15, 0);
        }
      }
      v16 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
      UpdateWindowSpriteDPI(a1, v16);
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        SendDwmIconChange((ULONG_PTR)a1);
        v19 = (void *)ReferenceDwmApiPort(v18, v17);
        DwmAsyncTextChange(v19);
      }
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v39);
      zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 17, 0LL);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v39);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
      {
        if ( !a2 )
          return updated;
        DCEx = _GetDCEx(*((_QWORD *)a1 + 10), 0LL, 3LL);
        v27 = (HDC)DCEx;
        if ( DCEx )
        {
          v28 = *((_QWORD *)a1 + 5);
          v41 = 0LL;
          v38 = *(struct tagPOINT *)(v28 + 88);
          v37.cx = *(_DWORD *)(v28 + 96) - *(_DWORD *)(v28 + 88);
          v37.cy = *(_DWORD *)(v28 + 100) - *(_DWORD *)(v28 + 92);
          UserGetRedirectedWindowOrigin(DCEx, (__int64)&v41);
          v29 = *((_QWORD *)a1 + 5);
          LODWORD(v42) = *(_DWORD *)(v29 + 88) - v41;
          HIDWORD(v42) = *(_DWORD *)(v29 + 92) - HIDWORD(v41);
          updated = zzzUpdateLayeredWindow(a1, v27, &v38, &v37, v27, (struct tagPOINT *)&v42, 0, 0LL, 0xCu, 0LL);
          _ReleaseDC(v27);
        }
      }
      else
      {
        a2 = 0;
      }
      if ( a2 )
      {
        RectRgnIndirect = GreCreateRectRgnIndirect(*((_QWORD *)a1 + 5) + 88LL);
        v32 = *((_QWORD *)a1 + 10);
        v33 = RectRgnIndirect;
        if ( v32 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31);
          v40[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v40;
          v40[1] = v32;
          _InterlockedAdd((volatile signed __int32 *)(v32 + 8), 1u);
          GreOffsetRgn(
            v33,
            (unsigned int)-*(_DWORD *)(*(_QWORD *)(v32 + 40) + 104LL),
            (unsigned int)-*(_DWORD *)(*(_QWORD *)(v32 + 40) + 108LL));
        }
        xxxRedrawWindow((struct tagWND *)v32);
        if ( v32 )
          ThreadUnlock1(v36, v35);
        xxxUpdateThreadsWindows(gptiCurrent, a1, v33);
        GreDeleteObject(v33);
      }
      return updated;
    }
    return 2151546883LL;
  }
  Sprite = GreGetSprite(v9, *(_QWORD *)a1);
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x20u;
  v22 = *((_QWORD *)a1 + 5);
  *(_DWORD *)(v22 + 232) |= 0x40u;
  if ( a3 )
    *a3 = Sprite;
  v23 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL);
  v24 = (void *)ReferenceDwmApiPort(v22, v21);
  DwmAsyncChildStyleChange(v24, *(_QWORD *)a1, -268435456, v23);
  return 0LL;
}
