/*
 * XREFs of sub_1800D72AC @ 0x1800D72AC
 * Callers:
 *     sub_1800D9C44 @ 0x1800D9C44 (sub_1800D9C44.c)
 * Callees:
 *     sub_1800D85B8 @ 0x1800D85B8 (sub_1800D85B8.c)
 *     sub_1800D9ED8 @ 0x1800D9ED8 (sub_1800D9ED8.c)
 */

__int64 __fastcall sub_1800D72AC(__int64 a1, __int64 a2)
{
  __int64 v5; // [rsp+48h] [rbp+10h]

  v5 = sub_1800D9ED8(a1);
  *(_WORD *)(v5 + 24) = 0;
  sub_1800D85B8(a1, v5 + 32, a2);
  return v5;
}
