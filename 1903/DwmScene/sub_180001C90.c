/*
 * XREFs of sub_180001C90 @ 0x180001C90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005DED4 @ 0x18005DED4 (sub_18005DED4.c)
 */

__int64 sub_180001C90()
{
  __int64 result; // rax

  result = sub_18005DED4();
  qword_180268EF0 = result;
  return result;
}
