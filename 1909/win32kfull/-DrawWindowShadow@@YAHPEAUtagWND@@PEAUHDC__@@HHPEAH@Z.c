/*
 * XREFs of ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C0147384
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0147108 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     NtGdiFrameRgn @ 0x1C01467C0 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C0148050 (NtGdiFillRgn.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C0298DC8 (GreScaleRgnToDestLogPixel.c)
 */

__int64 __fastcall DrawWindowShadow(struct tagWND *a1, HDC a2, int a3, int a4, int *a5)
{
  unsigned int v8; // r14d
  __int64 RectRgn; // rdi
  __int64 v10; // rax
  HRGN v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  int v23; // eax
  int v24; // ebx
  __int64 v25; // rdx
  unsigned __int8 *v27; // r15
  HBRUSH SolidBrush; // rax
  HBRUSH v29; // r12
  __int64 v30; // rcx
  __int128 v32; // [rsp+38h] [rbp-18h] BYREF

  v8 = 0;
  v32 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v10 = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v11 = (HRGN)v10;
  if ( RectRgn && v10 )
  {
    v12 = *((_QWORD *)a1 + 5);
    if ( !*(_QWORD *)(v12 + 168) || (*(_BYTE *)(v12 + 21) & 8) != 0 )
    {
      v16 = -(int)v32;
      LODWORD(v32) = 0;
      v17 = HIDWORD(v32) - DWORD1(v32);
      DWORD1(v32) = 0;
      HIDWORD(v32) = v17;
      DWORD2(v32) += v16;
      GreSetRectRgn(RectRgn, 0LL, 0LL, DWORD2(v32), v17);
      v15 = 1;
    }
    else
    {
      SetRectRgnIndirect(RectRgn, &v32);
      GreCombineRgn(RectRgn, RectRgn, *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL), 1LL);
      GreOffsetRgn(RectRgn, (unsigned int)-(int)v32);
      v15 = 0;
    }
    *a5 = v15;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14)
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19) + 448)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21) + 448)
                                  + 8LL)
                    + 64LL) & 1) != 0
      && (v22 = *((_QWORD *)a1 + 5), v23 = *(_DWORD *)(v22 + 288), (v23 & 0xF) == 0)
      && (v23 & 0x40000000) != 0
      && (v30 = *(unsigned __int16 *)(v22 + 284), (_WORD)v30 != 96) )
    {
      v8 = GreScaleRgnToDestLogPixel(v30, RectRgn);
      if ( !v8 )
        goto LABEL_18;
    }
    else
    {
      v8 = 1;
    }
    v24 = 5;
    GreCombineRgn(v11, RectRgn, 0LL, 5LL);
    v25 = 5LL;
    if ( a3 )
    {
      GreOffsetRgn(RectRgn, 5LL);
      v25 = 0LL;
    }
    GreOffsetRgn(v11, v25);
    if ( !*a5 || a4 )
    {
      v27 = (unsigned __int8 *)&unk_1C02E46F8;
      while ( 1 )
      {
        SolidBrush = (HBRUSH)GreCreateSolidBrush(*v27 | (*v27 << 16) | (*v27 << 8));
        v29 = SolidBrush;
        if ( !SolidBrush )
          break;
        NtGdiFrameRgn(a2, v11, SolidBrush, v24, v24);
        GreDeleteObject(v29);
        --v24;
        --v27;
        if ( v24 <= 0 )
        {
          GreGetStockObject(4LL);
          goto LABEL_17;
        }
      }
      v8 = 0;
    }
    else
    {
      GreCombineRgn(v11, v11, RectRgn, 4LL);
      GreGetStockObject(0LL);
LABEL_17:
      NtGdiFillRgn(a2);
    }
  }
LABEL_18:
  GreDeleteObject(RectRgn);
  GreDeleteObject(v11);
  return v8;
}
