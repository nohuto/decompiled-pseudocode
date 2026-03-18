/*
 * XREFs of PopQueryInputSuppressionCount @ 0x1408AA2A8
 * Callers:
 *     PopCalculateCsSummary @ 0x1402FB520 (PopCalculateCsSummary.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
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
