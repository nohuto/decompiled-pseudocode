/*
 * XREFs of sub_180110730 @ 0x180110730
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D1BE4 @ 0x1800D1BE4 (sub_1800D1BE4.c)
 *     sub_1800D1EF4 @ 0x1800D1EF4 (sub_1800D1EF4.c)
 *     sub_1800D1F04 @ 0x1800D1F04 (sub_1800D1F04.c)
 *     sub_1800D1F34 @ 0x1800D1F34 (sub_1800D1F34.c)
 *     sub_1800D1F74 @ 0x1800D1F74 (sub_1800D1F74.c)
 *     sub_1800D1F94 @ 0x1800D1F94 (sub_1800D1F94.c)
 */

__int64 __fastcall sub_180110730(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 result; // rax

  v2 = sub_1800D1EF4(5, 4LL, 0LL);
  v3 = sub_1800D1BE4(4, 4, 0LL) | v2;
  v4 = v3 | sub_1800D1F04(4, 4LL, 0LL);
  v5 = v4 | sub_1800D1F34(0, 3, 0LL);
  v6 = v5 | sub_1800D1F74(0, 2, 0LL);
  result = v6 | sub_1800D1F94(0, 2, 0LL);
  *(_QWORD *)(a1 + 112) = result;
  return result;
}
