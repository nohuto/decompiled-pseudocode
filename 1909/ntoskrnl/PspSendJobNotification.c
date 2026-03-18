/*
 * XREFs of PspSendJobNotification @ 0x1400EBD44
 * Callers:
 *     PspAssociateCompletionPortCallback @ 0x1405B55A0 (PspAssociateCompletionPortCallback.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140613050 (PspEnforceLimitsJobPostCallback.c)
 *     PspRemoveProcessFromJobChain @ 0x140614EA4 (PspRemoveProcessFromJobChain.c)
 *     PspSendProcessNotificationToJobChain @ 0x140687430 (PspSendProcessNotificationToJobChain.c)
 *     PspIncrementJobChainProcessCounts @ 0x1406887F0 (PspIncrementJobChainProcessCounts.c)
 *     PspValidateJobAssignmentProcessLimits @ 0x140688E14 (PspValidateJobAssignmentProcessLimits.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406B15F0 (PspChangeJobMemoryUsageByProcess.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1408C49B0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsReportProcessMemoryLimitViolation @ 0x1408C6EB4 (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     IoSetIoCompletion @ 0x14068ACB0 (IoSetIoCompletion.c)
 */

__int64 __fastcall PspSendJobNotification(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax

  result = IoSetIoCompletion(*(_QWORD *)(a1 + 456), *(_QWORD *)(a1 + 464), a3, 0, a2, a4);
  if ( (int)result >= 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 472));
  return result;
}
