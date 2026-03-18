/*
 * XREFs of PspSendJobNotification @ 0x1400E6DA4
 * Callers:
 *     PspAssociateCompletionPortCallback @ 0x1405B51C0 (PspAssociateCompletionPortCallback.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140611540 (PspEnforceLimitsJobPostCallback.c)
 *     PspRemoveProcessFromJobChain @ 0x140613394 (PspRemoveProcessFromJobChain.c)
 *     PspSendProcessNotificationToJobChain @ 0x140693EC0 (PspSendProcessNotificationToJobChain.c)
 *     PspIncrementJobChainProcessCounts @ 0x140695280 (PspIncrementJobChainProcessCounts.c)
 *     PspValidateJobAssignmentProcessLimits @ 0x1406958A4 (PspValidateJobAssignmentProcessLimits.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406AF6C0 (PspChangeJobMemoryUsageByProcess.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1408C50E0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsReportProcessMemoryLimitViolation @ 0x1408C75D4 (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     IoSetIoCompletion @ 0x140697740 (IoSetIoCompletion.c)
 */

__int64 __fastcall PspSendJobNotification(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax

  result = IoSetIoCompletion(*(_QWORD *)(a1 + 456), *(_QWORD *)(a1 + 464), a3, 0, a2, a4);
  if ( (int)result >= 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 472));
  return result;
}
