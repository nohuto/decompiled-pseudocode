/*
 * XREFs of ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C0131160
 * Callers:
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0130EE8 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01D2F4C (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0017838 (GreExtGetObjectW.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     GreGetDIBitsInternal @ 0x1C00A60BC (GreGetDIBitsInternal.c)
 *     _SelectPalette @ 0x1C00E5978 (_SelectPalette.c)
 *     xxxRealizePalette @ 0x1C00FD560 (xxxRealizePalette.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     UIntMult @ 0x1C01A9228 (UIntMult.c)
 */

struct tagBITMAPINFO *__fastcall xxxBMPtoDIB(HBRUSH a1, __int64 a2, unsigned int *a3)
{
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // bx
  unsigned int v7; // r12d
  char v8; // r10
  unsigned int v9; // edi
  UINT v10; // r15d
  UINT v11; // eax
  UINT v12; // esi
  __int64 v13; // rax
  struct tagBITMAPINFO *v14; // rbx
  __int128 v15; // xmm1
  __int64 v16; // xmm0_8
  HDC CompatibleDC; // rsi
  __int64 v18; // r14
  BOOL v19; // edi
  __int64 v20; // rdx
  __int64 ThreadWin32Thread; // rax
  UINT v23; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v24[3]; // [rsp+58h] [rbp-41h] BYREF
  char v25[4]; // [rsp+70h] [rbp-29h] BYREF
  __int64 uMultiplicand; // [rsp+74h] [rbp-25h]
  __int16 v27; // [rsp+80h] [rbp-19h]
  __int16 v28; // [rsp+82h] [rbp-17h]
  _OWORD v29[6]; // [rsp+90h] [rbp-9h] BYREF
  UINT puResult; // [rsp+118h] [rbp+7Fh] BYREF

  if ( (unsigned int)GreExtGetObjectW(a1, 32LL, v25) )
  {
    v5 = v27 * v28;
    if ( (unsigned __int16)(v27 * v28) > 1u )
    {
      v6 = 4;
      if ( v5 > 4u )
      {
        if ( v5 > 8u )
        {
          if ( *(_WORD *)(gptiCurrent + 624LL) < 0x400u )
          {
            v6 = 24;
          }
          else if ( v5 > 0x10u )
          {
            v6 = 24;
            if ( v5 > 0x18u )
              v6 = 32;
          }
          else
          {
            v6 = 16;
          }
        }
        else
        {
          v6 = 8;
        }
      }
    }
    else
    {
      v6 = 1;
    }
    memset(v29, 0, 0x28uLL);
    v7 = HIDWORD(uMultiplicand);
    LODWORD(v29[1]) = 0;
    LODWORD(v29[0]) = 40;
    *(_QWORD *)((char *)v29 + 4) = uMultiplicand;
    WORD6(v29[0]) = 1;
    HIWORD(v29[0]) = v6;
    if ( UIntMult(uMultiplicand, v6, &puResult) >= 0 && UIntMult(((puResult + 31) >> 3) & 0x1FFFFFFC, v7, &v23) >= 0 )
    {
      v9 = 0;
      if ( v6 > 8u )
      {
        if ( ((v6 - 16) & 0xFFEF) == 0 )
        {
          v9 = 12;
          LODWORD(v29[1]) = 3;
        }
      }
      else
      {
        v9 = 4 * (1 << v8);
      }
      v10 = v23;
      v11 = v9 + 40 + v23;
      if ( v11 >= v9 + 40 )
      {
        v12 = v9 + 40 + v23;
        v13 = Win32AllocPool(v11, 1650684757LL);
        v14 = (struct tagBITMAPINFO *)v13;
        if ( v13 )
        {
          if ( a3 )
            *a3 = v12;
          v15 = v29[1];
          *(_OWORD *)v13 = v29[0];
          v16 = *(_QWORD *)&v29[2];
          *(_OWORD *)(v13 + 16) = v15;
          *(_QWORD *)(v13 + 32) = v16;
          CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
          if ( CompatibleDC )
          {
            v18 = 0LL;
            PushW32ThreadLock((__int64)v14, v24, (__int64)Win32FreePool);
            if ( a2 )
            {
              v18 = SelectPalette((__int64)CompatibleDC, a2, 0);
              xxxRealizePalette(CompatibleDC);
            }
            v19 = GreGetDIBitsInternal(
                    CompatibleDC,
                    (__int64)a1,
                    0,
                    v7,
                    (__int64)v14 + v14->bmiHeader.biSize + v9,
                    v14,
                    0,
                    v10,
                    v14->bmiHeader.biSize + v9) != 0;
            if ( v18 )
            {
              SelectPalette((__int64)CompatibleDC, v18, 0);
              xxxRealizePalette(CompatibleDC);
            }
            GreDeleteDC(CompatibleDC);
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20);
            *(_QWORD *)(ThreadWin32Thread + 16) = v24[0];
            if ( v19 )
              return v14;
          }
          Win32FreePool(v14);
        }
      }
    }
  }
  return 0LL;
}
