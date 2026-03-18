/*
 * XREFs of UpdateSpriteArea @ 0x1C00ECAF0
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00CD04C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     UpdateSprite @ 0x1C002AD80 (UpdateSprite.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     GreConvertMemToRedirectionDC @ 0x1C00EDEA4 (GreConvertMemToRedirectionDC.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     GreConvertRedirectionToMemDC @ 0x1C0299A6C (GreConvertRedirectionToMemDC.c)
 */

__int64 __fastcall UpdateSpriteArea(
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
  __int64 result; // rax
  __int64 v14; // r15
  __int64 v16; // rdx
  bool v17; // zf
  unsigned int v18; // r9d
  int v19; // r8d
  __m128i v20; // xmm6
  int v21; // r8d
  LONG v22; // ecx
  int v23; // esi
  HDC v24; // rdi
  __int64 v25; // r8
  int v26; // [rsp+88h] [rbp-80h]
  unsigned int v27; // [rsp+A0h] [rbp-68h]
  struct tagPOINT v28; // [rsp+A8h] [rbp-60h] BYREF
  struct tagSIZE v29; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-50h]
  HDC v31; // [rsp+C0h] [rbp-48h]
  __int64 v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  unsigned __int128 v35; // [rsp+E8h] [rbp-20h] BYREF

  result = 0LL;
  v28 = 0LL;
  v14 = 0LL;
  v16 = *((_QWORD *)a1 + 5);
  v35 = 0uLL;
  v30 = a3;
  v17 = (*(_BYTE *)(v16 + 26) & 8) == 0;
  v18 = *(_DWORD *)(v16 + 88);
  v19 = *(_DWORD *)(v16 + 92);
  v27 = v18;
  v31 = a5;
  v32 = a6;
  if ( !v17 && a2 )
  {
    v21 = -v19;
    v35 = (unsigned __int128)*a7;
    v20 = (__m128i)v35;
    v29.cx = *(_DWORD *)(v16 + 96) - *(_DWORD *)(v16 + 88);
    v22 = *(_DWORD *)(v16 + 100) - *(_DWORD *)(v16 + 92);
    HIDWORD(v35) += v21;
    DWORD2(v35) -= v18;
    DWORD1(v35) += v21;
    v29.cy = v22;
    v34 = v20.m128i_i64[1];
    LODWORD(v35) = _mm_cvtsi128_si32(v20) - v18;
    GreOffsetRgn(a6, -v18);
    v26 = a8 + _mm_cvtsi128_si32(v20) - a10;
    v33 = GreSelectBitmap(a5);
    if ( a5 != a4 )
      v14 = GreSelectBitmap(a4);
    GreSelectVisRgn(a4, a6, 4LL);
    v23 = GreConvertMemToRedirectionDC(a4);
    EtwTraceWindowRenderingOldToNewRedirectionBitmap(*(_QWORD *)a1, *(_QWORD *)a1, v30);
    v24 = v31;
    NtGdiBitBltInternal(
      a4,
      v35,
      SDWORD1(v35),
      DWORD2(v35) - v35,
      HIDWORD(v35) - DWORD1(v35),
      v31,
      v26,
      v20.m128i_i32[1] - a11 + a9,
      -2134114272,
      0,
      0);
    if ( v23 )
      GreConvertRedirectionToMemDC(a4);
    v28 = *(struct tagPOINT *)(*((_QWORD *)a1 + 5) + 88LL);
    UpdateSprite(
      *(HDEV *)(gpDispInfo + 40LL),
      a1,
      v25,
      0LL,
      0LL,
      &v29,
      a4,
      &v28,
      0,
      0LL,
      0x40000000u,
      (struct tagRECT *)&v35);
    GreSelectVisRgn(a4, v32, 4LL);
    GreOffsetRgn(v32, v27);
    result = GreSelectBitmap(v24);
    if ( v14 )
      return GreSelectBitmap(a4);
  }
  return result;
}
