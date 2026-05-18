/*
 * XREFs of sub_1800B8950 @ 0x1800B8950
 * Callers:
 *     sub_1800B87A0 @ 0x1800B87A0 (sub_1800B87A0.c)
 *     sub_1800C00D0 @ 0x1800C00D0 (sub_1800C00D0.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000D790 (_guard_check_icall_nop.c)
 *     sub_1800B73C4 @ 0x1800B73C4 (sub_1800B73C4.c)
 *     sub_1800B8038 @ 0x1800B8038 (sub_1800B8038.c)
 *     sub_1800B8138 @ 0x1800B8138 (sub_1800B8138.c)
 *     sub_1800B8654 @ 0x1800B8654 (sub_1800B8654.c)
 *     sub_1800B8A94 @ 0x1800B8A94 (sub_1800B8A94.c)
 *     sub_1800CB4B8 @ 0x1800CB4B8 (sub_1800CB4B8.c)
 *     sub_1800CB648 @ 0x1800CB648 (sub_1800CB648.c)
 */

char __fastcall sub_1800B8950(__m128 *a1, __m128 *a2)
{
  _DWORD *v4; // rax
  __m128 *v5; // rax
  __m128 v7; // [rsp+20h] [rbp-B8h] BYREF
  __m128 v8[10]; // [rsp+30h] [rbp-A8h] BYREF

  v4 = (_DWORD *)sub_1800CB4B8(v8);
  sub_1800B8138((__m128 *)a1[16].m128_i32, v4);
  sub_1800CB648(&a1[16], a2);
  v5 = sub_1800B73C4(v8, a1 + 16);
  sub_1800B8038(&a1[6].m128_i32[3], v5);
  sub_1800B8A94(a1);
  v7 = *a2;
  return sub_1800B8654(a1, &v7);
}
