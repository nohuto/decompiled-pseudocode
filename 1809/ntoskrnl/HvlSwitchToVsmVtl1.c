/*
 * XREFs of HvlSwitchToVsmVtl1 @ 0x1401B8140
 * Callers:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 * Callees:
 *     HvlpSwitchToVsmVtl1RetpolineHelper @ 0x1401B8280 (HvlpSwitchToVsmVtl1RetpolineHelper.c)
 */

__int64 __fastcall HvlSwitchToVsmVtl1(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __m128i v3; // xmm10
  __m128i v4; // xmm11
  __m128i v5; // xmm12
  __m128i v6; // xmm13
  __m128i v7; // xmm14
  __m128i v8; // xmm15
  __int64 result; // rax
  __int64 v10; // [rsp+8h] [rbp-130h]

  v2 = *a2;
  v3 = _mm_loadu_si128((const __m128i *)(a2 + 1));
  v4 = _mm_loadu_si128((const __m128i *)(a2 + 3));
  v5 = _mm_loadu_si128((const __m128i *)(a2 + 5));
  v6 = _mm_loadu_si128((const __m128i *)(a2 + 7));
  v7 = _mm_loadu_si128((const __m128i *)(a2 + 9));
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 11));
  result = ((__int64 (__fastcall *)(__int64, __int64 *, _QWORD))HvlpVsmVtlCallVa)(a1, a2, KeGetCurrentIrql());
  *(_QWORD *)v10 = v2;
  *(__m128i *)(v10 + 8) = v3;
  *(__m128i *)(v10 + 24) = v4;
  *(__m128i *)(v10 + 40) = v5;
  *(__m128i *)(v10 + 56) = v6;
  *(__m128i *)(v10 + 72) = v7;
  *(__m128i *)(v10 + 88) = v8;
  return result;
}
