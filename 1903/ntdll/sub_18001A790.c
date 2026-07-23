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

NTSTATUS sub_18001A790()
{
  NTSTATUS result; // eax
  LARGE_INTEGER DelayInterval; // [rsp+38h] [rbp+10h] BYREF

  DelayInterval.QuadPart = -1000000LL;
  while ( _InterlockedCompareExchange(&dword_180164348, 1, 0) )
  {
    result = dword_180164348;
    if ( dword_180164348 == 1 )
    {
      ZwDelayExecution(0, &DelayInterval);
      result = dword_180164348;
    }
    if ( result == 2 )
      return result;
  }
  result = RtlInitializeCriticalSectionEx(&stru_180164300, 0, 0);
  dword_180164348 = 2;
  return result;
}
