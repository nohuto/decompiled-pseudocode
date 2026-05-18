/*
 * XREFs of sub_180001A00 @ 0x180001A00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180057768 @ 0x180057768 (sub_180057768.c)
 */

__int64 sub_180001A00()
{
  __int64 result; // rax

  result = sub_180057768();
  qword_180268E20 = result;
  return result;
}
