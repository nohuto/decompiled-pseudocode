/*
 * XREFs of sub_180001E00 @ 0x180001E00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180045920 @ 0x180045920 (sub_180045920.c)
 */

__int64 sub_180001E00()
{
  __int64 result; // rax

  result = sub_180045920();
  qword_180269F10 = result;
  return result;
}
