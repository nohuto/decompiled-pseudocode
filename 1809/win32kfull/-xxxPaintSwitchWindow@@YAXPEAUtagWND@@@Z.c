/*
 * XREFs of ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01DEA84
 * Callers:
 *     xxxSwitchWndProc @ 0x1C01E02C0 (xxxSwitchWndProc.c)
 * Callees:
 *     DrawEdge @ 0x1C007AF44 (DrawEdge.c)
 *     FillRect @ 0x1C007B5C0 (FillRect.c)
 *     GetDPIServerInfo @ 0x1C00AB9F8 (GetDPIServerInfo.c)
 *     _GetClientRect @ 0x1C00BC9E8 (_GetClientRect.c)
 *     _GetKeyState @ 0x1C0107788 (_GetKeyState.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C015DFE8 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01DDE24 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01DE658 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

void __fastcall xxxPaintSwitchWindow(struct tagWND *a1)
{
  struct tagSwitchWndInfo *v2; // rbx
  __int64 v3; // rdx
  HDC DCEx; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 DPIServerInfo; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ecx
  LONG v15; // eax
  int v16; // edx
  LONG v17; // ecx
  LONG v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct tagSwitchWndInfo *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  struct tagSwitchWndInfo *v26; // rbx
  int v27; // [rsp+20h] [rbp-58h]
  RECT v28; // [rsp+50h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
  {
    v2 = Getpswi(a1);
    if ( v2 )
    {
      DCEx = (HDC)_GetDCEx(a1, 0LL, 0x10000LL);
      if ( !*((_DWORD *)v2 + 27) )
        goto LABEL_6;
      if ( GetKeyState(0x12u, v3, v5, v6) >= 0 )
        goto LABEL_21;
      if ( !*((_DWORD *)v2 + 27) )
      {
LABEL_6:
        if ( (_GetAsyncKeyState(18LL, v3, v5) & 0x8000u) == 0LL )
          goto LABEL_21;
      }
      GetClientRect((__int64)a1, (__m128i *)((char *)v2 + 92));
      FillRect(DCEx, (LPCRECT)((char *)v2 + 92), *(HBRUSH *)(gpsi + 4816LL));
      DPIServerInfo = GetDPIServerInfo(v8, v7);
      v12 = *(unsigned int *)(DPIServerInfo + 20);
      v13 = 2 * *(_DWORD *)(DPIServerInfo + 16);
      *((_DWORD *)v2 + 23) += v13;
      *((_DWORD *)v2 + 25) -= v13;
      *((_DWORD *)v2 + 26) -= v12;
      *((_DWORD *)v2 + 24) += v12;
      *((_DWORD *)v2 + 24) = *((_DWORD *)v2 + 26) - *(_DWORD *)(DPIServerInfo + 20);
      if ( !*((_DWORD *)v2 + 27) )
        goto LABEL_10;
      if ( GetKeyState(0x12u, v12, v10, v11) >= 0 )
        goto LABEL_21;
      if ( !*((_DWORD *)v2 + 27) )
      {
LABEL_10:
        if ( (_GetAsyncKeyState(18LL, v12, v10) & 0x8000u) == 0LL )
          goto LABEL_21;
      }
      v14 = *(int *)(DPIServerInfo + 16) >> 1;
      v15 = *((_DWORD *)v2 + 23) - v14;
      v16 = *(int *)(DPIServerInfo + 20) >> 1;
      v28.right = *((_DWORD *)v2 + 25) + v14;
      v17 = v16 + *((_DWORD *)v2 + 26);
      v28.left = v15;
      v18 = *((_DWORD *)v2 + 24) - v16;
      v28.bottom = v17;
      v28.top = v18;
      DrawEdge(DCEx, &v28, 10, 15);
      if ( *((_DWORD *)v2 + 27) )
      {
        if ( GetKeyState(0x12u, v19, v20, v21) >= 0 )
          goto LABEL_21;
        if ( *((_DWORD *)v2 + 27) )
        {
LABEL_15:
          xxxPaintIconsInSwitchWindow(a1, v2, DCEx, *((_DWORD *)v2 + 13), v27, *((_DWORD *)v2 + 11), 0, 0, 0LL);
          v22 = Getpswi(a1);
          v26 = v22;
          if ( v22
            && (!*((_DWORD *)v22 + 27) || GetKeyState(0x12u, v23, v24, v25) < 0)
            && (*((_DWORD *)v26 + 27) || (_GetAsyncKeyState(18LL, v23, v24) & 0x8000u) != 0LL) )
          {
            xxxDrawSwitchWndHilite(v26, DCEx, *((_DWORD *)v26 + 17), *((_DWORD *)v26 + 18), 1);
          }
          goto LABEL_21;
        }
      }
      if ( (_GetAsyncKeyState(18LL, v19, v20) & 0x8000u) != 0LL )
        goto LABEL_15;
LABEL_21:
      _ReleaseDC(DCEx);
    }
  }
}
