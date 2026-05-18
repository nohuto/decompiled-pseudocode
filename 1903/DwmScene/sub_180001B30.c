/*
 * XREFs of sub_180001B30 @ 0x180001B30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 */

__int64 sub_180001B30()
{
  __int64 result; // rax

  result = sub_180045810();
  qword_180268E50 = result;
  return result;
}
