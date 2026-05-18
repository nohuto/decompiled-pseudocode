/*
 * XREFs of sub_1800018B0 @ 0x1800018B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E400 @ 0x18005E400 (sub_18005E400.c)
 */

__int64 sub_1800018B0()
{
  __int64 result; // rax

  result = sub_18005E400();
  qword_180268DF0 = result;
  return result;
}
