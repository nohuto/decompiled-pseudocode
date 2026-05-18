/*
 * XREFs of sub_1800017C0 @ 0x1800017C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E400 @ 0x18005E400 (sub_18005E400.c)
 */

__int64 sub_1800017C0()
{
  __int64 result; // rax

  result = sub_18005E400();
  qword_180268DB0 = result;
  return result;
}
