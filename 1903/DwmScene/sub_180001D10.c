/*
 * XREFs of sub_180001D10 @ 0x180001D10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 */

__int64 sub_180001D10()
{
  __int64 result; // rax

  result = sub_180045810();
  qword_180268ED0 = result;
  return result;
}
