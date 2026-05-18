/*
 * XREFs of sub_180001C00 @ 0x180001C00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005DBD8 @ 0x18005DBD8 (sub_18005DBD8.c)
 */

__int64 sub_180001C00()
{
  __int64 result; // rax

  result = sub_18005DBD8();
  qword_180269EA0 = result;
  return result;
}
