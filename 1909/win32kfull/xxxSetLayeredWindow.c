/*
 * XREFs of xxxSetLayeredWindow @ 0x1C008D304
 * Callers:
 *     xxxSetWindowStyle @ 0x1C003C020 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     ComposeWindow @ 0x1C0089E28 (ComposeWindow.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E85C8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     GreGetSprite @ 0x1C0009468 (GreGetSprite.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00291F8 (IsToplevelWindowDesktopComposed.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C002AA50 (UserGetRedirectedWindowOrigin.c)
 *     IsDesktopWindow @ 0x1C002ABEC (IsDesktopWindow.c)
 *     TrackLayeredZorder @ 0x1C002D564 (TrackLayeredZorder.c)
 *     zzzUpdateLayeredWindow @ 0x1C002F248 (zzzUpdateLayeredWindow.c)
 *     GreUpdateSpriteClipRgn @ 0x1C002F814 (GreUpdateSpriteClipRgn.c)
 *     UpdateWindowSpriteDPI @ 0x1C002FA68 (UpdateWindowSpriteDPI.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0064CD4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxRedrawWindow @ 0x1C0064FD8 (xxxRedrawWindow.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C006A460 (_GetTopLevelWindow.c)
 *     IsChildWindowDpiBoundary @ 0x1C006F520 (IsChildWindowDpiBoundary.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C0089A4C (DwmAsyncChildStyleChange.c)
 *     SendDwmIconChange @ 0x1C008CDB8 (SendDwmIconChange.c)
 *     DwmAsyncTextChange @ 0x1C008CF08 (DwmAsyncTextChange.c)
 *     IsWindowBeingDestroyed @ 0x1C008D558 (IsWindowBeingDestroyed.c)
 *     CreateSprite @ 0x1C008D5A8 (CreateSprite.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C00F2158 (IsChildWindowDpiIsolationEnabled.c)
 *     xxxUpdateThreadsWindows @ 0x1C0202278 (xxxUpdateThreadsWindows.c)
 */

__int64 __fastcall xxxSetLayeredWindow(__int64 BugCheckParameter2, int a2, __int64 *a3)
{
  int v3; // ebx
  __int64 TopLevelWindow; // rax
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
  int v27; // eax
  __int64 DCEx; // rax
  __int64 v29; // rbx
  LONG *v30; // r8
  LONG v31; // ecx
  __int64 v32; // rcx
  __int64 RectRgnIndirect; // rax
  __int64 v34; // rbx
  __int64 v35; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  struct tagSIZE v40; // [rsp+50h] [rbp-30h] BYREF
  struct tagPOINT v41; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v42[8]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v43; // [rsp+68h] [rbp-18h] BYREF
  __int64 v44; // [rsp+70h] [rbp-10h]
  __int64 v45; // [rsp+78h] [rbp-8h]
  __int64 v46; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v47; // [rsp+C8h] [rbp+48h] BYREF

  v3 = 0;
  if ( a3 )
    *a3 = 0LL;
  TopLevelWindow = GetTopLevelWindow(BugCheckParameter2);
  if ( TopLevelWindow )
  {
    if ( TopLevelWindow == BugCheckParameter2
      || *(_WORD *)(BugCheckParameter2 + 256) >= 0x602u
      || (v27 = IsChildWindowDpiIsolationEnabled(BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 104)),
          v27 && (unsigned int)IsChildWindowDpiBoundary((struct tagWND *)BugCheckParameter2)) )
    {
      v3 = 1;
    }
  }
  LOBYTE(v8) = IsDesktopWindow(BugCheckParameter2);
  if ( v8 && (unsigned int)IsWindowDesktopComposed(v9) )
    v3 = 1;
  if ( !v3 )
    return 2151546883LL;
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 40) + 232LL) & 0x20) == 0 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(BugCheckParameter2) )
    {
      result = CreateSprite(*(_QWORD *)(gpDispInfo + 40LL), BugCheckParameter2, v10 + 88, a3);
      updated = result;
      if ( (int)result < 0 )
        return result;
      SetOrClrWF(1, BugCheckParameter2, 0xA08u, 1);
      TrackLayeredZorder((struct tagWND *)BugCheckParameter2);
      if ( (unsigned int)IsTopLevelWindow(BugCheckParameter2) )
      {
        v14 = *(_QWORD *)(BugCheckParameter2 + 40);
        v15 = *(HRGN *)(v14 + 168);
        if ( v15 )
        {
          if ( (*(_BYTE *)(v14 + 21) & 8) == 0 )
            GreUpdateSpriteClipRgn(v13, *(struct PDEVOBJ **)BugCheckParameter2, v15, 0);
        }
      }
      v16 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 40) + 256LL));
      UpdateWindowSpriteDPI((_QWORD *)BugCheckParameter2, v16);
      if ( (unsigned int)IsToplevelWindowDesktopComposed(BugCheckParameter2) )
      {
        SendDwmIconChange((__int64 *)BugCheckParameter2);
        v20 = (void *)ReferenceDwmApiPort(v18, v17, v19);
        DwmAsyncTextChange(v20, *(_QWORD *)BugCheckParameter2);
      }
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v42);
      zzzLockDisplayAreaAndInvalidateDCCache(BugCheckParameter2, 17, 0LL);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v42);
      if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 31LL) & 0x10) != 0 )
      {
        if ( !a2 )
          return updated;
        DCEx = _GetDCEx(*(_QWORD *)(BugCheckParameter2 + 104), 0LL, 3LL);
        v29 = DCEx;
        if ( DCEx )
        {
          v30 = *(LONG **)(BugCheckParameter2 + 40);
          v46 = 0LL;
          v41.x = v30[22];
          v31 = v30[23];
          v47 = 0LL;
          v41.y = v31;
          v40.cx = v30[24] - v30[22];
          v40.cy = v30[25] - v30[23];
          UserGetRedirectedWindowOrigin(DCEx, (__int64)&v46);
          v32 = *(_QWORD *)(BugCheckParameter2 + 40);
          LODWORD(v47) = *(_DWORD *)(v32 + 88) - v46;
          HIDWORD(v47) = *(_DWORD *)(v32 + 92) - HIDWORD(v46);
          updated = zzzUpdateLayeredWindow(
                      (struct tagWND *)BugCheckParameter2,
                      v29,
                      &v41,
                      &v40,
                      v29,
                      (__int64)&v47,
                      0,
                      0LL,
                      0xCu,
                      0LL);
          _ReleaseDC(v29);
        }
      }
      else
      {
        a2 = 0;
      }
      if ( a2 )
      {
        RectRgnIndirect = GreCreateRectRgnIndirect(*(_QWORD *)(BugCheckParameter2 + 40) + 88LL);
        v34 = *(_QWORD *)(BugCheckParameter2 + 104);
        v35 = RectRgnIndirect;
        v43 = 0LL;
        v44 = 0LL;
        v45 = 0LL;
        if ( v34 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v43 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v43;
          v44 = v34;
          HMLockObject(v34);
          GreOffsetRgn(v35, (unsigned int)-*(_DWORD *)(*(_QWORD *)(v34 + 40) + 104LL));
        }
        xxxRedrawWindow((struct tagWND *)v34, 0LL, v35, 1157);
        if ( v34 )
          ThreadUnlock1(v38, v37, v39);
        xxxUpdateThreadsWindows(gptiCurrent, BugCheckParameter2, v35);
        GreDeleteObject(v35);
      }
      return updated;
    }
    return 2151546883LL;
  }
  Sprite = GreGetSprite(v9, *(struct PDEVOBJ **)BugCheckParameter2);
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 40) + 232LL) &= ~0x20u;
  v24 = *(_QWORD *)(BugCheckParameter2 + 40);
  *(_DWORD *)(v24 + 232) |= 0x40u;
  if ( a3 )
    *a3 = Sprite;
  v25 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 40) + 232LL);
  v26 = (void *)ReferenceDwmApiPort(v24, v22, v23);
  DwmAsyncChildStyleChange(v26, *(_QWORD *)BugCheckParameter2, -268435456, v25);
  return 0LL;
}
