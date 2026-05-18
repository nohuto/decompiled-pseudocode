/*
 * XREFs of sub_1800011F0 @ 0x1800011F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E510 @ 0x18005E510 (sub_18005E510.c)
 */

__int64 sub_1800011F0()
{
  __int64 result; // rax

  result = sub_18005E510();
  qword_180269C68 = result;
  return result;
}
