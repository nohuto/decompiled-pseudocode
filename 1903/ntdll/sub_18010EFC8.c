/*
 * XREFs of sub_18010EFC8 @ 0x18010EFC8
 * Callers:
 *     sub_18002FBA8 @ 0x18002FBA8 (sub_18002FBA8.c)
 *     TpAllocWait @ 0x180031130 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x1800312D0 (TpSetWaitEx.c)
 *     sub_1800313F0 @ 0x1800313F0 (sub_1800313F0.c)
 *     sub_180031458 @ 0x180031458 (sub_180031458.c)
 *     sub_180031774 @ 0x180031774 (sub_180031774.c)
 *     TpAllocTimer @ 0x180031BA0 (TpAllocTimer.c)
 *     sub_1800324FC @ 0x1800324FC (sub_1800324FC.c)
 *     TpCallbackIndependent @ 0x1800331B0 (TpCallbackIndependent.c)
 *     sub_180035FA0 @ 0x180035FA0 (sub_180035FA0.c)
 *     sub_1800364D8 @ 0x1800364D8 (sub_1800364D8.c)
 *     TpSimpleTryPost @ 0x180037260 (TpSimpleTryPost.c)
 *     TpAllocIoCompletion @ 0x180062780 (TpAllocIoCompletion.c)
 *     sub_180062970 @ 0x180062970 (sub_180062970.c)
 *     TpStartAsyncIoOperation @ 0x1800629D0 (TpStartAsyncIoOperation.c)
 *     sub_180062AF0 @ 0x180062AF0 (sub_180062AF0.c)
 *     TpAllocWork @ 0x180062C70 (TpAllocWork.c)
 *     TpSetPoolMaxThreads @ 0x180062E20 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180062E90 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPool @ 0x180062EF0 (TpAllocPool.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800668E0 (TpReleaseCleanupGroupMembers.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x1800674F0 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     sub_180070658 @ 0x180070658 (sub_180070658.c)
 *     TpAlpcUnregisterCompletionList @ 0x1800785A0 (TpAlpcUnregisterCompletionList.c)
 *     TpAlpcRegisterCompletionList @ 0x1800785E0 (TpAlpcRegisterCompletionList.c)
 *     sub_18007874C @ 0x18007874C (sub_18007874C.c)
 *     sub_1800787D4 @ 0x1800787D4 (sub_1800787D4.c)
 *     TpAllocCleanupGroup @ 0x18007D2C0 (TpAllocCleanupGroup.c)
 *     sub_18007E008 @ 0x18007E008 (sub_18007E008.c)
 *     TpAllocJobNotification @ 0x18007E070 (TpAllocJobNotification.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x18007E8C0 (TpCallbackUnloadDllOnCompletion.c)
 *     TpDisassociateCallback @ 0x18007F330 (TpDisassociateCallback.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x18007FD70 (TpSetPoolMaxThreadsSoftLimit.c)
 *     sub_1800803C4 @ 0x1800803C4 (sub_1800803C4.c)
 *     TpReleaseCleanupGroup @ 0x180080580 (TpReleaseCleanupGroup.c)
 *     TpReleasePool @ 0x180081400 (TpReleasePool.c)
 *     TpSetPoolMinThreads @ 0x1800818A0 (TpSetPoolMinThreads.c)
 *     TpCallbackSetEventOnCompletion @ 0x1800844E0 (TpCallbackSetEventOnCompletion.c)
 *     TpCallbackLeaveCriticalSectionOnCompletion @ 0x180089400 (TpCallbackLeaveCriticalSectionOnCompletion.c)
 *     TpCallbackReleaseMutexOnCompletion @ 0x1800894F0 (TpCallbackReleaseMutexOnCompletion.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x18008BEE0 (TpCallbackSendPendingAlpcMessage.c)
 *     TpCallbackDetectedUnrecoverableError @ 0x18010ED60 (TpCallbackDetectedUnrecoverableError.c)
 *     TpCallbackReleaseSemaphoreOnCompletion @ 0x18010ED90 (TpCallbackReleaseSemaphoreOnCompletion.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180053B90 (RtlSetLastWin32Error.c)
 *     RtlRaiseException @ 0x18006A4F0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_18010F048 @ 0x18010F048 (sub_18010F048.c)
 */

void __fastcall sub_18010EFC8()
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset(&ExceptionRecord.ExceptionFlags, 0, 0x94uLL);
  ExceptionRecord.ExceptionCode = -1073741811;
  RtlSetLastWin32Error(87);
  RtlRaiseException(&ExceptionRecord);
}
