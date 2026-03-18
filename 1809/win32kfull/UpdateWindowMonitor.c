/*
 * XREFs of UpdateWindowMonitor @ 0x1C00437C0
 * Callers:
 *     xxxInheritWindowMonitor @ 0x1C006F3B0 (xxxInheritWindowMonitor.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C01051A8 (UpdateMonitorForWindowAndChildren.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01D1110 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     ComposeWindow @ 0x1C000D698 (ComposeWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00107D4 (RecreateRedirectionBitmap.c)
 *     ?IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z @ 0x1C0039E54 (-IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z.c)
 *     xxxInternalInvalidate @ 0x1C0039F20 (xxxInternalInvalidate.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C006F350 (ShouldUseLogPixelsForWindowMetrics.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00732C0 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     UpdateWindowSpriteDPI @ 0x1C0074A68 (UpdateWindowSpriteDPI.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0079E2C (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1C0079F78 (UpdateTopLevelWindowDPITransform.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C011190C (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
 */

void __fastcall UpdateWindowMonitor(struct tagWND *a1, _QWORD *a2)
{
  __int64 v4; // r8
  int v5; // edx
  int v6; // eax
  __int64 DesktopWindow; // rax
  __int64 v8; // rdx
  _DWORD *v9; // rax
  _DWORD *v10; // rcx
  _DWORD *v11; // rax
  __int64 v12; // rbx
  BOOL v13; // ebp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagSHADOW *Shadow; // rax
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  char v20; // dl
  __int64 v21; // rcx
  int v22; // ebx
  char v23; // [rsp+58h] [rbp+10h] BYREF

  while ( a2 )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL) = *a2;
    v4 = *((_QWORD *)a1 + 5);
    v5 = *(_DWORD *)(v4 + 232);
    if ( (v5 & 0x4000000) != 0 || *(_WORD *)(a2[5] + 64LL) != *(_WORD *)(v4 + 284) )
      v6 = 0x4000000;
    else
      v6 = 0;
    *(_DWORD *)(v4 + 232) = v6 | v5 & 0xFBFFFFFF;
    if ( *((_QWORD *)a1 + 10) )
    {
      DesktopWindow = GetDesktopWindow(a1);
      if ( v8 == DesktopWindow && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
        SetDeferredDpiStateForWindowAndChildren(a1);
    }
    *(_WORD *)(*((_QWORD *)a1 + 5) + 284LL) = *(_WORD *)(a2[5] + 64LL);
    v9 = (_DWORD *)*((_QWORD *)a1 + 34);
    if ( v9 )
    {
      --*v9;
      v10 = (_DWORD *)*((_QWORD *)a1 + 34);
      if ( !*v10 )
        Win32FreePool(v10);
      *((_QWORD *)a1 + 34) = 0LL;
    }
    v11 = (_DWORD *)a2[39];
    *((_QWORD *)a1 + 34) = v11;
    ++*v11;
    v12 = *((_QWORD *)a1 + 5);
    v13 = 0;
    *(_DWORD *)(v12 + 232) ^= (*(_DWORD *)(v12 + 232) ^ ((unsigned int)ShouldUseLogPixelsForWindowMetrics(a1) << 27)) & 0x8000000;
    if ( (unsigned int)IsChildWindowCoordinateSpaceBoundary(a1) )
    {
      WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(a1);
      v13 = WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(*((struct tagWND **)a1 + 10));
    }
    v14 = *((_QWORD *)a1 + 5);
    if ( v13 )
    {
      if ( (*(_BYTE *)(v14 + 26) & 8) != 0 )
        goto LABEL_15;
      v20 = 1;
    }
    else
    {
      if ( (*(_DWORD *)(v14 + 232) & 0x20) == 0 || !(unsigned int)IsChildWindowCoordinateSpaceBoundary(a1) )
        goto LABEL_15;
      v20 = 2;
    }
    ComposeWindow(a1, v20);
LABEL_15:
    if ( !*((_QWORD *)a1 + 10) || (v15 = GetDesktopWindow(a1), v16 != v15) )
    {
      if ( !v13 )
      {
        v17 = *((_QWORD *)a1 + 25);
        if ( v17 )
        {
          Win32FreePool(v17);
          *((_QWORD *)a1 + 25) = 0LL;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
          UpdateWindowSpriteDPI(a1, a2);
        return;
      }
    }
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x4000000) != 0 )
    {
      if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
      {
        if ( *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) )
        {
          if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 8LL) + 64LL) & 1) != 0 )
          {
            v21 = *((_QWORD *)a1 + 5);
            if ( (*(_DWORD *)(v21 + 288) & 0x4000000F) == 0x40000000
              && (*(_BYTE *)(v21 + 27) & 0x20) != 0
              && (*(_BYTE *)(v21 + 26) & 0x20) == 0 )
            {
              GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
              v22 = RecreateRedirectionBitmap(a1, 0, 0, 0, 0, 0LL);
              GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
              if ( v22 >= 0 )
              {
                UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v23);
                xxxInternalInvalidate(a1, (HRGN)1, 0x85u);
                UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v23);
              }
            }
          }
        }
      }
    }
    UpdateWindowSpriteDPI(a1, a2);
    UpdateTopLevelWindowDPITransform(a1, a2);
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 14) + 8LL) + 10LL) & 2) != 0 )
    {
      Shadow = FindShadow(a1);
      a1 = Shadow ? (struct tagWND *)*((_QWORD *)Shadow + 1) : 0LL;
      if ( a1 )
        continue;
    }
    return;
  }
}
