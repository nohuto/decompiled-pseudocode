/*
 * XREFs of PspLockJobMemoryLimitsShared @ 0x140611BB0
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x140611540 (PspEnforceLimitsJobPostCallback.c)
 *     NtQueryInformationJobObject @ 0x140612130 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     PspApplyJobLimitsToProcess @ 0x140694784 (PspApplyJobLimitsToProcess.c)
 *     PsReportProcessMemoryLimitViolation @ 0x1408C75D4 (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockJobMemoryLimitsShared(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockSharedEx(a1 + 1032, 0LL);
}
