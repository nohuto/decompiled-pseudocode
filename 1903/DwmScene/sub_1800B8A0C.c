/*
 * XREFs of sub_1800B8A0C @ 0x1800B8A0C
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000D790 (_guard_check_icall_nop.c)
 *     sub_1800B7318 @ 0x1800B7318 (sub_1800B7318.c)
 *     sub_1800B8038 @ 0x1800B8038 (sub_1800B8038.c)
 *     sub_1800B8138 @ 0x1800B8138 (sub_1800B8138.c)
 *     sub_1800B8654 @ 0x1800B8654 (sub_1800B8654.c)
 *     sub_1800B8A94 @ 0x1800B8A94 (sub_1800B8A94.c)
 *     sub_1800CB684 @ 0x1800CB684 (sub_1800CB684.c)
 */

char __fastcall sub_1800B8A0C(__m128 *a1, _DWORD *a2)
{
  __int64 v2; // rbx
  _DWORD *v4; // rax
  __int128 v6; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v7[152]; // [rsp+30h] [rbp-98h] BYREF

  v2 = (__int64)&a1[6].m128_i64[1] + 4;
  sub_1800B8038(&a1[6].m128_i32[3], a2);
  a1[15].m128_i32[3] = 2;
  sub_1800B7318(v2);
  v4 = (_DWORD *)sub_1800CB684(v7, v2);
  sub_1800B8138((__m128 *)a1[16].m128_i32, v4);
  sub_1800B8A94(a1);
  v6 = xmmword_18025E030;
  return sub_1800B8654(a1, (__m128 *)&v6);
}
