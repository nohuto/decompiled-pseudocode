/*
 * XREFs of sub_1800014C0 @ 0x1800014C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006068C @ 0x18006068C (sub_18006068C.c)
 */

__int64 sub_1800014C0()
{
  __int64 result; // rax

  result = sub_18006068C();
  qword_180268CB8 = result;
  return result;
}
