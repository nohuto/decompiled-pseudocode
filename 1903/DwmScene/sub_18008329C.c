/*
 * XREFs of sub_18008329C @ 0x18008329C
 * Callers:
 *     sub_180087280 @ 0x180087280 (sub_180087280.c)
 *     sub_1800B214C @ 0x1800B214C (sub_1800B214C.c)
 * Callees:
 *     sub_180010FDC @ 0x180010FDC (sub_180010FDC.c)
 */

__int64 __fastcall sub_18008329C(__int64 a1, unsigned int *a2)
{
  *(_QWORD *)a1 = 1065353216LL;
  *(_QWORD *)(a1 + 20) = 1065353216LL;
  *(_QWORD *)(a1 + 40) = 1065353216LL;
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  sub_180010FDC(
    (_OWORD *)a1,
    0.0078125,
    0.0,
    *(double *)_mm_unpacklo_ps(
                 _mm_unpacklo_ps((__m128)*a2, (__m128)a2[2]),
                 _mm_unpacklo_ps((__m128)a2[1], (__m128)0x3F800000u)).m128_u64);
  return a1;
}
