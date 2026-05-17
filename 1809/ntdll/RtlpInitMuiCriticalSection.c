/*
 * XREFs of RtlpInitMuiCriticalSection @ 0x18003B9B0
 * Callers:
 *     RtlpSetProcUserMachineLangList @ 0x18003C1E4 (RtlpSetProcUserMachineLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18003CC60 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003F300 (RtlpCreateProcessRegistryInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18004CD34 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpSetProcMergedLangList @ 0x180084AFC (RtlpSetProcMergedLangList.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180088CD0 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x18008BBD0 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EF6F0 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180061C40 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x1800A0960 (ZwDelayExecution.c)
 */

__int64 RtlpInitMuiCriticalSection()
{
  __int64 result; // rax
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = -1000000LL;
  while ( _InterlockedCompareExchange(&InitRegistryInfoCritSect, 1, 0) )
  {
    result = (unsigned int)InitRegistryInfoCritSect;
    if ( InitRegistryInfoCritSect == 1 )
    {
      ZwDelayExecution(0LL, &v1);
      result = (unsigned int)InitRegistryInfoCritSect;
    }
    if ( (_DWORD)result == 2 )
      return result;
  }
  result = RtlInitializeCriticalSectionEx(&RegistryInfoCritSect, 0LL, 0LL);
  InitRegistryInfoCritSect = 2;
  return result;
}
