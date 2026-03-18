/*
 * XREFs of ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01BB928
 * Callers:
 *     xxxNextWindow @ 0x1C01BC6C8 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01BCDF8 (xxxOldNextWindow.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01BB03C (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01BB320 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z @ 0x1C01BB6D0 (-NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01BB70C (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01BBAF4 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

__int64 __fastcall xxxMoveSwitchWndHilite(struct tagWND *a1, struct tagSwitchWndInfo *a2, int a3)
{
  int v3; // edi
  int v4; // esi
  struct tagSwitchWndInfo *v5; // rbx
  int v6; // r11d
  int v8; // r15d
  int v9; // eax
  int v10; // edi
  int v11; // ecx
  int v12; // eax
  BOOL v13; // r13d
  HDC DCEx; // rbp
  __int64 *v15; // rcx
  __int64 v16; // r12
  int v18; // [rsp+20h] [rbp-58h]

  v3 = *((_DWORD *)a2 + 17);
  v4 = *((_DWORD *)a2 + 18);
  v5 = a2;
  v6 = a3;
  v8 = 0;
  if ( a3 )
  {
    if ( v3 <= 0 )
    {
      if ( v4 <= 0 )
      {
        if ( *((_DWORD *)a2 + 12) )
        {
          v8 = 1;
          v3 = *((_DWORD *)a2 + 14);
          v9 = *((_DWORD *)a2 + 13) - v3;
          if ( v9 < 0 )
            v9 += *((_DWORD *)a2 + 10);
          *((_DWORD *)a2 + 13) = v9;
          goto LABEL_11;
        }
        v4 = *((_DWORD *)a2 + 15);
        v3 = *((_DWORD *)a2 + 16);
      }
      else
      {
        v3 = *((_DWORD *)a2 + 14);
      }
      --v4;
    }
LABEL_11:
    v10 = v3 - 1;
    goto LABEL_23;
  }
  v11 = *((_DWORD *)a2 + 15) - 1;
  if ( v4 == v11 )
    v12 = *((_DWORD *)a2 + 16);
  else
    v12 = *((_DWORD *)a2 + 14);
  if ( v3 >= v12 - 1 )
  {
    if ( v4 == v11 )
    {
      if ( *((_DWORD *)a2 + 12) )
      {
        v8 = 1;
        *((_DWORD *)a2 + 13) = NextPrevTaskIndex(a2, *((_DWORD *)a2 + 13), *((_DWORD *)a2 + 14), 1);
      }
      else
      {
        v4 = 0;
      }
    }
    else
    {
      ++v4;
    }
    v10 = 0;
  }
  else
  {
    v10 = v3 + 1;
  }
LABEL_23:
  v13 = v6 == 0;
  *((_QWORD *)v5 + 4) = NextPrevPhwnd(v5, *((HWND **)v5 + 4), v13);
  DCEx = (HDC)_GetDCEx(a1, 0LL, 0x10000LL);
  DrawSwitchWndHilite(v5, DCEx, *((_DWORD *)v5 + 17), *((_DWORD *)v5 + 18), 0);
  v15 = (__int64 *)*((_QWORD *)v5 + 4);
  *((_DWORD *)v5 + 18) = v4;
  *((_DWORD *)v5 + 17) = v10;
  v16 = *v15;
  if ( v8 )
  {
    xxxPaintIconsInSwitchWindow(a1, v5, DCEx, *((_DWORD *)v5 + 13), v18, 0, 1, v13, 0LL);
    v5 = Getpswi(a1);
  }
  if ( v5 )
  {
    DrawSwitchWndHilite(v5, DCEx, v10, v4, 1);
    _ReleaseDC(DCEx);
    xxxWindowEvent(0x8005u, (__int64)a1, -4, v10 + v4 * *((_DWORD *)v5 + 14) + 1, 1);
  }
  else
  {
    _ReleaseDC(DCEx);
  }
  return v16;
}
