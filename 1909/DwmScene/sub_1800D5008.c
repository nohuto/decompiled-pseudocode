/*
 * XREFs of sub_1800D5008 @ 0x1800D5008
 * Callers:
 *     sub_1800668EC @ 0x1800668EC (sub_1800668EC.c)
 * Callees:
 *     sub_1800D4EA0 @ 0x1800D4EA0 (sub_1800D4EA0.c)
 */

__int64 __fastcall sub_1800D5008(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1800D4EA0((_QWORD *)a1, a2);
  *(_WORD *)(a1 + 184) = 257;
  result = a1;
  *(_QWORD *)(a1 + 192) = 1LL;
  return result;
}
