/*
 * XREFs of LdrpInitMuiCrits @ 0x18000A42C
 * Callers:
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x18000A3AC (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrpGetLoadAsEntry @ 0x180034B94 (LdrpGetLoadAsEntry.c)
 *     LdrAddLoadAsDataTable @ 0x1800783D0 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180078F30 (LdrRemoveLoadAsDataTable.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180061C40 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x1800A0960 (ZwDelayExecution.c)
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
