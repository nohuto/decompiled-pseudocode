/*
 * XREFs of UpdateSpriteArea @ 0x1C0152170
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0043B34 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     GreConvertMemToRedirectionDC @ 0x1C0010F08 (GreConvertMemToRedirectionDC.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     UpdateSprite @ 0x1C007622C (UpdateSprite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     GreConvertRedirectionToMemDC @ 0x1C028349C (GreConvertRedirectionToMemDC.c)
 */

_UNKNOWN **__fastcall UpdateSpriteArea(
        struct tagWND *a1,
        __int64 a2,
        __int64 a3,
        HDC a4,
        HDC a5,
        __int64 a6,
        _OWORD *a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  _UNKNOWN **result; // rax
  __int64 v13; // r15
  __int64 v16; // rdx
  bool v18; // zf
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  __m128i v21; // xmm6
  __int64 v22; // r8
  LONG v23; // ecx
  int v24; // esi
  HDC v25; // rdi
  __int64 v26; // r8
  int v27; // [rsp+78h] [rbp-90h]
  int v28; // [rsp+88h] [rbp-80h]
  int v29; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v30; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v31; // [rsp+A0h] [rbp-68h]
  struct tagPOINT v32; // [rsp+A8h] [rbp-60h] BYREF
  struct tagSIZE v33; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-50h]
  HDC v35; // [rsp+C0h] [rbp-48h]
  __int64 v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  int v39[4]; // [rsp+E8h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+58h] BYREF

  result = &retaddr;
  v13 = 0LL;
  v29 = 0;
  v16 = *((_QWORD *)a1 + 5);
  v34 = a3;
  v35 = a5;
  v36 = a6;
  v18 = (*(_BYTE *)(v16 + 26) & 8) == 0;
  v19 = *(_DWORD *)(v16 + 88);
  v20 = *(_DWORD *)(v16 + 92);
  v31 = v19;
  v30 = v20;
  if ( !v18 && a2 )
  {
    v22 = -v20;
    *(_OWORD *)v39 = *a7;
    v21 = *(__m128i *)v39;
    v33.cx = *(_DWORD *)(v16 + 96) - *(_DWORD *)(v16 + 88);
    v23 = *(_DWORD *)(v16 + 100) - *(_DWORD *)(v16 + 92);
    v39[3] += v22;
    v39[2] -= v19;
    v39[1] += v22;
    v33.cy = v23;
    v38 = v21.m128i_i64[1];
    v39[0] = _mm_cvtsi128_si32(v21) - v19;
    GreOffsetRgn(a6, -v19, v22);
    v28 = a8 + _mm_cvtsi128_si32(v21) - a10;
    v37 = GreSelectBitmap(a5, a3);
    if ( a5 != a4 )
      v13 = GreSelectBitmap(a4, a2);
    GreSelectVisRgn(a4, a6, 4LL);
    v24 = GreConvertMemToRedirectionDC(a4, &v29);
    EtwTraceWindowRenderingOldToNewRedirectionBitmap(
      *(_QWORD *)a1,
      *(_QWORD *)a1,
      v34,
      (unsigned int)v39[0],
      v39[1],
      v39[2],
      v39[3],
      *(_QWORD *)a1,
      *(_QWORD *)a1,
      a2,
      v28,
      v21.m128i_i32[1] - a11 + a9,
      v39[2] + v28 - v39[0],
      v39[3] + v21.m128i_i32[1] - a11 + a9 - v39[1],
      v21.m128i_i32[1] - a11 + a9);
    v25 = v35;
    NtGdiBitBltInternal(a4, v39[0], v39[1], v39[2] - v39[0], v39[3] - v39[1], v35, v28, v27, -2134114272, 0, 0);
    if ( v24 )
      GreConvertRedirectionToMemDC(a4);
    v32 = *(struct tagPOINT *)(*((_QWORD *)a1 + 5) + 88LL);
    UpdateSprite(
      *(HDEV *)(gpDispInfo + 40LL),
      a1,
      v26,
      0LL,
      0LL,
      &v33,
      a4,
      &v32,
      0,
      0LL,
      0x40000000u,
      (struct tagRECT *)v39);
    GreSelectVisRgn(a4, v36, 4LL);
    GreOffsetRgn(v36, v31, v30);
    result = (_UNKNOWN **)GreSelectBitmap(v25, v37);
    if ( v13 )
      return (_UNKNOWN **)GreSelectBitmap(a4, v13);
  }
  return result;
}
