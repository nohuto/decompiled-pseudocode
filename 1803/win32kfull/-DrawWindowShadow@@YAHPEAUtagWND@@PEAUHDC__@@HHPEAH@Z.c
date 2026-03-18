/*
 * XREFs of ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C011AB94
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C011A924 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     NtGdiFrameRgn @ 0x1C01182C0 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C011C820 (NtGdiFillRgn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C026E69C (GreScaleRgnToDestLogPixel.c)
 */

__int64 __fastcall DrawWindowShadow(struct tagWND *a1, HDC a2, int a3, int a4, int *a5)
{
  unsigned int v8; // r14d
  __int64 RectRgn; // rdi
  __int64 v10; // rax
  HRGN v11; // rsi
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
  unsigned __int8 *v24; // r15
  HBRUSH SolidBrush; // rax
  HBRUSH v26; // r12
  __int64 v27; // rcx
  __int128 v29; // [rsp+38h] [rbp-18h] BYREF

  v8 = 0;
  v29 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v10 = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v11 = (HRGN)v10;
  if ( RectRgn && v10 )
  {
    v12 = *((_QWORD *)a1 + 5);
    if ( !*(_QWORD *)(v12 + 168) || (*(_BYTE *)(v12 + 21) & 8) != 0 )
    {
      v13 = -(int)v29;
      LODWORD(v29) = 0;
      v14 = HIDWORD(v29) - DWORD1(v29);
      DWORD1(v29) = 0;
      HIDWORD(v29) = v14;
      DWORD2(v29) += v13;
      GreSetRectRgn(RectRgn, 0LL, 0LL, DWORD2(v29), v14);
      v16 = 1;
    }
    else
    {
      SetRectRgnIndirect(RectRgn, &v29);
      GreCombineRgn(RectRgn, RectRgn, *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL), 1LL);
      GreOffsetRgn(RectRgn, (unsigned int)-(int)v29, (unsigned int)-DWORD1(v29));
      v16 = 0;
    }
    *a5 = v16;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15)
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17) + 448)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18) + 448) + 8LL)
                    + 52LL) & 1) != 0
      && (v19 = *((_QWORD *)a1 + 5), v20 = *(_DWORD *)(v19 + 288), (v20 & 0xF) == 0)
      && (v20 & 0x40000000) != 0
      && (v27 = *(unsigned __int16 *)(v19 + 284), (_WORD)v27 != 96) )
    {
      v8 = GreScaleRgnToDestLogPixel(v27, RectRgn);
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
      v24 = (unsigned __int8 *)&unk_1C02DFD54;
      while ( 1 )
      {
        SolidBrush = (HBRUSH)GreCreateSolidBrush(*v24 | (*v24 << 16) | (*v24 << 8));
        v26 = SolidBrush;
        if ( !SolidBrush )
          break;
        NtGdiFrameRgn(a2, v11, SolidBrush, v21, v21);
        GreDeleteObject(v26);
        --v21;
        --v24;
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
