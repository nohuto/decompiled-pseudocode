/*
 * XREFs of ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C015C618
 * Callers:
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C015C498 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxBMPtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@@Z @ 0x1C020D994 (-xxxBMPtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     GreExtGetObjectW @ 0x1C00338F8 (GreExtGetObjectW.c)
 *     GreGetDIBitsInternal @ 0x1C00340DC (GreGetDIBitsInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     _SelectPalette @ 0x1C0106D94 (_SelectPalette.c)
 *     xxxRealizePalette @ 0x1C0121E60 (xxxRealizePalette.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     UIntMult @ 0x1C01DA728 (UIntMult.c)
 */

struct tagBITMAPINFO *__fastcall xxxBMPtoDIB(HBRUSH a1, __int64 a2, unsigned int *a3)
{
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // r10
  unsigned int v8; // r12d
  unsigned __int16 v9; // r10
  char v10; // r11
  unsigned int v11; // ebx
  UINT v12; // r15d
  UINT v13; // esi
  __int64 v14; // rax
  struct tagBITMAPINFO *v15; // rdi
  __int128 v16; // xmm1
  __int64 v17; // xmm0_8
  HDC CompatibleDC; // rsi
  __int64 v19; // r9
  __int64 v20; // r14
  BOOL v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 ThreadWin32Thread; // rax
  UINT v27; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v28[3]; // [rsp+58h] [rbp-41h] BYREF
  UINT v29[8]; // [rsp+70h] [rbp-29h] BYREF
  __int128 v30; // [rsp+90h] [rbp-9h]
  _OWORD v31[5]; // [rsp+A0h] [rbp+7h] BYREF
  UINT puResult; // [rsp+118h] [rbp+7Fh] BYREF

  memset(v29, 0, sizeof(v29));
  if ( (unsigned int)GreExtGetObjectW(a1, 32LL, (char *)v29) )
  {
    v6 = LOWORD(v29[4]) * HIWORD(v29[4]);
    if ( (unsigned __int16)(LOWORD(v29[4]) * HIWORD(v29[4])) > 1u )
    {
      v7 = 4;
      if ( v6 > 4u )
      {
        if ( v6 > 8u )
        {
          if ( *(_WORD *)(gptiCurrent + 624LL) < 0x400u )
          {
            v7 = 24;
          }
          else if ( v6 > 0x10u )
          {
            v7 = 24;
            if ( v6 > 0x18u )
              v7 = 32;
          }
          else
          {
            v7 = 16;
          }
        }
        else
        {
          v7 = 8;
        }
      }
    }
    else
    {
      v7 = 1;
    }
    v8 = v29[2];
    memset(v31, 0, 24);
    LODWORD(v30) = 40;
    *(_QWORD *)((char *)&v30 + 4) = *(_QWORD *)&v29[1];
    WORD6(v30) = 1;
    HIWORD(v30) = v7;
    if ( UIntMult(v29[1], v7, &puResult) >= 0 && UIntMult(((puResult + 31) >> 3) & 0x1FFFFFFC, v8, &v27) >= 0 )
    {
      v11 = 0;
      if ( v9 > 8u )
      {
        if ( ((v9 - 16) & 0xFFEF) == 0 )
        {
          v11 = 12;
          LODWORD(v31[0]) = 3;
        }
      }
      else
      {
        v11 = 4 * (1 << v10);
      }
      v12 = v27;
      v13 = v11 + 40 + v27;
      if ( v13 >= v11 + 40 )
      {
        v14 = Win32AllocPool(v13, 1650684757LL);
        v15 = (struct tagBITMAPINFO *)v14;
        if ( v14 )
        {
          if ( a3 )
            *a3 = v13;
          v16 = v31[0];
          *(_OWORD *)v14 = v30;
          v17 = *(_QWORD *)&v31[1];
          *(_OWORD *)(v14 + 16) = v16;
          *(_QWORD *)(v14 + 32) = v17;
          CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
          if ( CompatibleDC )
          {
            memset(v28, 0, sizeof(v28));
            v20 = 0LL;
            PushW32ThreadLock((__int64)v15, v28, (__int64)Win32FreePool, v19);
            if ( a2 )
            {
              v20 = SelectPalette((__int64)CompatibleDC, a2, 0);
              xxxRealizePalette(CompatibleDC);
            }
            v21 = GreGetDIBitsInternal(
                    CompatibleDC,
                    (__int64)a1,
                    0,
                    v8,
                    (__int64)v15 + v15->bmiHeader.biSize + v11,
                    v15,
                    0,
                    v12,
                    v15->bmiHeader.biSize + v11) != 0;
            if ( v20 )
            {
              SelectPalette((__int64)CompatibleDC, v20, 0);
              xxxRealizePalette(CompatibleDC);
            }
            GreDeleteDC(CompatibleDC);
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24);
            *(_QWORD *)(ThreadWin32Thread + 16) = v28[0];
            if ( v21 )
              return v15;
          }
          Win32FreePool(v15);
        }
      }
    }
  }
  return 0LL;
}
