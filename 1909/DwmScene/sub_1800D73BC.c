/*
 * XREFs of sub_1800D73BC @ 0x1800D73BC
 * Callers:
 *     sub_1800D9D54 @ 0x1800D9D54 (sub_1800D9D54.c)
 * Callees:
 *     sub_1800D86C8 @ 0x1800D86C8 (sub_1800D86C8.c)
 *     sub_1800D9FE8 @ 0x1800D9FE8 (sub_1800D9FE8.c)
 */

__int64 __fastcall sub_1800D73BC(__int64 a1, __int64 a2)
{
  __int64 v5; // [rsp+48h] [rbp+10h]

  v5 = sub_1800D9FE8(a1);
  *(_WORD *)(v5 + 24) = 0;
  sub_1800D86C8(a1, v5 + 32, a2);
  return v5;
}
