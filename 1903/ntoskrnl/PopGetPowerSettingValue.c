/*
 * XREFs of PopGetPowerSettingValue @ 0x1400ED34C
 * Callers:
 *     PopScanIdleList @ 0x1400EDD84 (PopScanIdleList.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402FC0EC (PopCaptureSleepStudyStatistics.c)
 *     PopBatteryUpdateAlarms @ 0x1407498CC (PopBatteryUpdateAlarms.c)
 *     PopEsInStandbyEvaluate @ 0x1408B4990 (PopEsInStandbyEvaluate.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     PopFindPowerSettingConfiguration @ 0x1406A177C (PopFindPowerSettingConfiguration.c)
 */

__int64 __fastcall PopGetPowerSettingValue(
        __int64 a1,
        __int64 a2,
        signed int a3,
        void *a4,
        __int64 a5,
        unsigned int *a6)
{
  __int64 PowerSettingConfiguration; // rax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  unsigned int v12; // edx

  ExAcquireFastMutex(&PopSettingLock);
  if ( (unsigned int)a3 > 1 )
    a3 = dword_140443ACC;
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, 0xFFFFFFFFLL);
  v10 = 0;
  if ( PowerSettingConfiguration && (v11 = *(_QWORD *)(PowerSettingConfiguration + 8LL * a3 + 64)) != 0 )
  {
    v12 = *(_DWORD *)(v11 + 4);
    *a6 = v12;
    if ( v12 > 4 )
      v10 = -1073741306;
    else
      memmove(a4, (const void *)(*(_QWORD *)(PowerSettingConfiguration + 8LL * a3 + 64) + 12LL), v12);
  }
  else
  {
    v10 = -1073741811;
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  return v10;
}
