/*
 * XREFs of PopEsHostStateChange @ 0x1408B41F4
 * Callers:
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopEsQueueStateEvaluation @ 0x14073AB68 (PopEsQueueStateEvaluation.c)
 */

__int64 __fastcall PopEsHostStateChange(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
  PopEsEnabledOnHost = a1;
  PopReleaseRwLock((ULONG_PTR)&PopEsLock);
  return PopEsQueueStateEvaluation(0);
}
