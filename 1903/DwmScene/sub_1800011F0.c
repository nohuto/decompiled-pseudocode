/*
 * XREFs of sub_1800011F0 @ 0x1800011F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E400 @ 0x18005E400 (sub_18005E400.c)
 */

__int64 sub_1800011F0()
{
  __int64 result; // rax

  result = sub_18005E400();
  qword_180268C68 = result;
  return result;
}
