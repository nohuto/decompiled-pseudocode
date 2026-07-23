/*
 * XREFs of sub_18006D480 @ 0x18006D480
 * Callers:
 *     sub_18006D08C @ 0x18006D08C (sub_18006D08C.c)
 *     sub_18010D034 @ 0x18010D034 (sub_18010D034.c)
 * Callees:
 *     ZwDelayExecution @ 0x18009CD60 (ZwDelayExecution.c)
 */

__int64 __fastcall sub_18006D480(__int64 a1)
{
  __int64 result; // rax
  LARGE_INTEGER DelayInterval; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 12);
  DelayInterval.QuadPart = -2500000LL;
  while ( (_DWORD)result )
  {
    ZwDelayExecution(0, &DelayInterval);
    result = *(unsigned int *)(a1 + 12);
  }
  return result;
}
