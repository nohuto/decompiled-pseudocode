/*
 * XREFs of PopEsHostStateChange @ 0x1408B4924
 * Callers:
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     PopEsQueueStateEvaluation @ 0x140738908 (PopEsQueueStateEvaluation.c)
 */

__int64 __fastcall PopEsHostStateChange(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
  PopEsEnabledOnHost = a1;
  PopReleaseRwLock((ULONG_PTR)&PopEsLock);
  return PopEsQueueStateEvaluation(0);
}
