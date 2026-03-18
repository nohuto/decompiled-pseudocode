/*
 * XREFs of RemapHimetricPointsForMultiMonDigitizers @ 0x1C01AFA20
 * Callers:
 *     PointerInfoCopyOutHelperInternal @ 0x1C01BA900 (PointerInfoCopyOutHelperInternal.c)
 * Callees:
 *     GetMonitorRect @ 0x1C0066BB4 (GetMonitorRect.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01AFFA0 (VirtualizeMultiMonDigitizerSize.c)
 *     GetScreenRect @ 0x1C022B0B4 (GetScreenRect.c)
 */

__int64 __fastcall RemapHimetricPointsForMultiMonDigitizers(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // r15
  __m128i v6; // xmm1
  INT v7; // edx
  __m128i v8; // xmm6
  int v9; // esi
  INT v10; // r14d
  int v11; // ebx
  INT v12; // edi
  INT v13; // eax
  __m128i v14; // xmm6
  __m128i *ScreenRect; // rax
  __int64 v16; // rbx
  unsigned __int64 v17; // xmm0_8
  unsigned __int64 v18; // rsi
  INT v19; // edi
  INT v20; // r12d
  INT v21; // edi
  INT v22; // eax
  INT v23; // ecx
  __int64 result; // rax
  INT v25; // [rsp+20h] [rbp-58h]
  INT v26; // [rsp+24h] [rbp-54h]
  INT b[4]; // [rsp+28h] [rbp-50h] BYREF
  __m128i v28; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v29[24]; // [rsp+48h] [rbp-30h] BYREF
  INT v30; // [rsp+C0h] [rbp+48h]
  INT v31; // [rsp+C8h] [rbp+50h]

  v4 = a1;
  v6 = *(__m128i *)(*(_QWORD *)(a2 + 40) + 28LL);
  v7 = *(_DWORD *)(a1 + 8);
  *(__m128i *)b = v6;
  v8 = *(__m128i *)(*gpDispInfo + 24LL);
  v9 = _mm_cvtsi128_si32(v8);
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) - v9;
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4));
  v30 = EngMulDiv(_mm_cvtsi128_si32(v6) - v9, v7, v10);
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12)) - v11;
  v26 = EngMulDiv(v6.m128i_i32[1] - v11, *(_DWORD *)(v4 + 12), v12);
  v31 = EngMulDiv(v6.m128i_i32[2] - v9, *(_DWORD *)(v4 + 8), v10);
  v13 = EngMulDiv(v6.m128i_i32[3] - v11, *(_DWORD *)(v4 + 12), v12);
  *(_OWORD *)b = *(_OWORD *)v4;
  v25 = v13;
  VirtualizeMultiMonDigitizerSize(b);
  v14 = *(__m128i *)GetMonitorRect(&v28, a2);
  v28 = v14;
  ScreenRect = (__m128i *)GetScreenRect(v29);
  v16 = ScreenRect->m128i_i64[0];
  v17 = _mm_srli_si128(*ScreenRect, 8).m128i_u64[0];
  v18 = HIDWORD(ScreenRect->m128i_i64[0]);
  v19 = v17 - ScreenRect->m128i_i64[0];
  LODWORD(v4) = EngMulDiv(_mm_cvtsi128_si32(v14) - ScreenRect->m128i_i64[0], b[2], v19);
  v20 = EngMulDiv(v28.m128i_i32[1] - v18, b[3], HIDWORD(v17) - v18);
  LODWORD(v16) = EngMulDiv(v28.m128i_i32[2] - v16, b[2], v19) - v4;
  v21 = EngMulDiv(v28.m128i_i32[3] - v18, b[3], HIDWORD(v17) - v18) - v20;
  *a3 = v4 + EngMulDiv(*a3 - v30, v16, v31 - v30);
  a3[1] = v20 + EngMulDiv(a3[1] - v26, v21, v25 - v26);
  v22 = EngMulDiv(*a4 - v30, v16, v31 - v30);
  v23 = a4[1] - v26;
  *a4 = v4 + v22;
  result = (unsigned int)(v20 + EngMulDiv(v23, v21, v25 - v26));
  a4[1] = result;
  return result;
}
