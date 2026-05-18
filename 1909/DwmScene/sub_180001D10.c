/*
 * XREFs of sub_180001D10 @ 0x180001D10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180045920 @ 0x180045920 (sub_180045920.c)
 */

__int64 sub_180001D10()
{
  __int64 result; // rax

  result = sub_180045920();
  qword_180269ED0 = result;
  return result;
}
