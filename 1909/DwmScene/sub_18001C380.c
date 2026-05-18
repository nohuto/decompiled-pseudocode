/*
 * XREFs of sub_18001C380 @ 0x18001C380
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_18008ADC0 @ 0x18008ADC0 (sub_18008ADC0.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001C380(__int64 a1, __int64 a2, __int64 a3)
{
  float *v6; // rax
  __m128 v7; // xmm1
  __m128 v8; // xmm0
  __m128 v9; // xmm2
  __m128 v10; // xmm0
  __int64 result; // rax
  float v12; // [rsp+28h] [rbp-48h]
  unsigned int v13; // [rsp+28h] [rbp-48h]
  _QWORD v14[5]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h]

  v14[4] = -2LL;
  v15 = 0LL;
  v16 = 0LL;
  sub_1800632D0(*(_QWORD *)(a1 + 16) + 16LL, &v15);
  v14[2] = 0LL;
  v14[3] = 0LL;
  sub_18001115C(v14, (__int64)&unk_1802597A8);
  v6 = (float *)sub_18008ADC0(*(_QWORD *)(a1 + 16), v14);
  v7 = (__m128)*((unsigned int *)v6 + 1);
  v7.m128_f32[0] = v7.m128_f32[0] - v6[4];
  v8 = (__m128)*(unsigned int *)v6;
  v8.m128_f32[0] = v8.m128_f32[0] - v6[3];
  v12 = v6[2] - v6[5];
  *(_QWORD *)a2 = _mm_unpacklo_ps(v8, v7).m128_u64[0];
  *(float *)(a2 + 8) = v12;
  v9 = (__m128)*((unsigned int *)v6 + 1);
  v9.m128_f32[0] = v9.m128_f32[0] + v6[4];
  v10 = (__m128)*(unsigned int *)v6;
  v10.m128_f32[0] = v10.m128_f32[0] + v6[3];
  *(float *)&v13 = v6[5] + v6[2];
  *(_QWORD *)a3 = _mm_unpacklo_ps(v10, v9).m128_u64[0];
  result = v13;
  *(float *)(a3 + 8) = *(float *)&v13;
  if ( (_BYTE)v16 )
    return sub_180063778(v15);
  return result;
}
