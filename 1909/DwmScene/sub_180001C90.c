/*
 * XREFs of sub_180001C90 @ 0x180001C90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005DFE4 @ 0x18005DFE4 (sub_18005DFE4.c)
 */

__int64 sub_180001C90()
{
  __int64 result; // rax

  result = sub_18005DFE4();
  qword_180269EF0 = result;
  return result;
}
