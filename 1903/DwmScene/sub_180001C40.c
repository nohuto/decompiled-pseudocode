/*
 * XREFs of sub_180001C40 @ 0x180001C40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006068C @ 0x18006068C (sub_18006068C.c)
 */

__int64 sub_180001C40()
{
  __int64 result; // rax

  result = sub_18006068C();
  qword_180268EC0 = result;
  return result;
}
