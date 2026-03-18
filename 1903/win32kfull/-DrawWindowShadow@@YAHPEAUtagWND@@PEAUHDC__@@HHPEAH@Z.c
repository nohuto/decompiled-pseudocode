/*
 * XREFs of ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C01465D4
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0146358 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     NtGdiFrameRgn @ 0x1C0145A10 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C01472A0 (NtGdiFillRgn.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C0299378 (GreScaleRgnToDestLogPixel.c)
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
  __int64 v15; // r9
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // eax
  int v27; // ebx
  __int64 v28; // rdx
  unsigned __int8 *v30; // r15
  HBRUSH SolidBrush; // rax
  HBRUSH v32; // r12
  __int64 v33; // rcx
  __int128 v35; // [rsp+38h] [rbp-18h] BYREF

  v8 = 0;
  v35 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v10 = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v11 = (HRGN)v10;
  if ( RectRgn && v10 )
  {
    v12 = *((_QWORD *)a1 + 5);
    if ( !*(_QWORD *)(v12 + 168) || (*(_BYTE *)(v12 + 21) & 8) != 0 )
    {
      v17 = -(int)v35;
      LODWORD(v35) = 0;
      v18 = HIDWORD(v35) - DWORD1(v35);
      DWORD1(v35) = 0;
      HIDWORD(v35) = v18;
      DWORD2(v35) += v17;
      GreSetRectRgn(RectRgn, 0LL, 0LL, DWORD2(v35), v18);
      v16 = 1;
    }
    else
    {
      SetRectRgnIndirect(RectRgn, &v35);
      GreCombineRgn(RectRgn, RectRgn, *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL), 1LL);
      GreOffsetRgn(RectRgn, (unsigned int)-(int)v35);
      v16 = 0;
    }
    *a5 = v16;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15)
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20, v21) + 448)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24)
                                              + 448)
                                  + 8LL)
                    + 64LL) & 1) != 0
      && (v25 = *((_QWORD *)a1 + 5), v26 = *(_DWORD *)(v25 + 288), (v26 & 0xF) == 0)
      && (v26 & 0x40000000) != 0
      && (v33 = *(unsigned __int16 *)(v25 + 284), (_WORD)v33 != 96) )
    {
      v8 = GreScaleRgnToDestLogPixel(v33, RectRgn);
      if ( !v8 )
        goto LABEL_18;
    }
    else
    {
      v8 = 1;
    }
    v27 = 5;
    GreCombineRgn(v11, RectRgn, 0LL, 5LL);
    v28 = 5LL;
    if ( a3 )
    {
      GreOffsetRgn(RectRgn, 5LL);
      v28 = 0LL;
    }
    GreOffsetRgn(v11, v28);
    if ( !*a5 || a4 )
    {
      v30 = (unsigned __int8 *)&unk_1C02E5138;
      while ( 1 )
      {
        SolidBrush = (HBRUSH)GreCreateSolidBrush(*v30 | (*v30 << 16) | (*v30 << 8));
        v32 = SolidBrush;
        if ( !SolidBrush )
          break;
        NtGdiFrameRgn(a2, v11, SolidBrush, v27, v27);
        GreDeleteObject(v32);
        --v27;
        --v30;
        if ( v27 <= 0 )
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
