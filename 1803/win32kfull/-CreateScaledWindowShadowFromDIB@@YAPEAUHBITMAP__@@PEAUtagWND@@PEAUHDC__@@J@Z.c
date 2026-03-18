/*
 * XREFs of ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C01FA9E8
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C011A924 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0096D9C (GreCreateCompatibleBitmapInternal.c)
 *     GreStretchBltInternal @ 0x1C009B858 (GreStretchBltInternal.c)
 */

__int64 __fastcall CreateScaledWindowShadowFromDIB(struct tagWND *a1, HDC a2, int a3)
{
  HDC DCEx; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // r12d
  int v11; // r13d
  __int64 CompatibleBitmapInternal; // rsi
  __int64 CompatibleDC; // rax
  HDC v14; // rbp
  __int64 v15; // rdi
  int v16; // ebx

  DCEx = (HDC)_GetDCEx(a1, 0LL, 3LL);
  if ( !DCEx )
    return 0LL;
  v8 = *((_QWORD *)a1 + 5);
  v9 = *(_QWORD *)(v8 + 88);
  v10 = _mm_srli_si128(*(__m128i *)(v8 + 88), 8).m128i_u32[0] - v9 + 5;
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v8 + 88), 12)) - HIDWORD(v9) + 5;
  CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(DCEx, v10, v11, 0, 0LL, 0LL);
  _ReleaseDC(DCEx);
  if ( !CompatibleBitmapInternal )
    return 0LL;
  CompatibleDC = GreCreateCompatibleDC(a2);
  v14 = (HDC)CompatibleDC;
  if ( !CompatibleDC
    || (v15 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal),
        v16 = GreStretchBltInternal(v14, 0, 0, v10, v11, a2, 0, 0, a3 * v10, a3 * v11, 13369376, 0, 0),
        GreSelectBitmap(v14, v15),
        GreDeleteDC(v14),
        !v16) )
  {
    GreDeleteObject(CompatibleBitmapInternal);
    return 0LL;
  }
  return CompatibleBitmapInternal;
}
