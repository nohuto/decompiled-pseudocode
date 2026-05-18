/*
 * XREFs of sub_180001B10 @ 0x180001B10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005DAC8 @ 0x18005DAC8 (sub_18005DAC8.c)
 */

__int64 sub_180001B10()
{
  __int64 result; // rax

  result = sub_18005DAC8();
  qword_180268E60 = result;
  return result;
}
