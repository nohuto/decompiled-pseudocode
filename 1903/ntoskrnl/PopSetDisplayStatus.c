/*
 * XREFs of PopSetDisplayStatus @ 0x14072A294
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1400EE790 (PsGetProcessSessionIdEx.c)
 *     PopAcquireAdaptiveLock @ 0x1406A3C58 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1406EEAE4 (PopReleaseAdaptiveLock.c)
 *     PopSetSessionDisplayStatus @ 0x14073AF78 (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSetDisplayStatus(unsigned int a1)
{
  unsigned int ProcessSessionId; // ebx
  __int64 v3; // r8

  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  PopAcquireAdaptiveLock(1);
  LOBYTE(v3) = 1;
  PopSetSessionDisplayStatus(ProcessSessionId, a1, v3);
  return PopReleaseAdaptiveLock();
}
