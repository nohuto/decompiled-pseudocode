/*
 * XREFs of sub_1800014F0 @ 0x1800014F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E400 @ 0x18005E400 (sub_18005E400.c)
 */

__int64 sub_1800014F0()
{
  __int64 result; // rax

  result = sub_18005E400();
  qword_180268CF0 = result;
  return result;
}
