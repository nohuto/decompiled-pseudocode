/*
 * XREFs of sub_1800B8B1C @ 0x1800B8B1C
 * Callers:
 *     sub_1800190D0 @ 0x1800190D0 (sub_1800190D0.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000D790 (_guard_check_icall_nop.c)
 *     sub_1800B7428 @ 0x1800B7428 (sub_1800B7428.c)
 *     sub_1800B8148 @ 0x1800B8148 (sub_1800B8148.c)
 *     sub_1800B8248 @ 0x1800B8248 (sub_1800B8248.c)
 *     sub_1800B8764 @ 0x1800B8764 (sub_1800B8764.c)
 *     sub_1800B8BA4 @ 0x1800B8BA4 (sub_1800B8BA4.c)
 *     sub_1800CB794 @ 0x1800CB794 (sub_1800CB794.c)
 */

char __fastcall sub_1800B8B1C(__m128 *a1, _DWORD *a2)
{
  __int64 v2; // rbx
  _DWORD *v4; // rax
  __int128 v6; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v7[152]; // [rsp+30h] [rbp-98h] BYREF

  v2 = (__int64)&a1[6].m128_i64[1] + 4;
  sub_1800B8148(&a1[6].m128_i32[3], a2);
  a1[15].m128_i32[3] = 2;
  sub_1800B7428(v2);
  v4 = (_DWORD *)sub_1800CB794(v7, v2);
  sub_1800B8248((__m128 *)a1[16].m128_i32, v4);
  sub_1800B8BA4(a1);
  v6 = xmmword_18025F030;
  return sub_1800B8764(a1, (__m128 *)&v6);
}
