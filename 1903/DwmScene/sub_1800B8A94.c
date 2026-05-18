/*
 * XREFs of sub_1800B8A94 @ 0x1800B8A94
 * Callers:
 *     sub_1800B84D0 @ 0x1800B84D0 (sub_1800B84D0.c)
 *     sub_1800B8950 @ 0x1800B8950 (sub_1800B8950.c)
 *     sub_1800B8A0C @ 0x1800B8A0C (sub_1800B8A0C.c)
 * Callees:
 *     sub_1800B7218 @ 0x1800B7218 (sub_1800B7218.c)
 *     sub_1800B72A0 @ 0x1800B72A0 (sub_1800B72A0.c)
 */

void __fastcall sub_1800B8A94(__int64 a1)
{
  __m128 *v2; // rax
  __m128 v3; // xmm1
  __m128 v4; // xmm2
  float v5; // xmm7_4
  __m128 v6; // xmm1
  __m128 v7; // [rsp+20h] [rbp-38h] BYREF
  __m128 v8; // [rsp+30h] [rbp-28h] BYREF

  v2 = sub_1800B7218(&v7, (__m128 *)(a1 + 304), (__m128 *)(a1 + 320));
  *(__m128 *)(a1 + 400) = *sub_1800B7218(&v8, v2, (__m128 *)(a1 + 336));
  sub_1800B72A0((__m128 *)(a1 + 400), COERCE_DOUBLE(1051372203LL));
  v3 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 256));
  v4 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 288));
  v5 = (float)((float)(_mm_shuffle_ps(v3, v3, 85).m128_f32[0] * 0.71520001) + (float)(v3.m128_f32[0] * 0.21259999))
     + (float)(_mm_shuffle_ps(v3, v3, 170).m128_f32[0] * 0.0722);
  v6 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 272));
  *(float *)(a1 + 416) = v5;
  *(float *)(a1 + 420) = (float)((float)(_mm_shuffle_ps(v6, v6, 85).m128_f32[0] * 0.71520001)
                               + (float)(v6.m128_f32[0] * 0.21259999))
                       + (float)(_mm_shuffle_ps(v6, v6, 170).m128_f32[0] * 0.0722);
  *(float *)(a1 + 424) = (float)((float)(_mm_shuffle_ps(v4, v4, 85).m128_f32[0] * 0.71520001)
                               + (float)(v4.m128_f32[0] * 0.21259999))
                       + (float)(_mm_shuffle_ps(v4, v4, 170).m128_f32[0] * 0.0722);
  sub_180084D64((_DWORD *)(a1 + 416));
}
