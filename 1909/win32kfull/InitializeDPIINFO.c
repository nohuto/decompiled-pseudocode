/*
 * XREFs of InitializeDPIINFO @ 0x1C0030B74
 * Callers:
 *     UpdateWindowSpriteDPI @ 0x1C002FA68 (UpdateWindowSpriteDPI.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E85C8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     GetMonitorRectForDpiContext @ 0x1C00368A0 (GetMonitorRectForDpiContext.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

char __fastcall InitializeDPIINFO(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v8; // r14d
  __int64 MonitorRectForDpiContext; // rax
  INT ScaledLogPixels; // ebp
  __int64 v11; // rdx
  double v12; // xmm1_8
  double v13; // xmm1_8
  bool v14; // cl
  INT v15; // eax
  INT v16; // ecx
  int v17; // ecx
  __int128 v19; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v20[40]; // [rsp+30h] [rbp-28h] BYREF

  v8 = *(unsigned __int16 *)(*(_QWORD *)(a3 + 40) + 64LL);
  *(_DWORD *)(a1 + 8) = v8;
  *(_DWORD *)(a1 + 12) = v8;
  v19 = *(_OWORD *)GetMonitorRectForDpiContext(&v19, a3, a2);
  *(_QWORD *)(a1 + 16) = v19;
  MonitorRectForDpiContext = GetMonitorRectForDpiContext(v20, a3, 18LL);
  *(_DWORD *)(a1 + 36) = 0;
  v19 = *(_OWORD *)MonitorRectForDpiContext;
  *(_QWORD *)(a1 + 24) = v19;
  LOBYTE(MonitorRectForDpiContext) = -1;
  LOWORD(ScaledLogPixels) = (a2 >> 8) & 0x1FF;
  if ( v8 != 96 )
  {
    MonitorRectForDpiContext = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( MonitorRectForDpiContext )
    {
      MonitorRectForDpiContext = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( *(_QWORD *)(MonitorRectForDpiContext + 448) )
      {
        v14 = (*(_BYTE *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL) + 64LL) & 1) != 0;
        LOBYTE(MonitorRectForDpiContext) = (a2 & 0x4000000F) == 0x40000000;
        if ( (v14 & (unsigned __int8)MonitorRectForDpiContext) != 0 )
        {
          ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels((unsigned __int16)v8);
          v15 = EngMulDiv(*(_DWORD *)(a1 + 16), ScaledLogPixels, 96);
          v16 = *(_DWORD *)(a1 + 20);
          *(_DWORD *)(a1 + 16) = v15;
          LODWORD(MonitorRectForDpiContext) = EngMulDiv(v16, ScaledLogPixels, 96);
          *(_DWORD *)(a1 + 20) = MonitorRectForDpiContext;
        }
      }
    }
  }
  *(_DWORD *)(a1 + 32) = (unsigned __int16)ScaledLogPixels;
  if ( (_WORD)ScaledLogPixels )
  {
    LODWORD(MonitorRectForDpiContext) = DrvIsUniformSpaceMapping(*(_QWORD *)(gpDispInfo + 16LL));
    if ( (_DWORD)MonitorRectForDpiContext
      && a4
      && (LODWORD(MonitorRectForDpiContext) = IsTopLevelWindow(a4), (_DWORD)MonitorRectForDpiContext) )
    {
      MonitorRectForDpiContext = *(_QWORD *)(a3 + 40);
      *(_DWORD *)(a1 + 36) |= 1u;
      v17 = *(unsigned __int16 *)(MonitorRectForDpiContext + 68);
      *(_DWORD *)(a1 + 12) = v17;
      v13 = (double)v17;
    }
    else
    {
      v13 = (double)v8;
    }
    v12 = v13 / (double)(unsigned __int16)ScaledLogPixels;
  }
  else
  {
    if ( a4 )
    {
      v11 = *(_QWORD *)(a4 + 40);
      if ( (*(_DWORD *)(v11 + 232) & 0x10000000) == 0 )
        *(_DWORD *)(a1 + 12) = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a4 + 16) + 416LL) + 284LL);
      LOBYTE(MonitorRectForDpiContext) = *(_DWORD *)(v11 + 288) & 0xF;
      if ( (_BYTE)MonitorRectForDpiContext == 2 && (*(_DWORD *)(v11 + 288) & 0x20000000) != 0 )
      {
        MonitorRectForDpiContext = *(_QWORD *)(a3 + 40);
        *(_DWORD *)(a1 + 36) |= 2u;
        *(_DWORD *)(a1 + 32) = v8;
        *(_DWORD *)(a1 + 12) = *(unsigned __int16 *)(MonitorRectForDpiContext + 68);
      }
    }
    v12 = DOUBLE_1_0;
  }
  *(double *)a1 = v12;
  return MonitorRectForDpiContext;
}
