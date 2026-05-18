/*
 * XREFs of sub_1800015B0 @ 0x1800015B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006079C @ 0x18006079C (sub_18006079C.c)
 */

__int64 sub_1800015B0()
{
  __int64 result; // rax

  result = sub_18006079C();
  qword_180269CF8 = result;
  return result;
}
