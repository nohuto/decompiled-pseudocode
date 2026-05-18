/*
 * XREFs of sub_180001C70 @ 0x180001C70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E400 @ 0x18005E400 (sub_18005E400.c)
 */

__int64 sub_180001C70()
{
  __int64 result; // rax

  result = sub_18005E400();
  qword_180268EF8 = result;
  return result;
}
