/*
 * XREFs of sub_180001D30 @ 0x180001D30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006079C @ 0x18006079C (sub_18006079C.c)
 */

__int64 sub_180001D30()
{
  __int64 result; // rax

  result = sub_18006079C();
  qword_180269F00 = result;
  return result;
}
