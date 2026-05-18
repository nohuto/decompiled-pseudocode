/*
 * XREFs of sub_180001A40 @ 0x180001A40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 */

__int64 sub_180001A40()
{
  __int64 result; // rax

  result = sub_180045810();
  qword_180268E08 = result;
  return result;
}
