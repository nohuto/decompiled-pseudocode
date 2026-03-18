/*
 * XREFs of ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C013B8B8
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C013B49C (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     NtGdiFillRgn @ 0x1C013DCE0 (NtGdiFillRgn.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C02826CC (GreScaleRgnToDestLogPixel.c)
 *     NtGdiFrameRgn @ 0x1C0282B60 (NtGdiFrameRgn.c)
 */

__int64 __fastcall DrawWindowShadow(struct tagWND *a1, HDC a2, int a3, int a4, int *a5)
{
  unsigned int v8; // r14d
  __int64 RectRgn; // rdi
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v24; // rcx
  unsigned __int8 *v25; // r15
  __int64 SolidBrush; // r12
  __int128 v28; // [rsp+38h] [rbp-18h] BYREF

  v8 = 0;
  v28 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v10 = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v11 = v10;
  if ( RectRgn && v10 )
  {
    v12 = *((_QWORD *)a1 + 5);
    if ( !*(_QWORD *)(v12 + 168) || (*(_BYTE *)(v12 + 21) & 8) != 0 )
    {
      v13 = -(int)v28;
      LODWORD(v28) = 0;
      v14 = HIDWORD(v28) - DWORD1(v28);
      DWORD1(v28) = 0;
      HIDWORD(v28) = v14;
      DWORD2(v28) += v13;
      GreSetRectRgn(RectRgn, 0LL, 0LL, DWORD2(v28), v14);
      v16 = 1;
    }
    else
    {
      SetRectRgnIndirect(RectRgn, &v28);
      GreCombineRgn(RectRgn, RectRgn, *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL), 1LL);
      GreOffsetRgn(RectRgn, (unsigned int)-(int)v28, (unsigned int)-DWORD1(v28));
      v16 = 0;
    }
    *a5 = v16;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15)
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17) + 456)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18) + 456) + 8LL)
                    + 64LL) & 1) != 0
      && (v19 = *((_QWORD *)a1 + 5), v20 = *(_DWORD *)(v19 + 288), (v20 & 0xF) == 0)
      && (v20 & 0x40000000) != 0
      && (v24 = *(unsigned __int16 *)(v19 + 284), (_WORD)v24 != 96) )
    {
      v8 = GreScaleRgnToDestLogPixel(v24, RectRgn);
      if ( !v8 )
        goto LABEL_16;
    }
    else
    {
      v8 = 1;
    }
    v21 = 5;
    GreCombineRgn(v11, RectRgn, 0LL, 5LL);
    v22 = 5LL;
    if ( a3 )
    {
      GreOffsetRgn(RectRgn, 5LL, 0LL);
      v22 = 0LL;
    }
    GreOffsetRgn(v11, v22, 5LL);
    if ( !*a5 || a4 )
    {
      v25 = (unsigned __int8 *)&unk_1C02D9D34;
      while ( 1 )
      {
        SolidBrush = GreCreateSolidBrush(*v25 | (*v25 << 16) | (*v25 << 8));
        if ( !SolidBrush )
          break;
        NtGdiFrameRgn(a2, v21);
        GreDeleteObject(SolidBrush);
        --v21;
        --v25;
        if ( v21 <= 0 )
        {
          GreGetStockObject(4LL);
          goto LABEL_15;
        }
      }
      v8 = 0;
    }
    else
    {
      GreCombineRgn(v11, v11, RectRgn, 4LL);
      GreGetStockObject(0LL);
LABEL_15:
      NtGdiFillRgn(a2);
    }
  }
LABEL_16:
  GreDeleteObject(RectRgn);
  GreDeleteObject(v11);
  return v8;
}
