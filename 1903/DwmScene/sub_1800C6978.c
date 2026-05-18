/*
 * XREFs of sub_1800C6978 @ 0x1800C6978
 * Callers:
 *     sub_1800C3634 @ 0x1800C3634 (sub_1800C3634.c)
 *     sub_1800C80F8 @ 0x1800C80F8 (sub_1800C80F8.c)
 * Callees:
 *     sub_1800B7190 @ 0x1800B7190 (sub_1800B7190.c)
 *     sub_1800C2068 @ 0x1800C2068 (sub_1800C2068.c)
 *     sub_1800F5B74 @ 0x1800F5B74 (sub_1800F5B74.c)
 */

__int64 __fastcall sub_1800C6978(__int64 a1, __m128 *a2, __m128 *a3, __m128 *a4, __m128 *a5, _QWORD *a6)
{
  __int64 v9; // rbx
  __int64 v10; // rbx
  __m128 v12[4]; // [rsp+20h] [rbp-48h] BYREF

  *a3 = *sub_1800C2068(v12, a3, a2);
  *a4 = *sub_1800C2068(v12, a4, a2);
  *a5 = *sub_1800C2068(v12, a5, a2);
  sub_1800F5B74(*a6);
  v9 = *a6;
  sub_1800B7190(v12, a3, a4);
  sub_1800F5B74(v9);
  v10 = *a6;
  sub_1800B7190(v12, a4, a5);
  return sub_1800F5B74(v10);
}
