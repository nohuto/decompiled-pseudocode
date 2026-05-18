/*
 * XREFs of sub_1800015B0 @ 0x1800015B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006068C @ 0x18006068C (sub_18006068C.c)
 */

__int64 sub_1800015B0()
{
  __int64 result; // rax

  result = sub_18006068C();
  qword_180268CF8 = result;
  return result;
}
