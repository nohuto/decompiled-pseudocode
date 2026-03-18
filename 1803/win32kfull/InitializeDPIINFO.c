/*
 * XREFs of InitializeDPIINFO @ 0x1C0079F6C
 * Callers:
 *     UpdateWindowSpriteDPI @ 0x1C0077A60 (UpdateWindowSpriteDPI.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01B0B28 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GetMonitorRectForDpi @ 0x1C00737A0 (GetMonitorRectForDpi.c)
 */

char __fastcall InitializeDPIINFO(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v8; // r15d
  INT ScaledLogPixels; // esi
  __int64 v10; // rdx
  __int64 ThreadWin32Thread; // rax
  double v12; // xmm1_8
  __int64 v13; // rdx
  __int64 v14; // rdx
  bool v15; // cl
  INT v16; // eax
  INT v17; // ecx
  __int128 v19; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20[5]; // [rsp+30h] [rbp-28h] BYREF

  v8 = *(unsigned __int16 *)(*(_QWORD *)(a3 + 40) + 64LL);
  LOWORD(ScaledLogPixels) = (a2 >> 8) & 0x1FF;
  *(_DWORD *)(a1 + 8) = v8;
  *(_DWORD *)(a1 + 12) = v8;
  v19 = *(_OWORD *)GetMonitorRectForDpi((__int64 *)&v19, a3, ScaledLogPixels);
  *(_QWORD *)(a1 + 16) = v19;
  v19 = *(_OWORD *)GetMonitorRectForDpi(v20, a3, 0);
  LOBYTE(ThreadWin32Thread) = v19;
  *(_QWORD *)(a1 + 24) = v19;
  if ( v8 != 96 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10);
    if ( ThreadWin32Thread )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
      if ( *(_QWORD *)(ThreadWin32Thread + 448) )
      {
        v15 = (*(_BYTE *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14) + 448)
                                      + 8LL)
                        + 52LL) & 1) != 0;
        LOBYTE(ThreadWin32Thread) = (a2 & 0x4000000F) == 0x40000000;
        if ( (v15 & (unsigned __int8)ThreadWin32Thread) != 0 )
        {
          ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels((unsigned __int16)v8);
          v16 = EngMulDiv(*(_DWORD *)(a1 + 16), ScaledLogPixels, 96);
          v17 = *(_DWORD *)(a1 + 20);
          *(_DWORD *)(a1 + 16) = v16;
          LODWORD(ThreadWin32Thread) = EngMulDiv(v17, ScaledLogPixels, 96);
          *(_DWORD *)(a1 + 20) = ThreadWin32Thread;
        }
      }
    }
  }
  if ( (_WORD)ScaledLogPixels )
  {
    LOBYTE(ThreadWin32Thread) = ScaledLogPixels;
    v12 = (double)v8 / (double)(unsigned __int16)ScaledLogPixels;
  }
  else
  {
    if ( a4 )
    {
      ThreadWin32Thread = *(_QWORD *)(a4 + 40);
      if ( (*(_DWORD *)(ThreadWin32Thread + 232) & 0x10000000) == 0 )
      {
        LODWORD(ThreadWin32Thread) = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a4 + 16) + 416LL) + 284LL);
        *(_DWORD *)(a1 + 12) = ThreadWin32Thread;
      }
    }
    v12 = DOUBLE_1_0;
  }
  *(double *)a1 = v12;
  return ThreadWin32Thread;
}
