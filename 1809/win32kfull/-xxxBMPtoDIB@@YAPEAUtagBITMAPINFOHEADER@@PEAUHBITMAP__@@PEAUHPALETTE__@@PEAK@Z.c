/*
 * XREFs of ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01553AC
 * Callers:
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C015522C (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxBMPtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@@Z @ 0x1C01F7618 (-xxxBMPtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C00549E8 (GreExtGetObjectW.c)
 *     GreGetDIBitsInternal @ 0x1C0054DA4 (GreGetDIBitsInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxRealizePalette @ 0x1C0098390 (xxxRealizePalette.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     _SelectPalette @ 0x1C00FE484 (_SelectPalette.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     UIntMult @ 0x1C01C736C (UIntMult.c)
 */

struct tagBITMAPINFO *__fastcall xxxBMPtoDIB(HSURF a1, __int64 a2, unsigned int *a3)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  struct tagBITMAPINFO *v16; // rbx
  __int128 v17; // xmm1
  __int64 v18; // xmm0_8
  HDC CompatibleDC; // rsi
  __int64 v20; // r14
  BOOL v21; // edi
  __int64 v22; // rdx
  __int64 ThreadWin32Thread; // rax
  UINT v25; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v26[3]; // [rsp+58h] [rbp-41h] BYREF
  char v27[4]; // [rsp+70h] [rbp-29h] BYREF
  __int64 uMultiplicand; // [rsp+74h] [rbp-25h]
  __int16 v29; // [rsp+80h] [rbp-19h]
  __int16 v30; // [rsp+82h] [rbp-17h]
  _OWORD v31[6]; // [rsp+90h] [rbp-9h] BYREF
  UINT puResult; // [rsp+118h] [rbp+7Fh] BYREF

  if ( (unsigned int)GreExtGetObjectW(a1, 32LL, v27) )
  {
    v5 = v29 * v30;
    if ( (unsigned __int16)(v29 * v30) > 1u )
    {
      v6 = 4;
      if ( v5 > 4u )
      {
        if ( v5 > 8u )
        {
          if ( *(_WORD *)(gptiCurrent + 632LL) < 0x400u )
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
    memset(v31, 0, 0x28uLL);
    v7 = HIDWORD(uMultiplicand);
    LODWORD(v31[1]) = 0;
    LODWORD(v31[0]) = 40;
    *(_QWORD *)((char *)v31 + 4) = uMultiplicand;
    WORD6(v31[0]) = 1;
    HIWORD(v31[0]) = v6;
    if ( UIntMult(uMultiplicand, v6, &puResult) >= 0 && UIntMult(((puResult + 31) >> 3) & 0x1FFFFFFC, v7, &v25) >= 0 )
    {
      v9 = 0;
      if ( v6 > 8u )
      {
        if ( ((v6 - 16) & 0xFFEF) == 0 )
        {
          v9 = 12;
          LODWORD(v31[1]) = 3;
        }
      }
      else
      {
        v9 = 4 * (1 << v8);
      }
      v10 = v25;
      v11 = v9 + 40 + v25;
      if ( v11 >= v9 + 40 )
      {
        v12 = v9 + 40 + v25;
        v13 = Win32AllocPool(v11, 1650684757LL);
        v16 = (struct tagBITMAPINFO *)v13;
        if ( v13 )
        {
          if ( a3 )
            *a3 = v12;
          v17 = v31[1];
          *(_OWORD *)v13 = v31[0];
          v18 = *(_QWORD *)&v31[2];
          *(_OWORD *)(v13 + 16) = v17;
          *(_QWORD *)(v13 + 32) = v18;
          CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL), v14, v15);
          if ( CompatibleDC )
          {
            v20 = 0LL;
            PushW32ThreadLock((__int64)v16, v26, (__int64)Win32FreePool);
            if ( a2 )
            {
              v20 = SelectPalette((__int64)CompatibleDC, a2, 0);
              xxxRealizePalette(CompatibleDC);
            }
            v21 = GreGetDIBitsInternal(
                    CompatibleDC,
                    a1,
                    0,
                    v7,
                    (__int64)v16 + v16->bmiHeader.biSize + v9,
                    v16,
                    0,
                    v10,
                    v16->bmiHeader.biSize + v9) != 0;
            if ( v20 )
            {
              SelectPalette((__int64)CompatibleDC, v20, 0);
              xxxRealizePalette(CompatibleDC);
            }
            GreDeleteDC(CompatibleDC);
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22);
            *(_QWORD *)(ThreadWin32Thread + 16) = v26[0];
            if ( v21 )
              return v16;
          }
          Win32FreePool(v16);
        }
      }
    }
  }
  return 0LL;
}
