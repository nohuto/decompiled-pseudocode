/*
 * XREFs of PopSetDisplayStatus @ 0x14072C12C
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1400F17F0 (PsGetProcessSessionIdEx.c)
 *     PopAcquireAdaptiveLock @ 0x1406EF0C8 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1406F05CC (PopReleaseAdaptiveLock.c)
 *     PopSetSessionDisplayStatus @ 0x14073CED8 (PopSetSessionDisplayStatus.c)
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
