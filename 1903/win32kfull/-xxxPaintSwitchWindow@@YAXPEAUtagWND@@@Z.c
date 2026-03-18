/*
 * XREFs of ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F4980
 * Callers:
 *     xxxSwitchWndProc @ 0x1C01F6320 (xxxSwitchWndProc.c)
 * Callees:
 *     DrawEdge @ 0x1C008D37C (DrawEdge.c)
 *     FillRect @ 0x1C008DA04 (FillRect.c)
 *     GetDPIServerInfo @ 0x1C0091344 (GetDPIServerInfo.c)
 *     _GetClientRect @ 0x1C0091CCC (_GetClientRect.c)
 *     _GetKeyState @ 0x1C0110D00 (_GetKeyState.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F3A20 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F3D3C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F453C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

void __fastcall xxxPaintSwitchWindow(struct tagWND *a1)
{
  struct tagSwitchWndInfo *v2; // rbx
  __int64 v3; // rdx
  HDC DCEx; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 DPIServerInfo; // rbp
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // ecx
  LONG v13; // eax
  int v14; // edx
  LONG v15; // ecx
  LONG v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct tagSwitchWndInfo *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  struct tagSwitchWndInfo *v24; // rbx
  int v25; // [rsp+20h] [rbp-58h]
  RECT v26; // [rsp+50h] [rbp-28h] BYREF

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
      DPIServerInfo = GetDPIServerInfo();
      v10 = *(unsigned int *)(DPIServerInfo + 20);
      v11 = 2 * *(_DWORD *)(DPIServerInfo + 16);
      *((_DWORD *)v2 + 23) += v11;
      *((_DWORD *)v2 + 25) -= v11;
      *((_DWORD *)v2 + 26) -= v10;
      *((_DWORD *)v2 + 24) += v10;
      *((_DWORD *)v2 + 24) = *((_DWORD *)v2 + 26) - *(_DWORD *)(DPIServerInfo + 20);
      if ( !*((_DWORD *)v2 + 27) )
        goto LABEL_10;
      if ( GetKeyState(0x12u, v10, v8, v9) >= 0 )
        goto LABEL_21;
      if ( !*((_DWORD *)v2 + 27) )
      {
LABEL_10:
        if ( (_GetAsyncKeyState(18LL, v10, v8) & 0x8000u) == 0LL )
          goto LABEL_21;
      }
      v12 = *(int *)(DPIServerInfo + 16) >> 1;
      v13 = *((_DWORD *)v2 + 23) - v12;
      v14 = *(int *)(DPIServerInfo + 20) >> 1;
      v26.right = *((_DWORD *)v2 + 25) + v12;
      v15 = v14 + *((_DWORD *)v2 + 26);
      v26.left = v13;
      v16 = *((_DWORD *)v2 + 24) - v14;
      v26.bottom = v15;
      v26.top = v16;
      DrawEdge(DCEx, &v26, 10, 15);
      if ( *((_DWORD *)v2 + 27) )
      {
        if ( GetKeyState(0x12u, v17, v18, v19) >= 0 )
          goto LABEL_21;
        if ( *((_DWORD *)v2 + 27) )
        {
LABEL_15:
          xxxPaintIconsInSwitchWindow(a1, v2, DCEx, *((_DWORD *)v2 + 13), v25, *((_DWORD *)v2 + 11), 0, 0, 0LL);
          v20 = Getpswi(a1);
          v24 = v20;
          if ( v20
            && (!*((_DWORD *)v20 + 27) || GetKeyState(0x12u, v21, v22, v23) < 0)
            && (*((_DWORD *)v24 + 27) || (_GetAsyncKeyState(18LL, v21, v22) & 0x8000u) != 0LL) )
          {
            DrawSwitchWndHilite(v24, DCEx, *((_DWORD *)v24 + 17), *((_DWORD *)v24 + 18), 1);
          }
          goto LABEL_21;
        }
      }
      if ( (_GetAsyncKeyState(18LL, v17, v18) & 0x8000u) != 0LL )
        goto LABEL_15;
LABEL_21:
      _ReleaseDC(DCEx);
    }
  }
}
