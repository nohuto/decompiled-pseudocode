/*
 * XREFs of UpdateWindowMonitor @ 0x1C002DF20
 * Callers:
 *     xxxInheritWindowMonitor @ 0x1C0030244 (xxxInheritWindowMonitor.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00E8258 (UpdateMonitorForWindowAndChildren.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01AE04C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z @ 0x1C0028118 (-IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C002AC50 (xxxInternalInvalidate.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C002F2E4 (ShouldUseLogPixelsForWindowMetrics.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1C0073610 (UpdateTopLevelWindowDPITransform.c)
 *     UpdateWindowSpriteDPI @ 0x1C0077A60 (UpdateWindowSpriteDPI.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C007CD20 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00C1874 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     ComposeWindow @ 0x1C00C3B30 (ComposeWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00E8330 (RecreateRedirectionBitmap.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C00FAA00 (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
 */

void __fastcall UpdateWindowMonitor(struct tagWND *a1, _QWORD *a2)
{
  __int64 v4; // r8
  int v5; // edx
  int v6; // eax
  __int64 DesktopWindow; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  BOOL v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  struct tagSHADOW *Shadow; // rax
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ebx
  char v21; // [rsp+58h] [rbp+10h] BYREF

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
        SetDeferredDpiStateForWindowAndChildren(a1, 1LL);
    }
    *(_WORD *)(*((_QWORD *)a1 + 5) + 284LL) = *(_WORD *)(a2[5] + 64LL);
    v9 = *((_QWORD *)a1 + 5);
    v10 = 0;
    *(_DWORD *)(v9 + 232) ^= (*(_DWORD *)(v9 + 232) ^ ((unsigned int)ShouldUseLogPixelsForWindowMetrics(a1) << 27)) & 0x8000000;
    if ( (unsigned int)IsChildWindowCoordinateSpaceBoundary(a1) )
    {
      WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(a1);
      v10 = WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(*((struct tagWND **)a1 + 10));
    }
    v11 = *((_QWORD *)a1 + 5);
    if ( v10 )
    {
      if ( (*(_BYTE *)(v11 + 26) & 8) != 0 )
        goto LABEL_11;
    }
    else if ( (*(_DWORD *)(v11 + 232) & 0x20) == 0 || !(unsigned int)IsChildWindowCoordinateSpaceBoundary(a1) )
    {
      goto LABEL_11;
    }
    ComposeWindow(a1);
LABEL_11:
    v12 = *((_QWORD *)a1 + 10);
    if ( !v12 || (v13 = GetDesktopWindow(a1), v12 != v13) )
    {
      if ( !v10 )
      {
        v14 = *((_QWORD *)a1 + 25);
        if ( v14 )
        {
          Win32FreePool(v14);
          *((_QWORD *)a1 + 25) = 0LL;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
          UpdateWindowSpriteDPI(a1, a2);
        return;
      }
    }
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x4000000) != 0 )
    {
      if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12) )
      {
        if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17) + 448) )
        {
          if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18) + 448)
                                        + 8LL)
                          + 52LL) & 1) != 0 )
          {
            v19 = *((_QWORD *)a1 + 5);
            if ( (*(_DWORD *)(v19 + 288) & 0x4000000F) == 0x40000000
              && (*(_BYTE *)(v19 + 27) & 0x20) != 0
              && (*(_BYTE *)(v19 + 26) & 0x20) == 0 )
            {
              GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
              v20 = RecreateRedirectionBitmap(a1, 0, 0LL);
              GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
              if ( v20 >= 0 )
              {
                UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v21);
                xxxInternalInvalidate(a1, (HRGN)1, 0x85u);
                UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v21);
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
