/*
 * XREFs of PspUnlockJobMemoryLimitsShared @ 0x140613614
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x140613050 (PspEnforceLimitsJobPostCallback.c)
 *     NtQueryInformationJobObject @ 0x140613C40 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     PspApplyJobLimitsToProcess @ 0x140687CF4 (PspApplyJobLimitsToProcess.c)
 *     PsReportProcessMemoryLimitViolation @ 0x1408C6EB4 (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 */

char __fastcall PspUnlockJobMemoryLimitsShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx
  char result; // al

  v2 = a1 + 1032;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1032), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1032));
  result = KeAbPostRelease(v2);
  if ( a2 )
    return KiLeaveGuardedRegionUnsafe(a2);
  return result;
}
