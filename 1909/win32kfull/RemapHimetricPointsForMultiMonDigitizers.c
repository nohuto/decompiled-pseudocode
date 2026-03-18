/*
 * XREFs of RemapHimetricPointsForMultiMonDigitizers @ 0x1C01E7240
 * Callers:
 *     PointerInfoCopyOutHelperInternal @ 0x1C01F3140 (PointerInfoCopyOutHelperInternal.c)
 * Callees:
 *     GetMonitorRect @ 0x1C00145DC (GetMonitorRect.c)
 *     GetScreenRect @ 0x1C01082C4 (GetScreenRect.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E78B8 (VirtualizeMultiMonDigitizerSize.c)
 */

__int64 __fastcall RemapHimetricPointsForMultiMonDigitizers(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  INT v4; // r14d
  __int64 v6; // rax
  int v7; // ecx
  __m128i v8; // xmm6
  int v9; // r15d
  INT v10; // r12d
  INT v11; // eax
  INT v12; // ebx
  int v13; // edi
  INT v14; // esi
  INT v15; // eax
  __m128i v16; // xmm6
  __int64 v17; // rdx
  __int64 v18; // r8
  __m128i *ScreenRect; // rax
  __int64 v20; // rbx
  unsigned __int64 v21; // xmm0_8
  unsigned __int64 v22; // rsi
  INT v23; // edi
  INT v24; // r15d
  INT v25; // r12d
  INT v26; // edi
  INT v27; // eax
  INT v28; // ecx
  __int64 result; // rax
  INT v30; // [rsp+20h] [rbp-58h]
  INT v31; // [rsp+24h] [rbp-54h]
  INT v32; // [rsp+28h] [rbp-50h]
  INT b[4]; // [rsp+30h] [rbp-48h] BYREF
  __m128i v34; // [rsp+40h] [rbp-38h] BYREF
  __int128 v35; // [rsp+50h] [rbp-28h] BYREF
  INT v36; // [rsp+C0h] [rbp+48h]

  v4 = *(_DWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a2 + 40);
  v7 = _mm_cvtsi128_si32(*(__m128i *)(v6 + 28));
  *(_OWORD *)b = *(_OWORD *)(v6 + 28);
  v8 = *(__m128i *)(*gpDispInfo + 24LL);
  v9 = _mm_cvtsi128_si32(v8);
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) - v9;
  v11 = EngMulDiv(v7 - v9, v4, v10);
  v12 = *(_DWORD *)(a1 + 12);
  v13 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4));
  v36 = v11;
  v14 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12)) - v13;
  v32 = EngMulDiv(b[1] - v13, v12, v14);
  v30 = EngMulDiv(b[2] - v9, v4, v10);
  v15 = EngMulDiv(b[3] - v13, v12, v14);
  *(_OWORD *)b = *(_OWORD *)a1;
  v31 = v15;
  VirtualizeMultiMonDigitizerSize(b);
  v16 = *(__m128i *)GetMonitorRect(&v34, a2);
  v34 = v16;
  ScreenRect = (__m128i *)GetScreenRect(&v35, v17, v18);
  v20 = ScreenRect->m128i_i64[0];
  v21 = _mm_srli_si128(*ScreenRect, 8).m128i_u64[0];
  v22 = HIDWORD(ScreenRect->m128i_i64[0]);
  v23 = v21 - ScreenRect->m128i_i64[0];
  v24 = EngMulDiv(_mm_cvtsi128_si32(v16) - ScreenRect->m128i_i64[0], b[2], v23);
  v25 = EngMulDiv(v34.m128i_i32[1] - v22, b[3], HIDWORD(v21) - v22);
  LODWORD(v20) = EngMulDiv(v34.m128i_i32[2] - v20, b[2], v23) - v24;
  v26 = EngMulDiv(v34.m128i_i32[3] - v22, b[3], HIDWORD(v21) - v22) - v25;
  *a3 = v24 + EngMulDiv(*a3 - v36, v20, v30 - v36);
  a3[1] = v25 + EngMulDiv(a3[1] - v32, v26, v31 - v32);
  v27 = EngMulDiv(*a4 - v36, v20, v30 - v36);
  v28 = a4[1] - v32;
  *a4 = v24 + v27;
  result = (unsigned int)(v25 + EngMulDiv(v28, v26, v31 - v32));
  a4[1] = result;
  return result;
}
