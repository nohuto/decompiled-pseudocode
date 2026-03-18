/*
 * XREFs of xxxSetLayeredWindow @ 0x1C00C433C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxSetWindowStyle @ 0x1C00442C0 (xxxSetWindowStyle.c)
 *     ComposeWindow @ 0x1C00C3B30 (ComposeWindow.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01B0B28 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     GreGetSprite @ 0x1C00068A0 (GreGetSprite.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     IsChildWindowDpiBoundary @ 0x1C002A5A8 (IsChildWindowDpiBoundary.c)
 *     xxxRedrawWindow @ 0x1C002AA30 (xxxRedrawWindow.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C002DEDC (IsToplevelWindowDesktopComposed.c)
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0033D9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     TrackLayeredZorder @ 0x1C0074B68 (TrackLayeredZorder.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0076400 (UserGetRedirectedWindowOrigin.c)
 *     IsDesktopWindow @ 0x1C0076580 (IsDesktopWindow.c)
 *     UpdateWindowSpriteDPI @ 0x1C0077A60 (UpdateWindowSpriteDPI.c)
 *     zzzUpdateLayeredWindow @ 0x1C007CD40 (zzzUpdateLayeredWindow.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C3FCC (DwmAsyncChildStyleChange.c)
 *     CreateSprite @ 0x1C00C4558 (CreateSprite.c)
 *     IsWindowBeingDestroyed @ 0x1C00C476C (IsWindowBeingDestroyed.c)
 *     DwmAsyncTextChange @ 0x1C00C47BC (DwmAsyncTextChange.c)
 *     SendDwmIconChange @ 0x1C00C4848 (SendDwmIconChange.c)
 *     GreUpdateSpriteClipRgn @ 0x1C00C4F48 (GreUpdateSpriteClipRgn.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C00F79E8 (IsChildWindowDpiIsolationEnabled.c)
 *     xxxUpdateThreadsWindows @ 0x1C01C83A4 (xxxUpdateThreadsWindows.c)
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
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  void *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 Sprite; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  int v26; // ebx
  void *v27; // rax
  int v28; // eax
  HDC DCEx; // rbx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 RectRgnIndirect; // rax
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  struct tagSIZE v40; // [rsp+50h] [rbp-30h] BYREF
  struct tagPOINT v41; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v42[8]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v43[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v44; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v45; // [rsp+C8h] [rbp+48h] BYREF

  v3 = 0;
  if ( a3 )
    *a3 = 0LL;
  TopLevelWindow = (struct tagWND *)GetTopLevelWindow((__int64)a1);
  if ( TopLevelWindow )
  {
    if ( TopLevelWindow == a1
      || *((_WORD *)a1 + 120) >= 0x602u
      || (v28 = IsChildWindowDpiIsolationEnabled(a1, *((_QWORD *)a1 + 10)),
          v28 && (unsigned int)IsChildWindowDpiBoundary(a1)) )
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
      result = CreateSprite(*(HDEV *)(gpDispInfo + 40LL), a1, (struct tagRECT *)(v10 + 88));
      updated = result;
      if ( (int)result < 0 )
        return result;
      SetOrClrWF(1, (__int64)a1, 2568, 1);
      TrackLayeredZorder(a1);
      if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
      {
        v14 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL);
        if ( v14 )
          GreUpdateSpriteClipRgn(v13, *(_QWORD *)a1, v14, 0LL);
      }
      v15 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
      UpdateWindowSpriteDPI(a1, v15);
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        SendDwmIconChange((ULONG_PTR)a1);
        v19 = (void *)ReferenceDwmApiPort(v17, v16, v18);
        DwmAsyncTextChange(v19);
      }
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v42);
      zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 17, 0LL);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v42);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
      {
        if ( !a2 )
          return updated;
        DCEx = (HDC)_GetDCEx(*((_QWORD *)a1 + 10), 0LL, 3LL);
        if ( DCEx )
        {
          v30 = *((_QWORD *)a1 + 5);
          v44 = 0LL;
          v41 = *(struct tagPOINT *)(v30 + 88);
          v40.cx = *(_DWORD *)(v30 + 96) - *(_DWORD *)(v30 + 88);
          v40.cy = *(_DWORD *)(v30 + 100) - *(_DWORD *)(v30 + 92);
          UserGetRedirectedWindowOrigin((__int64)DCEx, (__int64)&v44);
          v31 = *((_QWORD *)a1 + 5);
          LODWORD(v45) = *(_DWORD *)(v31 + 88) - v44;
          HIDWORD(v45) = *(_DWORD *)(v31 + 92) - HIDWORD(v44);
          updated = zzzUpdateLayeredWindow(a1, DCEx, &v41, &v40, DCEx, (struct tagPOINT *)&v45, 0, 0LL, 0xCu, 0LL);
          _ReleaseDC(DCEx);
        }
      }
      else
      {
        a2 = 0;
      }
      if ( a2 )
      {
        RectRgnIndirect = GreCreateRectRgnIndirect(*((_QWORD *)a1 + 5) + 88LL, v20, v21);
        v34 = *((_QWORD *)a1 + 10);
        v35 = RectRgnIndirect;
        if ( v34 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33);
          v43[0] = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = v43;
          v43[1] = v34;
          _InterlockedAdd((volatile signed __int32 *)(v34 + 8), 1u);
          GreOffsetRgn(
            v35,
            (unsigned int)-*(_DWORD *)(*(_QWORD *)(v34 + 40) + 104LL),
            (unsigned int)-*(_DWORD *)(*(_QWORD *)(v34 + 40) + 108LL));
        }
        xxxRedrawWindow((struct tagWND *)v34, 0LL, v35, 1157);
        if ( v34 )
          ThreadUnlock1(v38, v37, v39);
        xxxUpdateThreadsWindows(gptiCurrent, a1, v35);
        GreDeleteObject(v35);
      }
      return updated;
    }
    return 2151546883LL;
  }
  Sprite = GreGetSprite(v9, *(struct PDEVOBJ **)a1);
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x20u;
  v25 = *((_QWORD *)a1 + 5);
  *(_DWORD *)(v25 + 232) |= 0x40u;
  if ( a3 )
    *a3 = Sprite;
  v26 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL);
  v27 = (void *)ReferenceDwmApiPort(v25, v23, v24);
  DwmAsyncChildStyleChange(v27, *(_QWORD *)a1, -268435456, v26);
  return 0LL;
}
