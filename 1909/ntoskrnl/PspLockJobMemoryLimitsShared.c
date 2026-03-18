/*
 * XREFs of PspLockJobMemoryLimitsShared @ 0x1406136C0
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x140613050 (PspEnforceLimitsJobPostCallback.c)
 *     NtQueryInformationJobObject @ 0x140613C40 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     PspApplyJobLimitsToProcess @ 0x140687CF4 (PspApplyJobLimitsToProcess.c)
 *     PsReportProcessMemoryLimitViolation @ 0x1408C6EB4 (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockJobMemoryLimitsShared(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockSharedEx(a1 + 1032, 0LL);
}
