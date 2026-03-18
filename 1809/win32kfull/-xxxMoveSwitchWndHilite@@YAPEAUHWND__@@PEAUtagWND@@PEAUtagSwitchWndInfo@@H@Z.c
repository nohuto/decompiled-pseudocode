/*
 * XREFs of ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01DE44C
 * Callers:
 *     xxxNextWindow @ 0x1C01DF29C (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01DFA50 (xxxOldNextWindow.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C015DFE8 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01DDE24 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z @ 0x1C01DE1E8 (-NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01DE224 (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01DE658 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

__int64 __fastcall xxxMoveSwitchWndHilite(struct tagWND *a1, struct tagSwitchWndInfo *a2, int a3)
{
  int v3; // edi
  int v4; // r15d
  int v5; // esi
  int v7; // r11d
  int v9; // eax
  int v10; // edi
  int v11; // ecx
  int v12; // eax
  BOOL v13; // r12d
  HDC DCEx; // rbp
  struct tagSwitchWndInfo *v15; // rax
  struct tagSwitchWndInfo *v16; // rcx
  __int64 v18; // rbx
  struct tagSwitchWndInfo *v19; // rax
  unsigned int v20; // [rsp+20h] [rbp-48h]

  v3 = *((_DWORD *)a2 + 17);
  v4 = 0;
  v5 = *((_DWORD *)a2 + 18);
  v7 = a3;
  if ( a3 )
  {
    if ( v3 <= 0 )
    {
      if ( v5 <= 0 )
      {
        if ( *((_DWORD *)a2 + 12) )
        {
          v4 = 1;
          v3 = *((_DWORD *)a2 + 14);
          v9 = *((_DWORD *)a2 + 13) - v3;
          if ( v9 < 0 )
            v9 += *((_DWORD *)a2 + 10);
          *((_DWORD *)a2 + 13) = v9;
          goto LABEL_11;
        }
        v5 = *((_DWORD *)a2 + 15);
        v3 = *((_DWORD *)a2 + 16);
      }
      else
      {
        v3 = *((_DWORD *)a2 + 14);
      }
      --v5;
    }
LABEL_11:
    v10 = v3 - 1;
    goto LABEL_22;
  }
  v11 = *((_DWORD *)a2 + 15) - 1;
  if ( v5 == v11 )
    v12 = *((_DWORD *)a2 + 16);
  else
    v12 = *((_DWORD *)a2 + 14);
  if ( v3 >= v12 - 1 )
  {
    if ( v5 == v11 )
    {
      if ( *((_DWORD *)a2 + 12) )
      {
        v4 = 1;
        *((_DWORD *)a2 + 13) = NextPrevTaskIndex(a2, *((_DWORD *)a2 + 13), *((_DWORD *)a2 + 14), 1);
        v10 = 0;
      }
      else
      {
        v10 = 0;
        v5 = 0;
      }
    }
    else
    {
      v10 = 0;
      ++v5;
    }
  }
  else
  {
    v10 = v3 + 1;
  }
LABEL_22:
  v13 = v7 == 0;
  *((_QWORD *)a2 + 4) = NextPrevPhwnd(a2, *((HWND **)a2 + 4), v13);
  DCEx = (HDC)_GetDCEx(a1, 0LL, 0x10000LL);
  xxxDrawSwitchWndHilite(a2, DCEx, *((_DWORD *)a2 + 17), *((_DWORD *)a2 + 18), 0);
  v15 = Getpswi(a1);
  v16 = v15;
  if ( v15 )
  {
    *((_DWORD *)v15 + 18) = v5;
    *((_DWORD *)v15 + 17) = v10;
    v18 = **((_QWORD **)v15 + 4);
    if ( v4 )
    {
      xxxPaintIconsInSwitchWindow(a1, v15, DCEx, *((_DWORD *)v15 + 13), v20, 0, 1, v13, 0LL);
      v16 = Getpswi(a1);
    }
    if ( v16 )
    {
      xxxDrawSwitchWndHilite(v16, DCEx, v10, v5, 1);
      _ReleaseDC(DCEx);
      v19 = Getpswi(a1);
      if ( v19 )
        xxxWindowEvent(0x8005u, (__int64)a1, -4, v10 + v5 * *((_DWORD *)v19 + 14) + 1, 1u);
    }
    else
    {
      _ReleaseDC(DCEx);
    }
    return v18;
  }
  else
  {
    _ReleaseDC(DCEx);
    return 0LL;
  }
}
