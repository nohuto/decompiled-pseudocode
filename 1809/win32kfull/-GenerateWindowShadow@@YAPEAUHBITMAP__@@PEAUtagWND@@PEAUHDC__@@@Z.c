/*
 * XREFs of ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C013B49C
 * Callers:
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C013B2B4 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     GreCreateDIBitmapReal @ 0x1C004F05C (GreCreateDIBitmapReal.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007AA94 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     FillRect @ 0x1C007B5C0 (FillRect.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C00E4F1C (GreDecBitmapExclusiveRefCnt.c)
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x1C013B710 (-DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z.c)
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C013B8B8 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C02228D0 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     ?DrawRegionalShadow@@YAXPEAXJJ@Z @ 0x1C0222A64 (-DrawRegionalShadow@@YAXPEAXJJ@Z.c)
 */

__int64 __fastcall GenerateWindowShadow(struct tagWND *a1, HDC a2)
{
  __int64 v2; // rax
  int v5; // r13d
  __m128i v6; // xmm0
  signed int v7; // r15d
  LONG v8; // edi
  __int64 v9; // rdx
  LONG v10; // edi
  LONG v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  LONG bottom; // edi
  int right; // esi
  int v18; // r14d
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rbx
  HBRUSH StockObject; // rax
  __int64 v23; // rdx
  __int64 v25; // rcx
  HBITMAP ScaledWindowShadowFromDIB; // rax
  HBITMAP v27; // rdi
  RECT v28; // [rsp+70h] [rbp-49h] BYREF
  int v29; // [rsp+80h] [rbp-39h]
  int v30; // [rsp+84h] [rbp-35h] BYREF
  void *v31; // [rsp+88h] [rbp-31h] BYREF
  struct tagWND *v32; // [rsp+90h] [rbp-29h]
  __int64 v33; // [rsp+98h] [rbp-21h]
  unsigned int v34[12]; // [rsp+A0h] [rbp-19h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v32 = a1;
  v5 = 0;
  v6 = *(__m128i *)(v2 + 88);
  v7 = 1;
  v29 = *(_BYTE *)(v2 + 26) & 0x40;
  v28.top = 0;
  v8 = v6.m128i_i32[2] - _mm_cvtsi128_si32(v6);
  v28.left = 0;
  v28.right = v8;
  v28.bottom = v6.m128i_i32[3] - v6.m128i_i32[1];
  if ( IsRectEmptyInl(&v28) )
    return 0LL;
  v10 = v8 + 5;
  v11 = v6.m128i_i32[3] - v6.m128i_i32[1] + 5;
  v28.right = v10;
  v28.bottom = v11;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9)
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12) + 456)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13) + 456) + 8LL)
                  + 64LL) & 1) != 0
    && (v14 = *((_QWORD *)a1 + 5), v15 = *(_DWORD *)(v14 + 288), (v15 & 0xF) == 0)
    && (v15 & 0x40000000) != 0
    && (v25 = *(unsigned __int16 *)(v14 + 284), (_WORD)v25 != 96) )
  {
    v7 = (unsigned __int16)GreGetScaledLogPixels(v25) / 0x60u;
    right = v10 * v7;
    bottom = v11 * v7;
    v28.right = right;
    v28.bottom = v11 * v7;
  }
  else
  {
    bottom = v28.bottom;
    right = v28.right;
  }
  memset(v34, 0, 0x2CuLL);
  v18 = 0;
  v34[0] = 40;
  v34[1] = right;
  v34[2] = bottom;
  *(_QWORD *)&v34[3] = 2097153LL;
  v20 = GreCreateDIBitmapReal(a2, v19, 0LL, v34, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, &v31);
  v21 = v20;
  if ( !v20 )
    return 0LL;
  v33 = GreSelectBitmap(a2, v20);
  StockObject = (HBRUSH)GreGetStockObject(4LL);
  FillRect(a2, &v28, StockObject);
  if ( right < 15 || bottom < 15 )
    v5 = 1;
  if ( (unsigned int)DrawWindowShadow(v32, a2, v29, v5, &v30) )
  {
    if ( !v30 || v5 )
      DrawRegionalShadow(v31, right, bottom);
    else
      DrawRoundedRectangularShadow(v31, right, bottom, v29, v7);
    v18 = 1;
  }
  GreDecBitmapExclusiveRefCnt(v21, v23);
  if ( !v18 )
    goto LABEL_29;
  if ( v7 > 1 )
  {
    ScaledWindowShadowFromDIB = CreateScaledWindowShadowFromDIB(v32, a2, v7);
    v27 = ScaledWindowShadowFromDIB;
    if ( ScaledWindowShadowFromDIB )
    {
      GreSelectBitmap(a2, ScaledWindowShadowFromDIB);
      GreDeleteObject(v21);
      v21 = (__int64)v27;
    }
    else
    {
      v18 = 0;
    }
  }
  if ( !v18 )
  {
LABEL_29:
    GreSelectBitmap(a2, v33);
    GreDeleteObject(v21);
    return 0LL;
  }
  return v21;
}
