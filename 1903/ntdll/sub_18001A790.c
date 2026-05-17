/*
 * XREFs of sub_18001A790 @ 0x18001A790
 * Callers:
 *     sub_18001A7F0 @ 0x18001A7F0 (sub_18001A7F0.c)
 *     sub_180054C74 @ 0x180054C74 (sub_180054C74.c)
 *     LdrAddLoadAsDataTable @ 0x180072080 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180073440 (LdrRemoveLoadAsDataTable.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180035C80 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x18009CD60 (ZwDelayExecution.c)
 */

__int64 sub_18001A790()
{
  __int64 result; // rax
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = -1000000LL;
  while ( _InterlockedCompareExchange(&dword_180164348, 1, 0) )
  {
    result = (unsigned int)dword_180164348;
    if ( dword_180164348 == 1 )
    {
      ZwDelayExecution(0LL, &v1);
      result = (unsigned int)dword_180164348;
    }
    if ( (_DWORD)result == 2 )
      return result;
  }
  result = RtlInitializeCriticalSectionEx(&unk_180164300, 0LL, 0LL);
  dword_180164348 = 2;
  return result;
}
