/*
 * XREFs of ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01BBEE4
 * Callers:
 *     xxxSwitchWndProc @ 0x1C01BD650 (xxxSwitchWndProc.c)
 * Callees:
 *     DrawEdge @ 0x1C0010DBC (DrawEdge.c)
 *     FillRect @ 0x1C009F914 (FillRect.c)
 *     _GetClientRect @ 0x1C00E9968 (_GetClientRect.c)
 *     _GetKeyState @ 0x1C00ECA24 (_GetKeyState.c)
 *     GetDPIServerInfo @ 0x1C00FB01C (GetDPIServerInfo.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01BB03C (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01BB320 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01BBAF4 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

void __fastcall xxxPaintSwitchWindow(struct tagWND *a1)
{
  struct tagSwitchWndInfo *v2; // rbx
  __int64 v3; // rdx
  HDC DCEx; // rsi
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 DPIServerInfo; // rbp
  __int64 v9; // r8
  int v10; // ecx
  __int64 v11; // rdx
  int v12; // ecx
  LONG v13; // eax
  int v14; // edx
  LONG v15; // ecx
  LONG v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  struct tagSwitchWndInfo *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  struct tagSwitchWndInfo *v22; // rbx
  int v23; // [rsp+20h] [rbp-58h]
  RECT v24; // [rsp+50h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
  {
    v2 = Getpswi(a1);
    if ( v2 )
    {
      DCEx = (HDC)_GetDCEx(a1, 0LL, 0x10000LL);
      if ( !*((_DWORD *)v2 + 27) )
        goto LABEL_6;
      if ( (GetKeyState(0x12u, v3) & 0x8000u) == 0LL )
        goto LABEL_21;
      if ( !*((_DWORD *)v2 + 27) )
      {
LABEL_6:
        if ( (_GetAsyncKeyState(18LL, v3, v5) & 0x8000u) == 0LL )
          goto LABEL_21;
      }
      GetClientRect((__int64)a1, (__int64)v2 + 92);
      FillRect(DCEx, (LPCRECT)((char *)v2 + 92), *(HBRUSH *)(gpsi + 4816LL));
      DPIServerInfo = GetDPIServerInfo(v7, v6);
      v10 = *(_DWORD *)(DPIServerInfo + 16);
      v11 = (unsigned int)-*(_DWORD *)(DPIServerInfo + 20);
      *((_DWORD *)v2 + 26) -= *(_DWORD *)(DPIServerInfo + 20);
      *((_DWORD *)v2 + 24) -= v11;
      v10 *= -2;
      *((_DWORD *)v2 + 23) -= v10;
      *((_DWORD *)v2 + 25) += v10;
      *((_DWORD *)v2 + 24) = *((_DWORD *)v2 + 26) - *(_DWORD *)(DPIServerInfo + 20);
      if ( !*((_DWORD *)v2 + 27) )
        goto LABEL_10;
      if ( (GetKeyState(0x12u, v11) & 0x8000u) == 0LL )
        goto LABEL_21;
      if ( !*((_DWORD *)v2 + 27) )
      {
LABEL_10:
        if ( (_GetAsyncKeyState(18LL, v11, v9) & 0x8000u) == 0LL )
          goto LABEL_21;
      }
      v12 = *(int *)(DPIServerInfo + 16) >> 1;
      v13 = *((_DWORD *)v2 + 23) - v12;
      v14 = *(int *)(DPIServerInfo + 20) >> 1;
      v24.right = *((_DWORD *)v2 + 25) + v12;
      v15 = v14 + *((_DWORD *)v2 + 26);
      v24.left = v13;
      v16 = *((_DWORD *)v2 + 24) - v14;
      v24.bottom = v15;
      v24.top = v16;
      DrawEdge(DCEx, &v24, 10, 15);
      if ( *((_DWORD *)v2 + 27) )
      {
        if ( (GetKeyState(0x12u, v17) & 0x8000u) == 0LL )
          goto LABEL_21;
        if ( *((_DWORD *)v2 + 27) )
        {
LABEL_15:
          xxxPaintIconsInSwitchWindow(
            a1,
            v2,
            (unsigned __int64)DCEx,
            *((_DWORD *)v2 + 13),
            v23,
            *((_DWORD *)v2 + 11),
            0,
            0,
            0LL);
          v19 = Getpswi(a1);
          v22 = v19;
          if ( v19
            && (!*((_DWORD *)v19 + 27) || (GetKeyState(0x12u, v20) & 0x8000u) != 0LL)
            && (*((_DWORD *)v22 + 27) || (_GetAsyncKeyState(18LL, v20, v21) & 0x8000u) != 0LL) )
          {
            DrawSwitchWndHilite(v22, DCEx, *((_DWORD *)v22 + 17), *((_DWORD *)v22 + 18), 1);
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
