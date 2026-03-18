/*
 * XREFs of PopEsInStandbyLowPowerEpochCallback @ 0x1408B4960
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     PopEsInStandbyEvaluate @ 0x1408B4990 (PopEsInStandbyEvaluate.c)
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
