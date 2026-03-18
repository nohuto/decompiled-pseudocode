/*
 * XREFs of UpdateWindowMonitor @ 0x1C0068A30
 * Callers:
 *     xxxInheritWindowMonitor @ 0x1C0068FC8 (xxxInheritWindowMonitor.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00CBF4C (UpdateMonitorForWindowAndChildren.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E5B14 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C0018C6C (_SetDeferredDpiStateForWindowAndChildren.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C001A858 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     UpdateWindowSpriteDPI @ 0x1C002FA68 (UpdateWindowSpriteDPI.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1C00349E0 (UpdateTopLevelWindowDPITransform.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C0065240 (xxxInternalInvalidate.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C0068CD4 (ShouldUseLogPixelsForWindowMetrics.c)
 *     ?IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z @ 0x1C0070208 (-IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z.c)
 *     ComposeWindow @ 0x1C0089E28 (ComposeWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     RecreateRedirectionBitmap @ 0x1C00CC328 (RecreateRedirectionBitmap.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C00F4FD8 (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
 */

void __fastcall UpdateWindowMonitor(struct tagWND *a1, _QWORD *a2)
{
  __int64 v4; // rdx
  int v5; // ecx
  __int16 v6; // r8
  int v7; // eax
  __int64 v8; // rdx
  __int16 v9; // cx
  _DWORD *v10; // rax
  _DWORD *v11; // rcx
  _DWORD *v12; // rax
  __int64 v13; // rbx
  BOOL v14; // ebp
  __int64 v15; // rax
  __int64 v16; // rcx
  struct tagSHADOW *Shadow; // rax
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  __int64 v19; // rcx
  int v20; // ebx
  char v21; // [rsp+58h] [rbp+10h] BYREF

  while ( a2 )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL) = *a2;
    v4 = *((_QWORD *)a1 + 5);
    v5 = *(_DWORD *)(v4 + 232);
    if ( (v5 & 0x4000000) != 0
      || ((*(_DWORD *)(v4 + 288) & 0xF) == 2 && (*(_DWORD *)(v4 + 288) & 0x20000000) != 0
        ? (v6 = *(_WORD *)(a2[5] + 68LL))
        : (v6 = *(_WORD *)(a2[5] + 64LL)),
          v6 != *(_WORD *)(v4 + 284)) )
    {
      v7 = 0x4000000;
    }
    else
    {
      v7 = 0;
    }
    *(_DWORD *)(v4 + 232) = v7 | v5 & 0xFBFFFFFF;
    if ( (unsigned int)IsTopLevelWindow(a1) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
      SetDeferredDpiStateForWindowAndChildren(a1, 1, 0);
    v8 = *((_QWORD *)a1 + 5);
    if ( (*(_DWORD *)(v8 + 288) & 0xF) == 2 && (*(_DWORD *)(v8 + 288) & 0x20000000) != 0 )
      v9 = *(_WORD *)(a2[5] + 68LL);
    else
      v9 = *(_WORD *)(a2[5] + 64LL);
    *(_WORD *)(v8 + 284) = v9;
    v10 = (_DWORD *)*((_QWORD *)a1 + 36);
    if ( v10 )
    {
      --*v10;
      v11 = (_DWORD *)*((_QWORD *)a1 + 36);
      if ( !*v11 )
        Win32FreePool(v11);
      *((_QWORD *)a1 + 36) = 0LL;
    }
    v12 = (_DWORD *)a2[39];
    *((_QWORD *)a1 + 36) = v12;
    ++*v12;
    v13 = *((_QWORD *)a1 + 5);
    v14 = 0;
    *(_DWORD *)(v13 + 232) ^= (*(_DWORD *)(v13 + 232) ^ ((unsigned int)ShouldUseLogPixelsForWindowMetrics(a1) << 27)) & 0x8000000;
    if ( (unsigned int)IsChildWindowCoordinateSpaceBoundary(a1) )
    {
      WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(a1);
      v14 = WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(*((struct tagWND **)a1 + 13));
    }
    v15 = *((_QWORD *)a1 + 5);
    if ( v14 )
    {
      if ( (*(_BYTE *)(v15 + 26) & 8) == 0 )
        goto LABEL_42;
    }
    else if ( (*(_DWORD *)(v15 + 232) & 0x20) != 0 && (unsigned int)IsChildWindowCoordinateSpaceBoundary(a1) )
    {
LABEL_42:
      ComposeWindow(a1);
    }
    if ( !(unsigned int)IsTopLevelWindow(a1) && !v14 )
    {
      v16 = *((_QWORD *)a1 + 27);
      if ( v16 )
      {
        Win32FreePool(v16);
        *((_QWORD *)a1 + 27) = 0LL;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
        UpdateWindowSpriteDPI(a1, (__int64)a2);
      return;
    }
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x4000000) != 0 )
    {
      if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
      {
        if ( *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) )
        {
          if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL) + 64LL) & 1) != 0 )
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
    UpdateWindowSpriteDPI(a1, (__int64)a2);
    UpdateTopLevelWindowDPITransform((__int64)a1, (__int64)a2);
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 10LL) & 2) != 0 )
    {
      Shadow = FindShadow(a1);
      a1 = Shadow ? (struct tagWND *)*((_QWORD *)Shadow + 1) : 0LL;
      if ( a1 )
        continue;
    }
    return;
  }
}
