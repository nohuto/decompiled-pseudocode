/*
 * XREFs of UpdateWindowMonitor @ 0x1C00C7360
 * Callers:
 *     xxxInheritWindowMonitor @ 0x1C00C78F8 (xxxInheritWindowMonitor.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00ED36C (UpdateMonitorForWindowAndChildren.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E5C94 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     UpdateWindowSpriteDPI @ 0x1C00295F8 (UpdateWindowSpriteDPI.c)
 *     ComposeWindow @ 0x1C0045458 (ComposeWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C008C248 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C008F63C (_SetDeferredDpiStateForWindowAndChildren.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1C0093CB8 (UpdateTopLevelWindowDPITransform.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C00C3B70 (xxxInternalInvalidate.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C00C7604 (ShouldUseLogPixelsForWindowMetrics.c)
 *     ?IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z @ 0x1C00CEB38 (-IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z.c)
 *     RecreateRedirectionBitmap @ 0x1C00ED748 (RecreateRedirectionBitmap.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C011AFC8 (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  struct tagSHADOW *Shadow; // rax
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  char v22; // dl
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  int v33; // ebx
  char v34; // [rsp+58h] [rbp+10h] BYREF

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
      {
        v22 = 1;
        goto LABEL_43;
      }
    }
    else if ( (*(_DWORD *)(v15 + 232) & 0x20) != 0 && (unsigned int)IsChildWindowCoordinateSpaceBoundary(a1) )
    {
      v22 = 2;
LABEL_43:
      ComposeWindow(a1, v22);
    }
    if ( !(unsigned int)IsTopLevelWindow(a1) && !v14 )
    {
      v19 = *((_QWORD *)a1 + 27);
      if ( v19 )
      {
        Win32FreePool(v19);
        *((_QWORD *)a1 + 27) = 0LL;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
        UpdateWindowSpriteDPI(a1, (__int64)a2);
      return;
    }
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x4000000) != 0 )
    {
      if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18) )
      {
        if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25) + 448) )
        {
          if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v26,
                                                        v27,
                                                        v28)
                                                    + 448)
                                        + 8LL)
                          + 64LL) & 1) != 0 )
          {
            v32 = *((_QWORD *)a1 + 5);
            if ( (*(_DWORD *)(v32 + 288) & 0x4000000F) == 0x40000000
              && (*(_BYTE *)(v32 + 27) & 0x20) != 0
              && (*(_BYTE *)(v32 + 26) & 0x20) == 0 )
            {
              GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v29, v30, v31);
              v33 = RecreateRedirectionBitmap(a1, 0, 0LL);
              GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
              if ( v33 >= 0 )
              {
                UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v34);
                xxxInternalInvalidate(a1, (HRGN)1, 0x85u);
                UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v34);
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
