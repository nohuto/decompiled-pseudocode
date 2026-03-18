/*
 * XREFs of UnsetLayeredWindow @ 0x1C0044CD4
 * Callers:
 *     ComposeWindow @ 0x1C0045458 (ComposeWindow.c)
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     xxxSetWindowStyle @ 0x1C009B250 (xxxSetWindowStyle.c)
 *     DeleteFadeSprite @ 0x1C01E93A0 (DeleteFadeSprite.c)
 * Callees:
 *     RedirectDCEs @ 0x1C00246A0 (RedirectDCEs.c)
 *     GetStyleWindow @ 0x1C0025520 (GetStyleWindow.c)
 *     UpdateSprite @ 0x1C002AD80 (UpdateSprite.c)
 *     _SetLayeredWindowAttributes @ 0x1C002BD00 (_SetLayeredWindowAttributes.c)
 *     UnsetRedirectedWindow @ 0x1C0044AF0 (UnsetRedirectedWindow.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C004507C (DwmAsyncChildStyleChange.c)
 *     GreDeleteSprite @ 0x1C0045134 (GreDeleteSprite.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00C3604 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 */

__int64 __fastcall UnsetLayeredWindow(struct tagWND *a1, char a2)
{
  __int64 v4; // rdx
  int v5; // esi
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // eax
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // r8
  void *v13; // rax
  struct tagWND *StyleWindow; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v20; // rdx
  void *v21; // rax
  char v22; // [rsp+80h] [rbp+18h] BYREF

  v5 = GreIsDynamicModeChangeLocked(*(_QWORD *)(gpDispInfo + 40LL));
  if ( v5 )
    GreLockVisRgnWithDmcLockAcquiredEx(*(_QWORD *)(gpDispInfo + 40LL));
  else
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v4, gpDispInfo, v6);
  if ( (a2 & 1) == 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0
    && (v10 = SetLayeredWindowAttributes(a1, 0, 0xFFu, 18), v10 >= 0) )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 0x20u;
    v21 = (void *)ReferenceDwmApiPort(*((_QWORD *)a1 + 5), v20, v7);
    DwmAsyncChildStyleChange(v21);
  }
  else
  {
    v8 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v8 + 31) & 0x10) != 0 )
    {
      UpdateSprite(*(HDEV *)(gpDispInfo + 40LL), a1, v7, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0LL, 0x80000000, 0LL);
      v8 = *((_QWORD *)a1 + 5);
    }
    if ( (*(_BYTE *)(v8 + 27) & 0x20) != 0 )
    {
      UnsetRedirectedWindow(a1, 1);
      v8 = *((_QWORD *)a1 + 5);
    }
    *(_DWORD *)(v8 + 232) &= ~0x20u;
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x40u;
    v9 = IsWindowDesktopComposed(a1);
    v10 = GreDeleteSprite(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1, 0LL, v9);
    SetOrClrWF(0LL, a1, 2568LL, 1LL);
    v13 = (void *)ReferenceDwmApiPort(*((_QWORD *)a1 + 5), v11, v12);
    DwmAsyncChildStyleChange(v13);
    StyleWindow = (struct tagWND *)GetStyleWindow((__int64)a1, 2848);
    if ( StyleWindow && StyleWindow != a1 )
      RedirectDCEs(a1, v15, v16, v17);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v22);
      zzzLockDisplayAreaAndInvalidateDCCache(a1, 17LL, 0LL);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v22);
    }
  }
  v18 = *(_QWORD *)(gpDispInfo + 40LL);
  if ( v5 )
    GreUnlockVisRgnWithDmcLockAcquiredEx(v18);
  else
    GreUnlockVisRgn(v18);
  return (unsigned int)v10;
}
