/*
 * XREFs of sub_180001F10 @ 0x180001F10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006068C @ 0x18006068C (sub_18006068C.c)
 */

__int64 sub_180001F10()
{
  __int64 result; // rax

  result = sub_18006068C();
  qword_180268F80 = result;
  return result;
}
