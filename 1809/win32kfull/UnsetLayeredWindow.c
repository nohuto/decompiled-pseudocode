/*
 * XREFs of UnsetLayeredWindow @ 0x1C000D7F8
 * Callers:
 *     ComposeWindow @ 0x1C000D698 (ComposeWindow.c)
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     xxxSetWindowStyle @ 0x1C002C580 (xxxSetWindowStyle.c)
 *     DeleteFadeSprite @ 0x1C0152EF0 (DeleteFadeSprite.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C000DBA0 (DwmAsyncChildStyleChange.c)
 *     GreDeleteSprite @ 0x1C000DC58 (GreDeleteSprite.c)
 *     UnsetRedirectedWindow @ 0x1C000DFCC (UnsetRedirectedWindow.c)
 *     GetStyleWindow @ 0x1C0039EC0 (GetStyleWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C003AB88 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     RedirectDCEs @ 0x1C0042500 (RedirectDCEs.c)
 *     UpdateSprite @ 0x1C007622C (UpdateSprite.c)
 *     _SetLayeredWindowAttributes @ 0x1C0077A14 (_SetLayeredWindowAttributes.c)
 */

__int64 __fastcall UnsetLayeredWindow(struct tagWND *a1, char a2)
{
  int v4; // esi
  __int64 v5; // rcx
  int v6; // eax
  int v7; // ebp
  void *v8; // rax
  struct tagWND *StyleWindow; // rax
  __int64 v10; // rcx
  void *v12; // rax
  char v13; // [rsp+80h] [rbp+18h] BYREF

  v4 = GreIsDynamicModeChangeLocked(*(_QWORD *)(gpDispInfo + 40LL));
  if ( v4 )
    GreLockVisRgnWithDmcLockAcquiredEx(*(_QWORD *)(gpDispInfo + 40LL));
  else
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( (a2 & 1) == 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0
    && (v7 = SetLayeredWindowAttributes(a1), v7 >= 0) )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 0x20u;
    v12 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v12);
  }
  else
  {
    v5 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v5 + 31) & 0x10) != 0 )
    {
      UpdateSprite(*(HDEV *)(gpDispInfo + 40LL), a1, 0LL, 0LL, 0LL, 0LL, 0, 0LL, 0x80000000, 0LL);
      v5 = *((_QWORD *)a1 + 5);
    }
    if ( (*(_BYTE *)(v5 + 27) & 0x20) != 0 )
    {
      UnsetRedirectedWindow(a1);
      v5 = *((_QWORD *)a1 + 5);
    }
    *(_DWORD *)(v5 + 232) &= ~0x20u;
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x40u;
    v6 = IsWindowDesktopComposed(a1);
    v7 = GreDeleteSprite(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1, 0LL, v6);
    SetOrClrWF(0LL, a1, 2568LL, 1LL);
    v8 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v8);
    StyleWindow = (struct tagWND *)GetStyleWindow(a1, 2848LL);
    if ( StyleWindow && StyleWindow != a1 )
      RedirectDCEs(a1);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
      zzzLockDisplayAreaAndInvalidateDCCache(a1, 17LL, 0LL);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
    }
  }
  v10 = *(_QWORD *)(gpDispInfo + 40LL);
  if ( v4 )
    GreUnlockVisRgnWithDmcLockAcquiredEx(v10);
  else
    GreUnlockVisRgn(v10);
  return (unsigned int)v7;
}
