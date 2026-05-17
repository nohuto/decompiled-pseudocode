/*
 * XREFs of sub_180012D4C @ 0x180012D4C
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180013B50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800141C0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_1800151CC @ 0x1800151CC (sub_1800151CC.c)
 *     sub_18007FED8 @ 0x18007FED8 (sub_18007FED8.c)
 *     RtlSetProcessPreferredUILanguages @ 0x1800849D0 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x180088AB0 (RtlGetProcessPreferredUILanguages.c)
 *     sub_18008AC6C @ 0x18008AC6C (sub_18008AC6C.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2E0 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180035C80 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x18009CD60 (ZwDelayExecution.c)
 */

__int64 sub_180012D4C()
{
  __int64 result; // rax
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = -1000000LL;
  while ( _InterlockedCompareExchange(&dword_1801664B8, 1, 0) )
  {
    result = (unsigned int)dword_1801664B8;
    if ( dword_1801664B8 == 1 )
    {
      ZwDelayExecution(0LL, &v1);
      result = (unsigned int)dword_1801664B8;
    }
    if ( (_DWORD)result == 2 )
      return result;
  }
  result = RtlInitializeCriticalSectionEx(&unk_180163D00, 0LL, 0LL);
  dword_1801664B8 = 2;
  return result;
}
