/*
 * XREFs of PopQueryInputSuppressionCount @ 0x14086F140
 * Callers:
 *     PopCalculateCsSummary @ 0x1402DED48 (PopCalculateCsSummary.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
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
