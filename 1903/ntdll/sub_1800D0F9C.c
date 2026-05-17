/*
 * XREFs of sub_1800D0F9C @ 0x1800D0F9C
 * Callers:
 *     sub_180071E6C @ 0x180071E6C (sub_180071E6C.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x18009CB80 (ZwQueryInformationThread.c)
 */

__int64 sub_1800D0F9C()
{
  __int64 result; // rax
  char v1; // [rsp+40h] [rbp+8h]

  result = ZwQueryInformationThread();
  if ( (int)result >= 0 && !v1 )
    __debugbreak();
  return result;
}
