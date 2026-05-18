/*
 * XREFs of sub_1800B8A60 @ 0x1800B8A60
 * Callers:
 *     sub_1800B88B0 @ 0x1800B88B0 (sub_1800B88B0.c)
 *     sub_1800C01E0 @ 0x1800C01E0 (sub_1800C01E0.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000D790 (_guard_check_icall_nop.c)
 *     sub_1800B74D4 @ 0x1800B74D4 (sub_1800B74D4.c)
 *     sub_1800B8148 @ 0x1800B8148 (sub_1800B8148.c)
 *     sub_1800B8248 @ 0x1800B8248 (sub_1800B8248.c)
 *     sub_1800B8764 @ 0x1800B8764 (sub_1800B8764.c)
 *     sub_1800B8BA4 @ 0x1800B8BA4 (sub_1800B8BA4.c)
 *     sub_1800CB5C8 @ 0x1800CB5C8 (sub_1800CB5C8.c)
 *     sub_1800CB758 @ 0x1800CB758 (sub_1800CB758.c)
 */

char __fastcall sub_1800B8A60(__m128 *a1, __m128 *a2)
{
  _DWORD *v4; // rax
  __m128 *v5; // rax
  __m128 v7; // [rsp+20h] [rbp-B8h] BYREF
  __m128 v8[10]; // [rsp+30h] [rbp-A8h] BYREF

  v4 = (_DWORD *)sub_1800CB5C8(v8);
  sub_1800B8248((__m128 *)a1[16].m128_i32, v4);
  sub_1800CB758(&a1[16], a2);
  v5 = sub_1800B74D4(v8, a1 + 16);
  sub_1800B8148(&a1[6].m128_i32[3], v5);
  sub_1800B8BA4(a1);
  v7 = *a2;
  return sub_1800B8764(a1, &v7);
}
