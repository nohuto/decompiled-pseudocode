/*
 * XREFs of LdrpInitMuiCrits @ 0x18001A790
 * Callers:
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x18001A7F0 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrpGetLoadAsEntry @ 0x180054D14 (LdrpGetLoadAsEntry.c)
 *     LdrAddLoadAsDataTable @ 0x180072620 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800739E0 (LdrRemoveLoadAsDataTable.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180035C80 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x18009D510 (ZwDelayExecution.c)
 */

__int64 LdrpInitMuiCrits()
{
  __int64 result; // rax
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = -1000000LL;
  while ( _InterlockedCompareExchange(&DataLoadLockCount, 1, 0) )
  {
    result = (unsigned int)DataLoadLockCount;
    if ( DataLoadLockCount == 1 )
    {
      ZwDelayExecution(0LL, &v1);
      result = (unsigned int)DataLoadLockCount;
    }
    if ( (_DWORD)result == 2 )
      return result;
  }
  result = RtlInitializeCriticalSectionEx(&LoadAsDataCrits, 0LL, 0LL);
  DataLoadLockCount = 2;
  return result;
}
