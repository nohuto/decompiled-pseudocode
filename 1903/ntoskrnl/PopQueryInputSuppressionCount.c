/*
 * XREFs of PopQueryInputSuppressionCount @ 0x1408AAA48
 * Callers:
 *     PopCalculateCsSummary @ 0x1402FBA70 (PopCalculateCsSummary.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 */

void __fastcall PopQueryInputSuppressionCount(int *a1)
{
  int v2; // eax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopInputSuppressionLock);
  v2 = PopInputSuppressionActionCount;
  PopInputSuppressionActionCount = 0;
  *a1 = v2;
  PopReleaseRwLock((ULONG_PTR)&PopInputSuppressionLock);
}
