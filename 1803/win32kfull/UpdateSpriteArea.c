/*
 * XREFs of UpdateSpriteArea @ 0x1C00E7B80
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00281E0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     UpdateSprite @ 0x1C007B160 (UpdateSprite.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     GreConvertMemToRedirectionDC @ 0x1C00E8F3C (GreConvertMemToRedirectionDC.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     GreConvertRedirectionToMemDC @ 0x1C0270544 (GreConvertRedirectionToMemDC.c)
 */

_UNKNOWN **__fastcall UpdateSpriteArea(
        struct tagWND *a1,
        __int64 a2,
        __int64 a3,
        HDC a4,
        HDC a5,
        __int64 a6,
        struct tagRECT *a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  _UNKNOWN **result; // rax
  __int64 v13; // r15
  __int64 v16; // rdx
  unsigned int v18; // r9d
  __m128i v19; // xmm6
  __int64 v20; // r8
  LONG v21; // ecx
  int v22; // esi
  HDC v23; // rdi
  __int64 v24; // r8
  int v25; // [rsp+88h] [rbp-80h]
  unsigned int v26; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v27; // [rsp+A0h] [rbp-68h]
  struct tagPOINT v28; // [rsp+A8h] [rbp-60h] BYREF
  struct tagSIZE v29; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-50h]
  HDC v31; // [rsp+C0h] [rbp-48h]
  __int64 v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  struct tagRECT v35; // [rsp+E8h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+58h] BYREF

  result = &retaddr;
  v13 = 0LL;
  v16 = *((_QWORD *)a1 + 5);
  v30 = a3;
  v31 = a5;
  v32 = a6;
  v18 = *(_DWORD *)(v16 + 88);
  v27 = v18;
  v26 = *(_DWORD *)(v16 + 92);
  if ( (*(_BYTE *)(v16 + 26) & 8) != 0 && a2 )
  {
    v20 = (unsigned int)-*(_DWORD *)(v16 + 92);
    v35 = *a7;
    v19 = (__m128i)v35;
    v29.cx = *(_DWORD *)(v16 + 96) - *(_DWORD *)(v16 + 88);
    v21 = *(_DWORD *)(v16 + 100) - *(_DWORD *)(v16 + 92);
    v35.bottom += v20;
    v35.right -= v18;
    v35.top += v20;
    v29.cy = v21;
    v34 = v19.m128i_i64[1];
    v35.left = _mm_cvtsi128_si32(v19) - v18;
    GreOffsetRgn(a6, -v18, v20);
    v25 = a8 + _mm_cvtsi128_si32(v19) - a10;
    v33 = GreSelectBitmap(a5, a3);
    if ( a5 != a4 )
      v13 = GreSelectBitmap(a4, a2);
    GreSelectVisRgn(a4, a6, 4LL);
    v22 = GreConvertMemToRedirectionDC(a4);
    EtwTraceWindowRenderingOldToNewRedirectionBitmap(*(_QWORD *)a1, *(_QWORD *)a1, v30);
    v23 = v31;
    NtGdiBitBltInternal(
      a4,
      v35.left,
      v35.top,
      v35.right - v35.left,
      v35.bottom - v35.top,
      v31,
      v25,
      v19.m128i_i32[1] - a11 + a9,
      -2134114272,
      0,
      0);
    if ( v22 )
      GreConvertRedirectionToMemDC(a4);
    v28 = *(struct tagPOINT *)(*((_QWORD *)a1 + 5) + 88LL);
    UpdateSprite(*(HDEV *)(gpDispInfo + 40LL), a1, v24, 0LL, 0LL, &v29, a4, &v28, 0, 0LL, 0x40000000u, &v35);
    GreSelectVisRgn(a4, v32, 4LL);
    GreOffsetRgn(v32, v27, v26);
    result = (_UNKNOWN **)GreSelectBitmap(v23, v33);
    if ( v13 )
      return (_UNKNOWN **)GreSelectBitmap(a4, v13);
  }
  return result;
}
