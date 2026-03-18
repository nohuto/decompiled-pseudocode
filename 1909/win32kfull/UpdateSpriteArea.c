/*
 * XREFs of UpdateSpriteArea @ 0x1C00CB6CC
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006E71C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     UpdateSprite @ 0x1C00311F0 (UpdateSprite.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     GreConvertMemToRedirectionDC @ 0x1C00CCA98 (GreConvertMemToRedirectionDC.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     GreConvertRedirectionToMemDC @ 0x1C02994BC (GreConvertRedirectionToMemDC.c)
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
  bool v18; // zf
  unsigned int v19; // r9d
  int v20; // r8d
  __m128i v21; // xmm6
  int v22; // r8d
  LONG v23; // ecx
  int v24; // esi
  HDC v25; // rdi
  __int64 v26; // r8
  int v27; // [rsp+88h] [rbp-80h]
  unsigned int v28; // [rsp+A0h] [rbp-68h]
  struct tagPOINT v29; // [rsp+A8h] [rbp-60h] BYREF
  struct tagSIZE v30; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-50h]
  HDC v32; // [rsp+C0h] [rbp-48h]
  __int64 v33; // [rsp+C8h] [rbp-40h]
  __int64 v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  unsigned __int128 v36; // [rsp+E8h] [rbp-20h] BYREF

  result = 0LL;
  v29 = 0LL;
  v14 = 0LL;
  v16 = *((_QWORD *)a1 + 5);
  v36 = 0uLL;
  v31 = a3;
  v18 = (*(_BYTE *)(v16 + 26) & 8) == 0;
  v19 = *(_DWORD *)(v16 + 88);
  v20 = *(_DWORD *)(v16 + 92);
  v28 = v19;
  v32 = a5;
  v33 = a6;
  if ( !v18 && a2 )
  {
    v22 = -v20;
    v36 = (unsigned __int128)*a7;
    v21 = (__m128i)v36;
    v30.cx = *(_DWORD *)(v16 + 96) - *(_DWORD *)(v16 + 88);
    v23 = *(_DWORD *)(v16 + 100) - *(_DWORD *)(v16 + 92);
    HIDWORD(v36) += v22;
    DWORD2(v36) -= v19;
    DWORD1(v36) += v22;
    v30.cy = v23;
    v35 = v21.m128i_i64[1];
    LODWORD(v36) = _mm_cvtsi128_si32(v21) - v19;
    GreOffsetRgn(a6, -v19);
    v27 = a8 + _mm_cvtsi128_si32(v21) - a10;
    v34 = GreSelectBitmap(a5, a3);
    if ( a5 != a4 )
      v14 = GreSelectBitmap(a4, a2);
    GreSelectVisRgn(a4, a6, 4LL);
    v24 = GreConvertMemToRedirectionDC(a4);
    EtwTraceWindowRenderingOldToNewRedirectionBitmap(*(_QWORD *)a1, *(_QWORD *)a1, v31);
    v25 = v32;
    NtGdiBitBltInternal(
      a4,
      v36,
      SDWORD1(v36),
      DWORD2(v36) - v36,
      HIDWORD(v36) - DWORD1(v36),
      v32,
      v27,
      v21.m128i_i32[1] - a11 + a9,
      -2134114272,
      0,
      0);
    if ( v24 )
      GreConvertRedirectionToMemDC(a4);
    v29 = *(struct tagPOINT *)(*((_QWORD *)a1 + 5) + 88LL);
    UpdateSprite(
      *(HDEV *)(gpDispInfo + 40LL),
      a1,
      v26,
      0LL,
      0LL,
      &v30,
      a4,
      &v29,
      0,
      0LL,
      0x40000000u,
      (struct tagRECT *)&v36);
    GreSelectVisRgn(a4, v33, 4LL);
    GreOffsetRgn(v33, v28);
    result = GreSelectBitmap(v25, v34);
    if ( v14 )
      return GreSelectBitmap(a4, v14);
  }
  return result;
}
