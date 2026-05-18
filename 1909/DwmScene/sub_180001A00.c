/*
 * XREFs of sub_180001A00 @ 0x180001A00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180057878 @ 0x180057878 (sub_180057878.c)
 */

__int64 sub_180001A00()
{
  __int64 result; // rax

  result = sub_180057878();
  qword_180269E20 = result;
  return result;
}
