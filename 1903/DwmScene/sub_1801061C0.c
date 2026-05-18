/*
 * XREFs of sub_1801061C0 @ 0x1801061C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180104360 @ 0x180104360 (sub_180104360.c)
 */

__m128 *__fastcall sub_1801061C0(__int64 a1, __m128 *a2, __m128 *a3)
{
  __int64 v3; // rcx
  __m128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v6 = *a3;
  sub_180104360(v3, a2, &v6);
  return a2;
}
