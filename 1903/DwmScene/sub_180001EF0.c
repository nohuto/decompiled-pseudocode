/*
 * XREFs of sub_180001EF0 @ 0x180001EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 */

__int64 sub_180001EF0()
{
  __int64 result; // rax

  result = sub_180045810();
  qword_180268F50 = result;
  return result;
}
