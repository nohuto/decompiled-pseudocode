/*
 * XREFs of ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F435C
 * Callers:
 *     xxxNextWindow @ 0x1C01F5198 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F5A18 (xxxOldNextWindow.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F3A20 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F3D3C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z @ 0x1C01F4100 (-NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01F413C (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F453C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

__int64 __fastcall xxxMoveSwitchWndHilite(struct tagWND *a1, struct tagSwitchWndInfo *a2, int a3)
{
  int v3; // edi
  int v4; // esi
  int v5; // r11d
  struct tagSwitchWndInfo *v6; // rbx
  int v8; // r12d
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  HDC DCEx; // r14
  __int64 *v14; // rcx
  __int64 v15; // r13
  int v17; // [rsp+20h] [rbp-58h]
  BOOL v18; // [rsp+90h] [rbp+18h]

  v3 = *((_DWORD *)a2 + 17);
  v4 = *((_DWORD *)a2 + 18);
  v5 = a3;
  v6 = a2;
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
  if ( v4 == *((_DWORD *)a2 + 15) - 1 )
  {
    v11 = *((_DWORD *)a2 + 16);
    v12 = 1;
  }
  else
  {
    v11 = *((_DWORD *)a2 + 14);
    v12 = 0;
  }
  if ( v3 >= v11 - 1 )
  {
    if ( v12 )
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
  v18 = v5 == 0;
  *((_QWORD *)v6 + 4) = NextPrevPhwnd(v6, *((HWND **)v6 + 4), v18);
  DCEx = (HDC)_GetDCEx(a1, 0LL, 0x10000LL);
  DrawSwitchWndHilite(v6, DCEx, *((_DWORD *)v6 + 17), *((_DWORD *)v6 + 18), 0);
  v14 = (__int64 *)*((_QWORD *)v6 + 4);
  *((_DWORD *)v6 + 18) = v4;
  *((_DWORD *)v6 + 17) = v10;
  v15 = *v14;
  if ( v8 )
  {
    xxxPaintIconsInSwitchWindow(a1, v6, DCEx, *((_DWORD *)v6 + 13), v17, 0, 1, v18, 0LL);
    v6 = Getpswi(a1);
  }
  if ( v6 )
  {
    DrawSwitchWndHilite(v6, DCEx, v10, v4, 1);
    _ReleaseDC(DCEx);
    xxxWindowEvent(0x8005u, a1, 4294967292LL, (unsigned int)(v10 + v4 * *((_DWORD *)v6 + 14) + 1), 1);
  }
  else
  {
    _ReleaseDC(DCEx);
  }
  return v15;
}
