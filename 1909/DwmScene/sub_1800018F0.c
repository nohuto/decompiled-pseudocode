/*
 * XREFs of sub_1800018F0 @ 0x1800018F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180056E7C @ 0x180056E7C (sub_180056E7C.c)
 */

__int64 sub_1800018F0()
{
  __int64 result; // rax

  result = sub_180056E7C();
  qword_180269DD0 = result;
  return result;
}
