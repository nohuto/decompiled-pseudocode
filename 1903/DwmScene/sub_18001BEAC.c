/*
 * XREFs of sub_18001BEAC @ 0x18001BEAC
 * Callers:
 *     sub_180010500 @ 0x180010500 (sub_180010500.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000D790 (_guard_check_icall_nop.c)
 *     sub_18001BE10 @ 0x18001BE10 (sub_18001BE10.c)
 *     sub_1800B73C4 @ 0x1800B73C4 (sub_1800B73C4.c)
 *     sub_1800CB4B8 @ 0x1800CB4B8 (sub_1800CB4B8.c)
 *     sub_1800CB648 @ 0x1800CB648 (sub_1800CB648.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__m128 *__fastcall sub_18001BEAC(__m128 *a1, float *a2, float a3)
{
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v8[4]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v9; // [rsp+38h] [rbp-D0h]
  __m128 v10; // [rsp+48h] [rbp-C0h] BYREF
  __m128 v11; // [rsp+58h] [rbp-B0h] BYREF
  __m128 v12; // [rsp+68h] [rbp-A0h] BYREF
  __m128 v13; // [rsp+78h] [rbp-90h] BYREF
  __m128 v14; // [rsp+88h] [rbp-80h] BYREF
  __m128 v15; // [rsp+98h] [rbp-70h] BYREF
  __m128 v16; // [rsp+A8h] [rbp-60h] BYREF
  __m128 v17; // [rsp+B8h] [rbp-50h] BYREF
  __m128 v18[2]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v19[144]; // [rsp+E8h] [rbp-20h] BYREF

  v9 = -2LL;
  sub_1800CB4B8(v19);
  v5 = a3 * a2[2];
  v6 = a3 * a2[1];
  v8[0] = a3 * *a2;
  v8[1] = v6;
  v8[2] = v5;
  v8[3] = 1.0;
  sub_1800CB648(v19, v8);
  sub_1800B73C4(&v10, v19);
  sub_18001BE10(a1 + 3, &v10);
  sub_18001BE10(a1 + 4, &v11);
  sub_18001BE10(a1 + 5, &v12);
  sub_18001BE10(a1 + 6, &v13);
  sub_18001BE10(a1 + 7, &v14);
  sub_18001BE10(a1 + 8, &v15);
  sub_18001BE10(a1 + 9, &v16);
  sub_18001BE10(a1 + 10, &v17);
  return sub_18001BE10(a1 + 11, v18);
}
