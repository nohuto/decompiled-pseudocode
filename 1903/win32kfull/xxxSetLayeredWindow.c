/*
 * XREFs of xxxSetLayeredWindow @ 0x1C0048844
 * Callers:
 *     ComposeWindow @ 0x1C0045458 (ComposeWindow.c)
 *     xxxSetWindowStyle @ 0x1C009B250 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E8748 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     GreGetSprite @ 0x1C0009468 (GreGetSprite.c)
 *     DwmAsyncTextChange @ 0x1C0020340 (DwmAsyncTextChange.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0022D88 (IsToplevelWindowDesktopComposed.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C00245E0 (UserGetRedirectedWindowOrigin.c)
 *     IsDesktopWindow @ 0x1C002477C (IsDesktopWindow.c)
 *     TrackLayeredZorder @ 0x1C00270F4 (TrackLayeredZorder.c)
 *     zzzUpdateLayeredWindow @ 0x1C0028DD8 (zzzUpdateLayeredWindow.c)
 *     GreUpdateSpriteClipRgn @ 0x1C00293A4 (GreUpdateSpriteClipRgn.c)
 *     UpdateWindowSpriteDPI @ 0x1C00295F8 (UpdateWindowSpriteDPI.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C004507C (DwmAsyncChildStyleChange.c)
 *     SendDwmIconChange @ 0x1C00483E8 (SendDwmIconChange.c)
 *     IsWindowBeingDestroyed @ 0x1C0048A98 (IsWindowBeingDestroyed.c)
 *     CreateSprite @ 0x1C0048AE8 (CreateSprite.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00C3604 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxRedrawWindow @ 0x1C00C3908 (xxxRedrawWindow.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C00C8D90 (_GetTopLevelWindow.c)
 *     IsChildWindowDpiBoundary @ 0x1C00CDE50 (IsChildWindowDpiBoundary.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C0118198 (IsChildWindowDpiIsolationEnabled.c)
 *     xxxUpdateThreadsWindows @ 0x1C0202528 (xxxUpdateThreadsWindows.c)
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
  __int64 v19; // r8
  void *v20; // rax
  __int64 Sprite; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  int v25; // ebx
  void *v26; // rax
  __int64 DCEx; // rax
  __int64 v28; // rbx
  LONG *v29; // r8
  LONG v30; // ecx
  __int64 v31; // rcx
  __int64 RectRgnIndirect; // rax
  __int64 v33; // rbx
  __int64 v34; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  struct tagSIZE v39; // [rsp+50h] [rbp-30h] BYREF
  struct tagPOINT v40; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v41[8]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v42; // [rsp+68h] [rbp-18h] BYREF
  __int64 v43; // [rsp+70h] [rbp-10h]
  __int64 v44; // [rsp+78h] [rbp-8h]
  __int64 v45; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v46; // [rsp+C8h] [rbp+48h] BYREF

  v3 = 0;
  if ( a3 )
    *a3 = 0LL;
  TopLevelWindow = (struct tagWND *)GetTopLevelWindow(a1);
  if ( TopLevelWindow
    && (TopLevelWindow == a1
     || *((_WORD *)a1 + 128) >= 0x602u
     || (unsigned int)IsChildWindowDpiIsolationEnabled(a1, *((_QWORD *)a1 + 13))
     && (unsigned int)IsChildWindowDpiBoundary(a1)) )
  {
    v3 = 1;
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
      if ( (unsigned int)IsTopLevelWindow(a1) )
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
        v20 = (void *)ReferenceDwmApiPort(v18, v17, v19);
        DwmAsyncTextChange(v20, *(_QWORD *)a1);
      }
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v41);
      zzzLockDisplayAreaAndInvalidateDCCache(a1, 17LL, 0LL);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v41);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
      {
        if ( !a2 )
          return updated;
        DCEx = _GetDCEx(*((_QWORD *)a1 + 13), 0LL, 3LL);
        v28 = DCEx;
        if ( DCEx )
        {
          v29 = (LONG *)*((_QWORD *)a1 + 5);
          v45 = 0LL;
          v40.x = v29[22];
          v30 = v29[23];
          v46 = 0LL;
          v40.y = v30;
          v39.cx = v29[24] - v29[22];
          v39.cy = v29[25] - v29[23];
          UserGetRedirectedWindowOrigin(DCEx, (__int64)&v45);
          v31 = *((_QWORD *)a1 + 5);
          LODWORD(v46) = *(_DWORD *)(v31 + 88) - v45;
          HIDWORD(v46) = *(_DWORD *)(v31 + 92) - HIDWORD(v45);
          updated = zzzUpdateLayeredWindow(a1, v28, &v40, &v39, v28, (__int64)&v46, 0, 0LL, 0xCu, 0LL);
          _ReleaseDC(v28);
        }
      }
      else
      {
        a2 = 0;
      }
      if ( a2 )
      {
        RectRgnIndirect = GreCreateRectRgnIndirect(*((_QWORD *)a1 + 5) + 88LL);
        v33 = *((_QWORD *)a1 + 13);
        v34 = RectRgnIndirect;
        v42 = 0LL;
        v43 = 0LL;
        v44 = 0LL;
        if ( v33 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v42 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v42;
          v43 = v33;
          HMLockObject(v33);
          GreOffsetRgn(v34, (unsigned int)-*(_DWORD *)(*(_QWORD *)(v33 + 40) + 104LL));
        }
        xxxRedrawWindow((struct tagWND *)v33);
        if ( v33 )
          ThreadUnlock1(v37, v36, v38);
        xxxUpdateThreadsWindows(gptiCurrent, a1, v34);
        GreDeleteObject(v34);
      }
      return updated;
    }
    return 2151546883LL;
  }
  Sprite = GreGetSprite(v9, *(struct PDEVOBJ **)a1);
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x20u;
  v24 = *((_QWORD *)a1 + 5);
  *(_DWORD *)(v24 + 232) |= 0x40u;
  if ( a3 )
    *a3 = Sprite;
  v25 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL);
  v26 = (void *)ReferenceDwmApiPort(v24, v22, v23);
  DwmAsyncChildStyleChange(v26, *(_QWORD *)a1, -268435456, v25);
  return 0LL;
}
