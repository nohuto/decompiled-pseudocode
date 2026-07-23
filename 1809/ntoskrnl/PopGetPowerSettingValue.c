/*
 * XREFs of PopGetPowerSettingValue @ 0x140003B10
 * Callers:
 *     PopScanIdleList @ 0x140010050 (PopScanIdleList.c)
 *     PopBackgroundActivityPolicyCallback @ 0x1402D6DC0 (PopBackgroundActivityPolicyCallback.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402DF2DC (PopCaptureSleepStudyStatistics.c)
 *     PopBatteryUpdateAlarms @ 0x1407485CC (PopBatteryUpdateAlarms.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     PopFindPowerSettingConfiguration @ 0x14058C7CC (PopFindPowerSettingConfiguration.c)
 */

__int64 __fastcall PopGetPowerSettingValue(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        __int64 a5,
        unsigned int *a6)
{
  __int64 PowerSettingConfiguration; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  unsigned int v12; // ecx

  ExAcquireFastMutex(&PopSettingLock);
  if ( a3 > 1 )
    a3 = dword_14041918C;
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, 0xFFFFFFFFLL);
  v10 = 0;
  if ( PowerSettingConfiguration && (v11 = *(_QWORD *)(PowerSettingConfiguration + 8LL * (int)a3 + 64)) != 0 )
  {
    v12 = *(_DWORD *)(v11 + 4);
    *a6 = v12;
    if ( v12 > 4 )
      v10 = -1073741306;
    else
      memmove(a4, (const void *)(v11 + 12), v12);
  }
  else
  {
    v10 = -1073741811;
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  return v10;
}
