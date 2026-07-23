/*
 * XREFs of RtlRaiseStatus @ 0x1800FBE10
 * Callers:
 *     RtlpLookupPrimaryFunctionEntry @ 0x1800010F0 (RtlpLookupPrimaryFunctionEntry.c)
 *     RtlpWaitOnCriticalSection @ 0x180007200 (RtlpWaitOnCriticalSection.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlVirtualUnwind @ 0x18001CC50 (RtlVirtualUnwind.c)
 *     RtlUnwindEx @ 0x18001D490 (RtlUnwindEx.c)
 *     RtlpxLookupFunctionTable @ 0x18001E620 (RtlpxLookupFunctionTable.c)
 *     RtlpWalkFrameChain @ 0x18001F4F0 (RtlpWalkFrameChain.c)
 *     LdrpInitializeThread @ 0x180022CE8 (LdrpInitializeThread.c)
 *     RtlInitializeResource @ 0x1800338D0 (RtlInitializeResource.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlpFreeHeap @ 0x180041AB0 (RtlpFreeHeap.c)
 *     RtlpSubSegmentInitialize @ 0x18004A2C0 (RtlpSubSegmentInitialize.c)
 *     RtlConvertSharedToExclusive @ 0x18005FA80 (RtlConvertSharedToExclusive.c)
 *     RtlAcquireResourceShared @ 0x18005FBB0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18005FCC0 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x18005FE00 (RtlReleaseResource.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180065670 (RtlDeleteGrowableFunctionTable.c)
 *     RtlDecodePointer @ 0x180067FF0 (RtlDecodePointer.c)
 *     RtlRaiseException @ 0x18006A740 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x18006A8C0 (RtlDispatchException.c)
 *     RtlUserThreadStart @ 0x18006D700 (RtlUserThreadStart.c)
 *     RtlDeactivateActivationContext @ 0x18006ED50 (RtlDeactivateActivationContext.c)
 *     InitializeSListHead @ 0x18006F2CC (InitializeSListHead.c)
 *     LdrpReportError @ 0x18006F5D8 (LdrpReportError.c)
 *     RtlEncodePointer @ 0x18006FE20 (RtlEncodePointer.c)
 *     LdrInitializeThunk @ 0x180072040 (LdrInitializeThunk.c)
 *     _LdrpInitialize @ 0x1800720BC (_LdrpInitialize.c)
 *     RtlpCallVectoredHandlers @ 0x180078F20 (RtlpCallVectoredHandlers.c)
 *     LdrLockLoaderLock @ 0x18007C5F0 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x18007D300 (LdrUnlockLoaderLock.c)
 *     RtlSetUnhandledExceptionFilter @ 0x18007F010 (RtlSetUnhandledExceptionFilter.c)
 *     RtlpAddVectoredHandler @ 0x18007FF70 (RtlpAddVectoredHandler.c)
 *     RtlpUnwindOpSlots @ 0x18008300C (RtlpUnwindOpSlots.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x180084B10 (RtlConvertSRWLockExclusiveToShared.c)
 *     RtlConvertExclusiveToShared @ 0x18008AA90 (RtlConvertExclusiveToShared.c)
 *     KiUserApcDispatcher @ 0x1800A0AE0 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcherHandler @ 0x1800A0B60 (KiUserCallbackDispatcherHandler.c)
 *     KiUserCallbackDispatcher @ 0x1800A0BF0 (KiUserCallbackDispatcher.c)
 *     KiUserExceptionDispatcher @ 0x1800A0C40 (KiUserExceptionDispatcher.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CFCA0 (LdrpLogFatalUserCallbackException.c)
 *     LdrpFatalExceptionFilter @ 0x1800D582C (LdrpFatalExceptionFilter.c)
 *     RtlGrowFunctionTable @ 0x1800DFD60 (RtlGrowFunctionTable.c)
 *     RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x1800E6840 (RtlTryConvertSRWLockSharedToExclusiveOrRelease.c)
 *     RtlpInitDeferredCriticalSection @ 0x1800E6B9C (RtlpInitDeferredCriticalSection.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E6C20 (RtlpNotOwnerCriticalSection.c)
 *     RtlpPossibleDeadlock @ 0x1800E6D78 (RtlpPossibleDeadlock.c)
 *     RtlpUnWaitCriticalSection @ 0x1800E6F50 (RtlpUnWaitCriticalSection.c)
 *     RtlIsNameInExpression @ 0x1800F4F50 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1800F5000 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800F50DC (RtlpIsNameInExpressionPrivate.c)
 *     RtlInitializeContext @ 0x1800F8C40 (RtlInitializeContext.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 *     RtlpInitRandomExVector @ 0x1800FBEA0 (RtlpInitRandomExVector.c)
 *     TppExceptionFilter @ 0x18010EFB4 (TppExceptionFilter.c)
 * Callees:
 *     RtlDispatchException @ 0x18006A8C0 (RtlDispatchException.c)
 *     ZwRaiseException @ 0x18009FA80 (ZwRaiseException.c)
 *     RtlpCaptureContext @ 0x1800A0E60 (RtlpCaptureContext.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 */

void __cdecl __noreturn RtlRaiseStatus(NTSTATUS Status)
{
  BOOLEAN v2; // bl
  NTSTATUS v3; // eax
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-578h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+C0h] [rbp-4D8h] BYREF

  RtlpCaptureContext((__int64)&ContextRecord);
  ExceptionRecord.ExceptionCode = Status;
  v2 = 0;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.NumberParameters = 0;
  ExceptionRecord.ExceptionAddress = (void *)ContextRecord.Rip;
  ExceptionRecord.ExceptionFlags = 1;
  if ( NtCurrentPeb()->BeingDebugged )
    v2 = 1;
  else
    RtlDispatchException(&ExceptionRecord, &ContextRecord);
  v3 = ZwRaiseException(&ExceptionRecord, &ContextRecord, v2);
  RtlRaiseStatus(v3);
}
