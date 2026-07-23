/*
 * XREFs of TppRaiseInvalidParameter @ 0x180110908
 * Callers:
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x18000C230 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     TpPostWork @ 0x1800148A0 (TpPostWork.c)
 *     TpAllocWait @ 0x18002BF10 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x18002C0B0 (TpSetWaitEx.c)
 *     TppWaitpValidateWait @ 0x18002C1D0 (TppWaitpValidateWait.c)
 *     TppCancelWait @ 0x18002C238 (TppCancelWait.c)
 *     TpAllocTimer @ 0x18002C590 (TpAllocTimer.c)
 *     TppTimerpValidateTimer @ 0x18002C90C (TppTimerpValidateTimer.c)
 *     TppTimerQueueExpiration @ 0x18002CAB0 (TppTimerQueueExpiration.c)
 *     TppWorkpValidateWork @ 0x18002D3EC (TppWorkpValidateWork.c)
 *     TpSimpleTryPost @ 0x18002D4A0 (TpSimpleTryPost.c)
 *     TpAllocWork @ 0x18002D890 (TpAllocWork.c)
 *     TppPoolpReferenceGlobalPool @ 0x18002E600 (TppPoolpReferenceGlobalPool.c)
 *     TppCleanupGroupMemberRelease @ 0x18002F03C (TppCleanupGroupMemberRelease.c)
 *     TppCallbackMayRunLongProlog @ 0x180030528 (TppCallbackMayRunLongProlog.c)
 *     TpBindFileToDirect @ 0x180030EA8 (TpBindFileToDirect.c)
 *     TpAllocIoCompletion @ 0x180030F30 (TpAllocIoCompletion.c)
 *     TppIopValidateIo @ 0x1800311F0 (TppIopValidateIo.c)
 *     TpAllocPool @ 0x180031250 (TpAllocPool.c)
 *     TpDereferenceGlobalPool @ 0x18003135C (TpDereferenceGlobalPool.c)
 *     TppAllocAlpcCompletion @ 0x1800313F8 (TppAllocAlpcCompletion.c)
 *     TpSetPoolMaxThreads @ 0x180031670 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180031710 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180031860 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TppAlpcpValidateAlpc @ 0x1800322A4 (TppAlpcpValidateAlpc.c)
 *     TpAllocJobNotification @ 0x180032300 (TpAllocJobNotification.c)
 *     TppJobpValidateJob @ 0x1800327B0 (TppJobpValidateJob.c)
 *     TpCallbackIndependent @ 0x18006CA90 (TpCallbackIndependent.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800739F0 (TpReleaseCleanupGroupMembers.c)
 *     TpAllocCleanupGroup @ 0x180081FC0 (TpAllocCleanupGroup.c)
 *     TpReleasePool @ 0x180082880 (TpReleasePool.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x180083210 (TpCallbackUnloadDllOnCompletion.c)
 *     TpDisassociateCallback @ 0x180084990 (TpDisassociateCallback.c)
 *     TpReleaseCleanupGroup @ 0x180084D80 (TpReleaseCleanupGroup.c)
 *     TpSetPoolMinThreads @ 0x180085310 (TpSetPoolMinThreads.c)
 *     TpCallbackSetEventOnCompletion @ 0x1800884F0 (TpCallbackSetEventOnCompletion.c)
 *     TpAlpcRegisterCompletionList @ 0x180088A50 (TpAlpcRegisterCompletionList.c)
 *     TpCallbackLeaveCriticalSectionOnCompletion @ 0x1800892F0 (TpCallbackLeaveCriticalSectionOnCompletion.c)
 *     TpAlpcUnregisterCompletionList @ 0x180089320 (TpAlpcUnregisterCompletionList.c)
 *     TpCallbackReleaseMutexOnCompletion @ 0x18008C470 (TpCallbackReleaseMutexOnCompletion.c)
 *     TpCallbackDetectedUnrecoverableError @ 0x180110660 (TpCallbackDetectedUnrecoverableError.c)
 *     TpCallbackReleaseSemaphoreOnCompletion @ 0x180110690 (TpCallbackReleaseSemaphoreOnCompletion.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x1801106D0 (TpCallbackSendPendingAlpcMessage.c)
 * Callees:
 *     RtlRaiseException @ 0x1800087D0 (RtlRaiseException.c)
 *     RtlSetLastWin32Error @ 0x18004ED60 (RtlSetLastWin32Error.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     TppReportExceptionFilter @ 0x180110988 (TppReportExceptionFilter.c)
 */

void __fastcall TppRaiseInvalidParameter()
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  ExceptionRecord.ExceptionCode = -1073741811;
  RtlSetLastWin32Error(87);
  RtlRaiseException(&ExceptionRecord);
}
