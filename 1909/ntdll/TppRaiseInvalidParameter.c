/*
 * XREFs of TppRaiseInvalidParameter @ 0x18010F0F8
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18002FBA8 (TppPoolpReferenceGlobalPool.c)
 *     TpAllocWait @ 0x180031130 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x1800312D0 (TpSetWaitEx.c)
 *     TppWaitpValidateWait @ 0x1800313F0 (TppWaitpValidateWait.c)
 *     TppCancelWait @ 0x180031458 (TppCancelWait.c)
 *     TppCleanupGroupMemberRelease @ 0x180031774 (TppCleanupGroupMemberRelease.c)
 *     TpAllocTimer @ 0x180031BA0 (TpAllocTimer.c)
 *     TppTimerpValidateTimer @ 0x1800324FC (TppTimerpValidateTimer.c)
 *     TpCallbackIndependent @ 0x1800331B0 (TpCallbackIndependent.c)
 *     TppTimerQueueExpiration @ 0x180035FA0 (TppTimerQueueExpiration.c)
 *     TppWorkpValidateWork @ 0x1800364D8 (TppWorkpValidateWork.c)
 *     TpSimpleTryPost @ 0x180037260 (TpSimpleTryPost.c)
 *     TpAllocIoCompletion @ 0x180062820 (TpAllocIoCompletion.c)
 *     TppIopValidateIo @ 0x180062A10 (TppIopValidateIo.c)
 *     TpStartAsyncIoOperation @ 0x180062A70 (TpStartAsyncIoOperation.c)
 *     TpBindFileToDirect @ 0x180062B90 (TpBindFileToDirect.c)
 *     TpAllocWork @ 0x180062D10 (TpAllocWork.c)
 *     TpSetPoolMaxThreads @ 0x180062EC0 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180062F30 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPool @ 0x180062F90 (TpAllocPool.c)
 *     TpReleaseCleanupGroupMembers @ 0x180066B30 (TpReleaseCleanupGroupMembers.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x180067740 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     TppCallbackMayRunLongProlog @ 0x1800708A8 (TppCallbackMayRunLongProlog.c)
 *     TpAlpcUnregisterCompletionList @ 0x180078A20 (TpAlpcUnregisterCompletionList.c)
 *     TpAlpcRegisterCompletionList @ 0x180078A60 (TpAlpcRegisterCompletionList.c)
 *     TppAlpcpValidateAlpc @ 0x180078BCC (TppAlpcpValidateAlpc.c)
 *     TppAllocAlpcCompletion @ 0x180078C54 (TppAllocAlpcCompletion.c)
 *     TpAllocCleanupGroup @ 0x18007D960 (TpAllocCleanupGroup.c)
 *     TppJobpValidateJob @ 0x18007E6A8 (TppJobpValidateJob.c)
 *     TpAllocJobNotification @ 0x18007E710 (TpAllocJobNotification.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x18007EF60 (TpCallbackUnloadDllOnCompletion.c)
 *     TpDisassociateCallback @ 0x18007F9D0 (TpDisassociateCallback.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180080410 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpDereferenceGlobalPool @ 0x180080A64 (TpDereferenceGlobalPool.c)
 *     TpReleaseCleanupGroup @ 0x180080C20 (TpReleaseCleanupGroup.c)
 *     TpReleasePool @ 0x180081AA0 (TpReleasePool.c)
 *     TpSetPoolMinThreads @ 0x180081F40 (TpSetPoolMinThreads.c)
 *     TpCallbackSetEventOnCompletion @ 0x180084B80 (TpCallbackSetEventOnCompletion.c)
 *     TpCallbackLeaveCriticalSectionOnCompletion @ 0x180089AA0 (TpCallbackLeaveCriticalSectionOnCompletion.c)
 *     TpCallbackReleaseMutexOnCompletion @ 0x180089B90 (TpCallbackReleaseMutexOnCompletion.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x18008C580 (TpCallbackSendPendingAlpcMessage.c)
 *     TpCallbackDetectedUnrecoverableError @ 0x18010EE90 (TpCallbackDetectedUnrecoverableError.c)
 *     TpCallbackReleaseSemaphoreOnCompletion @ 0x18010EEC0 (TpCallbackReleaseSemaphoreOnCompletion.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180053C30 (RtlSetLastWin32Error.c)
 *     RtlRaiseException @ 0x18006A740 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     TppReportExceptionFilter @ 0x18010F178 (TppReportExceptionFilter.c)
 */

void __fastcall TppRaiseInvalidParameter()
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset(&ExceptionRecord.ExceptionFlags, 0, 0x94uLL);
  ExceptionRecord.ExceptionCode = -1073741811;
  RtlSetLastWin32Error(87);
  RtlRaiseException(&ExceptionRecord);
}
