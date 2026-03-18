/*
 * XREFs of UnsetLayeredWindow @ 0x1C00896A4
 * Callers:
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 *     xxxSetWindowStyle @ 0x1C003C020 (xxxSetWindowStyle.c)
 *     ComposeWindow @ 0x1C0089E28 (ComposeWindow.c)
 *     DeleteFadeSprite @ 0x1C01E9220 (DeleteFadeSprite.c)
 * Callees:
 *     RedirectDCEs @ 0x1C002AB10 (RedirectDCEs.c)
 *     GetStyleWindow @ 0x1C002B990 (GetStyleWindow.c)
 *     UpdateSprite @ 0x1C00311F0 (UpdateSprite.c)
 *     _SetLayeredWindowAttributes @ 0x1C0032170 (_SetLayeredWindowAttributes.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0064CD4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     UnsetRedirectedWindow @ 0x1C00894C0 (UnsetRedirectedWindow.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C0089A4C (DwmAsyncChildStyleChange.c)
 *     GreDeleteSprite @ 0x1C0089B04 (GreDeleteSprite.c)
 */

__int64 __fastcall UnsetLayeredWindow(struct tagWND *a1, char a2)
{
  int v4; // esi
  __int64 v5; // r8
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // r8
  void *v11; // rax
  struct tagWND *StyleWindow; // rax
  __int64 v13; // rcx
  __int64 v15; // rdx
  void *v16; // rax
  char v17; // [rsp+80h] [rbp+18h] BYREF

  v4 = GreIsDynamicModeChangeLocked(*(_QWORD *)(gpDispInfo + 40LL));
  if ( v4 )
    GreLockVisRgnWithDmcLockAcquiredEx(*(_QWORD *)(gpDispInfo + 40LL));
  else
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( (a2 & 1) == 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0
    && (v8 = SetLayeredWindowAttributes(a1, 0, 0xFFu, 18), v8 >= 0) )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 0x20u;
    v16 = (void *)ReferenceDwmApiPort(*((_QWORD *)a1 + 5), v15, v5);
    DwmAsyncChildStyleChange(v16);
  }
  else
  {
    v6 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v6 + 31) & 0x10) != 0 )
    {
      UpdateSprite(*(HDEV *)(gpDispInfo + 40LL), a1, v5, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0LL, 0x80000000, 0LL);
      v6 = *((_QWORD *)a1 + 5);
    }
    if ( (*(_BYTE *)(v6 + 27) & 0x20) != 0 )
    {
      UnsetRedirectedWindow(a1, 1);
      v6 = *((_QWORD *)a1 + 5);
    }
    *(_DWORD *)(v6 + 232) &= ~0x20u;
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x40u;
    v7 = IsWindowDesktopComposed(a1);
    v8 = GreDeleteSprite(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1, 0LL, v7);
    SetOrClrWF(0LL, a1, 2568LL, 1LL);
    v11 = (void *)ReferenceDwmApiPort(*((_QWORD *)a1 + 5), v9, v10);
    DwmAsyncChildStyleChange(v11);
    StyleWindow = (struct tagWND *)GetStyleWindow((__int64)a1, 2848);
    if ( StyleWindow && StyleWindow != a1 )
      RedirectDCEs(a1);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v17);
      zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 17, 0LL);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v17);
    }
  }
  v13 = *(_QWORD *)(gpDispInfo + 40LL);
  if ( v4 )
    GreUnlockVisRgnWithDmcLockAcquiredEx(v13);
  else
    GreUnlockVisRgn(v13);
  return (unsigned int)v8;
}
