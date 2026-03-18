/*
 * XREFs of PspLockJobMemoryLimitsShared @ 0x1405FE360
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x1405FDD20 (PspEnforceLimitsJobPostCallback.c)
 *     NtQueryInformationJobObject @ 0x1405FE8F0 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 *     PspApplyJobLimitsToProcess @ 0x140604550 (PspApplyJobLimitsToProcess.c)
 *     PsReportProcessMemoryLimitViolation @ 0x140889694 (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockJobMemoryLimitsShared(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockSharedEx(a1 + 1032, 0LL);
}
