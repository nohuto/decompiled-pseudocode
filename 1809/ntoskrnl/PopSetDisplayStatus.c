/*
 * XREFs of PopSetDisplayStatus @ 0x1406E31A0
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140003190 (PsGetProcessSessionIdEx.c)
 *     PopReleaseAdaptiveLock @ 0x1406DD8D0 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x1406DD964 (PopAcquireAdaptiveLock.c)
 *     PopSetSessionDisplayStatus @ 0x14071EA74 (PopSetSessionDisplayStatus.c)
 */

_QWORD *__fastcall PopSetDisplayStatus(unsigned int a1)
{
  unsigned int ProcessSessionId; // ebx
  __int64 v3; // r8

  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  PopAcquireAdaptiveLock(1);
  LOBYTE(v3) = 1;
  PopSetSessionDisplayStatus(ProcessSessionId, a1, v3);
  return PopReleaseAdaptiveLock();
}
