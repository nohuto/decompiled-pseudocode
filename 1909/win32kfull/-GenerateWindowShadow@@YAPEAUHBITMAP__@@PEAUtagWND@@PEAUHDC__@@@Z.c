/*
 * XREFs of ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0147108
 * Callers:
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C0146DC0 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0014980 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C0026080 (GreCreateDIBitmapReal.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C00271A0 (GreDecBitmapExclusiveRefCnt.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     FillRect @ 0x1C012BF54 (FillRect.c)
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C0147384 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x1C0148E4C (-DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z.c)
 *     ?DrawRegionalShadow@@YAXPEAXJJ@Z @ 0x1C01490E8 (-DrawRegionalShadow@@YAXPEAXJJ@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C023A994 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 */

__int64 __fastcall GenerateWindowShadow(struct tagWND *a1, HDC a2)
{
  __int64 v2; // rax
  int v5; // r15d
  int v6; // r13d
  __m128i v7; // xmm0
  signed int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  LONG bottom; // edi
  LONG right; // esi
  __int64 v19; // rax
  __int64 v20; // rbx
  HBRUSH StockObject; // rax
  __int64 v22; // rdx
  __int64 v24; // rcx
  unsigned __int16 ScaledLogPixels; // kr00_2
  HBITMAP ScaledWindowShadowFromDIB; // rax
  HBITMAP v27; // rdi
  RECT v28; // [rsp+70h] [rbp-49h] BYREF
  int v29; // [rsp+80h] [rbp-39h]
  int v30; // [rsp+84h] [rbp-35h] BYREF
  void *v31; // [rsp+88h] [rbp-31h] BYREF
  struct tagWND *v32; // [rsp+90h] [rbp-29h]
  __int64 v33; // [rsp+98h] [rbp-21h]
  unsigned int v34[3]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v35; // [rsp+ACh] [rbp-Dh]
  __int128 v36; // [rsp+B4h] [rbp-5h]
  __int64 v37; // [rsp+C4h] [rbp+Bh]

  v2 = *((_QWORD *)a1 + 5);
  v32 = a1;
  v5 = 0;
  v6 = 0;
  v7 = *(__m128i *)(v2 + 88);
  v8 = 1;
  v29 = *(_BYTE *)(v2 + 26) & 0x40;
  v28.top = 0;
  v28.left = 0;
  v28.right = v7.m128i_i32[2] - _mm_cvtsi128_si32(v7);
  v28.bottom = v7.m128i_i32[3] - v7.m128i_i32[1];
  if ( IsRectEmptyInl(&v28) )
    return 0LL;
  v28.right = v10 + 5;
  v28.bottom = v11 + 5;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10)
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13) + 448)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v14) + 448)
                                + 8LL)
                  + 64LL) & 1) != 0
    && (v15 = *((_QWORD *)a1 + 5), v16 = *(_DWORD *)(v15 + 288), (v16 & 0xF) == 0)
    && (v16 & 0x40000000) != 0
    && (v24 = *(unsigned __int16 *)(v15 + 284), (_WORD)v24 != 96) )
  {
    ScaledLogPixels = GreGetScaledLogPixels(v24);
    LODWORD(v12) = (2863311531u * (unsigned __int64)ScaledLogPixels) >> 32;
    v8 = ScaledLogPixels / 0x60u;
    right = v8 * v28.right;
    bottom = v8 * v28.bottom;
    v28.right *= v8;
    v28.bottom *= v8;
  }
  else
  {
    bottom = v28.bottom;
    right = v28.right;
  }
  v37 = 0LL;
  v36 = 0LL;
  v34[0] = 40;
  v34[1] = right;
  v34[2] = bottom;
  v35 = 2097153LL;
  v19 = GreCreateDIBitmapReal(a2, v12, 0LL, v34, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, &v31);
  v20 = v19;
  if ( !v19 )
    return 0LL;
  v33 = GreSelectBitmap(a2, v19);
  StockObject = (HBRUSH)GreGetStockObject(4LL);
  FillRect(a2, &v28, StockObject);
  if ( right < 15 || bottom < 15 )
    v6 = 1;
  if ( DrawWindowShadow(v32, a2, v29, v6, &v30) )
  {
    if ( !v30 || v6 )
      DrawRegionalShadow(v31, right, bottom);
    else
      DrawRoundedRectangularShadow(v31, right, bottom, v29, v8);
    v5 = 1;
  }
  GreDecBitmapExclusiveRefCnt(v20, v22);
  if ( !v5 )
    goto LABEL_29;
  if ( v8 > 1 )
  {
    ScaledWindowShadowFromDIB = CreateScaledWindowShadowFromDIB(v32, a2, v8);
    v27 = ScaledWindowShadowFromDIB;
    if ( ScaledWindowShadowFromDIB )
    {
      GreSelectBitmap(a2, ScaledWindowShadowFromDIB);
      GreDeleteObject(v20);
      v20 = (__int64)v27;
    }
    else
    {
      v5 = 0;
    }
  }
  if ( !v5 )
  {
LABEL_29:
    GreSelectBitmap(a2, v33);
    GreDeleteObject(v20);
    return 0LL;
  }
  return v20;
}
