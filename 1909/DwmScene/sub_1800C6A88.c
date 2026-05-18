/*
 * XREFs of sub_1800C6A88 @ 0x1800C6A88
 * Callers:
 *     sub_1800C3744 @ 0x1800C3744 (sub_1800C3744.c)
 *     sub_1800C8208 @ 0x1800C8208 (sub_1800C8208.c)
 * Callees:
 *     sub_1800B72A0 @ 0x1800B72A0 (sub_1800B72A0.c)
 *     sub_1800C2178 @ 0x1800C2178 (sub_1800C2178.c)
 *     sub_1800F5C84 @ 0x1800F5C84 (sub_1800F5C84.c)
 */

__int64 __fastcall sub_1800C6A88(__int64 a1, __m128 *a2, __m128 *a3, __m128 *a4, __m128 *a5, _QWORD *a6)
{
  __int64 v9; // rbx
  __int64 v10; // rbx
  __m128 v12[4]; // [rsp+20h] [rbp-48h] BYREF

  *a3 = *sub_1800C2178(v12, a3, a2);
  *a4 = *sub_1800C2178(v12, a4, a2);
  *a5 = *sub_1800C2178(v12, a5, a2);
  sub_1800F5C84(*a6);
  v9 = *a6;
  sub_1800B72A0(v12, a3, a4);
  sub_1800F5C84(v9);
  v10 = *a6;
  sub_1800B72A0(v12, a4, a5);
  return sub_1800F5C84(v10);
}
