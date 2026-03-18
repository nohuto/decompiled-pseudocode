/*
 * XREFs of PopEsInStandbyLowPowerEpochCallback @ 0x1408B4230
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopEsInStandbyEvaluate @ 0x1408B4260 (PopEsInStandbyEvaluate.c)
 */

__int64 __fastcall PopEsInStandbyLowPowerEpochCallback(
        LPCGUID SettingGuid,
        PVOID Value,
        ULONG ValueLength,
        PVOID Context)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
  PopEsInStandbyEvaluate();
  PopReleaseRwLock((ULONG_PTR)&PopEsLock);
  return 0LL;
}
