/*
 * XREFs of sub_18007D01C @ 0x18007D01C
 * Callers:
 *     sub_18007CFCC @ 0x18007CFCC (sub_18007CFCC.c)
 *     sub_1800D4F38 @ 0x1800D4F38 (sub_1800D4F38.c)
 * Callees:
 *     ZwCreateEvent @ 0x18009CFE0 (ZwCreateEvent.c)
 */

__int64 sub_18007D01C()
{
  __int64 result; // rax
  char v1; // [rsp+20h] [rbp-18h]
  int v2; // [rsp+20h] [rbp-18h]

  v1 = 0;
  result = ZwCreateEvent(&qword_180165280, 2031619LL, 0LL, 1LL, v1);
  if ( (int)result >= 0 )
  {
    LOBYTE(v2) = 0;
    return ZwCreateEvent(&qword_1801652B0, 2031619LL, 0LL, 1LL, v2);
  }
  return result;
}
