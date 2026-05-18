/*
 * XREFs of sub_1800018F0 @ 0x1800018F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180056D6C @ 0x180056D6C (sub_180056D6C.c)
 */

__int64 sub_1800018F0()
{
  __int64 result; // rax

  result = sub_180056D6C();
  qword_180268DD0 = result;
  return result;
}
