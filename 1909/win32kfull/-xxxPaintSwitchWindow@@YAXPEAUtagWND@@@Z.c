/*
 * XREFs of ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F4800
 * Callers:
 *     xxxSwitchWndProc @ 0x1C01F61A0 (xxxSwitchWndProc.c)
 * Callees:
 *     _GetClientRect @ 0x1C0011124 (_GetClientRect.c)
 *     _GetKeyState @ 0x1C00EBC40 (_GetKeyState.c)
 *     DrawEdge @ 0x1C012B8CC (DrawEdge.c)
 *     FillRect @ 0x1C012BF54 (FillRect.c)
 *     GetDPIServerInfo @ 0x1C012C168 (GetDPIServerInfo.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F38A0 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F3BBC (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F43BC (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
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
  __int64 v9; // r8
  __int64 DPIServerInfo; // rbp
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  LONG v16; // eax
  int v17; // edx
  LONG v18; // ecx
  LONG v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct tagSwitchWndInfo *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  struct tagSwitchWndInfo *v27; // rbx
  int v28; // [rsp+20h] [rbp-58h]
  RECT v29; // [rsp+50h] [rbp-28h] BYREF

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
      GetClientRect((__int64)a1, (__int64)v2 + 92);
      FillRect(DCEx, (LPCRECT)((char *)v2 + 92), *(HBRUSH *)(gpsi + 4816LL));
      DPIServerInfo = GetDPIServerInfo(v8, v7, v9);
      v13 = *(unsigned int *)(DPIServerInfo + 20);
      v14 = 2 * *(_DWORD *)(DPIServerInfo + 16);
      *((_DWORD *)v2 + 23) += v14;
      *((_DWORD *)v2 + 25) -= v14;
      *((_DWORD *)v2 + 26) -= v13;
      *((_DWORD *)v2 + 24) += v13;
      *((_DWORD *)v2 + 24) = *((_DWORD *)v2 + 26) - *(_DWORD *)(DPIServerInfo + 20);
      if ( !*((_DWORD *)v2 + 27) )
        goto LABEL_10;
      if ( GetKeyState(0x12u, v13, v11, v12) >= 0 )
        goto LABEL_21;
      if ( !*((_DWORD *)v2 + 27) )
      {
LABEL_10:
        if ( (_GetAsyncKeyState(18LL, v13, v11) & 0x8000u) == 0LL )
          goto LABEL_21;
      }
      v15 = *(int *)(DPIServerInfo + 16) >> 1;
      v16 = *((_DWORD *)v2 + 23) - v15;
      v17 = *(int *)(DPIServerInfo + 20) >> 1;
      v29.right = *((_DWORD *)v2 + 25) + v15;
      v18 = v17 + *((_DWORD *)v2 + 26);
      v29.left = v16;
      v19 = *((_DWORD *)v2 + 24) - v17;
      v29.bottom = v18;
      v29.top = v19;
      DrawEdge(DCEx, &v29, 10, 15);
      if ( *((_DWORD *)v2 + 27) )
      {
        if ( GetKeyState(0x12u, v20, v21, v22) >= 0 )
          goto LABEL_21;
        if ( *((_DWORD *)v2 + 27) )
        {
LABEL_15:
          xxxPaintIconsInSwitchWindow(a1, v2, DCEx, *((_DWORD *)v2 + 13), v28, *((_DWORD *)v2 + 11), 0, 0, 0LL);
          v23 = Getpswi(a1);
          v27 = v23;
          if ( v23
            && (!*((_DWORD *)v23 + 27) || GetKeyState(0x12u, v24, v25, v26) < 0)
            && (*((_DWORD *)v27 + 27) || (_GetAsyncKeyState(18LL, v24, v25) & 0x8000u) != 0LL) )
          {
            DrawSwitchWndHilite(v27, DCEx, *((_DWORD *)v27 + 17), *((_DWORD *)v27 + 18), 1);
          }
          goto LABEL_21;
        }
      }
      if ( (_GetAsyncKeyState(18LL, v20, v21) & 0x8000u) != 0LL )
        goto LABEL_15;
LABEL_21:
      _ReleaseDC(DCEx);
    }
  }
}
