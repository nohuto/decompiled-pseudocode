/*
 * XREFs of sub_180001C20 @ 0x180001C20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 */

__int64 sub_180001C20()
{
  __int64 result; // rax

  result = sub_180045810();
  qword_180268E90 = result;
  return result;
}
