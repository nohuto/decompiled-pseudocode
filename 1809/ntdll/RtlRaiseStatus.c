/*
 * XREFs of RtlRaiseStatus @ 0x18009F6C0
 * Callers:
 *     RtlpLookupPrimaryFunctionEntry @ 0x180002ED4 (RtlpLookupPrimaryFunctionEntry.c)
 *     RtlpWalkFrameChain @ 0x1800038B0 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x1800048E0 (RtlDispatchException.c)
 *     RtlVirtualUnwind @ 0x1800053B0 (RtlVirtualUnwind.c)
 *     RtlUnwindEx @ 0x180005BF0 (RtlUnwindEx.c)
 *     RtlpxLookupFunctionTable @ 0x180006E00 (RtlpxLookupFunctionTable.c)
 *     RtlRaiseException @ 0x1800087D0 (RtlRaiseException.c)
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlpSubSegmentInitialize @ 0x18000ED20 (RtlpSubSegmentInitialize.c)
 *     RtlpHpLfhSlotAllocate @ 0x1800110C0 (RtlpHpLfhSlotAllocate.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlpFreeHeap @ 0x180019FC0 (RtlpFreeHeap.c)
 *     LdrpInitializeThread @ 0x18002356C (LdrpInitializeThread.c)
 *     RtlUserThreadStart @ 0x18005A8A0 (RtlUserThreadStart.c)
 *     RtlpWaitOnCriticalSection @ 0x18005EA34 (RtlpWaitOnCriticalSection.c)
 *     RtlInitializeResource @ 0x180061A10 (RtlInitializeResource.c)
 *     RtlpCallVectoredHandlers @ 0x18006CC90 (RtlpCallVectoredHandlers.c)
 *     RtlAcquireResourceShared @ 0x18006DCC0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18006DE00 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x18006DF10 (RtlReleaseResource.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006ED50 (RtlDeleteGrowableFunctionTable.c)
 *     RtlDecodePointer @ 0x180072AF0 (RtlDecodePointer.c)
 *     RtlEncodePointer @ 0x180075900 (RtlEncodePointer.c)
 *     RtlInitializeSListHead @ 0x180076250 (RtlInitializeSListHead.c)
 *     RtlDeactivateActivationContext @ 0x180076700 (RtlDeactivateActivationContext.c)
 *     LdrpReportError @ 0x180077180 (LdrpReportError.c)
 *     LdrInitializeThunk @ 0x1800786E0 (LdrInitializeThunk.c)
 *     _LdrpInitialize @ 0x18007875C (_LdrpInitialize.c)
 *     LdrLockLoaderLock @ 0x180081050 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x180081CB0 (LdrUnlockLoaderLock.c)
 *     RtlSetUnhandledExceptionFilter @ 0x1800833D0 (RtlSetUnhandledExceptionFilter.c)
 *     RtlpAddVectoredHandler @ 0x180084210 (RtlpAddVectoredHandler.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x180088C20 (RtlConvertSRWLockExclusiveToShared.c)
 *     RtlConvertExclusiveToShared @ 0x18008DD80 (RtlConvertExclusiveToShared.c)
 *     RtlpUnwindOpSlots @ 0x18009F66C (RtlpUnwindOpSlots.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     KiUserApcDispatcher @ 0x1800A3F30 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcherHandler @ 0x1800A3FB0 (KiUserCallbackDispatcherHandler.c)
 *     KiUserCallbackDispatcher @ 0x1800A4040 (KiUserCallbackDispatcher.c)
 *     KiUserExceptionDispatcher @ 0x1800A4090 (KiUserExceptionDispatcher.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D14D0 (LdrpLogFatalUserCallbackException.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 *     LdrpFatalExceptionFilter @ 0x1800D78AC (LdrpFatalExceptionFilter.c)
 *     RtlGrowFunctionTable @ 0x1800E2110 (RtlGrowFunctionTable.c)
 *     RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x1800E94A0 (RtlTryConvertSRWLockSharedToExclusiveOrRelease.c)
 *     RtlpInitDeferredCriticalSection @ 0x1800E980C (RtlpInitDeferredCriticalSection.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E9920 (RtlpNotOwnerCriticalSection.c)
 *     RtlpPossibleDeadlock @ 0x1800E9A20 (RtlpPossibleDeadlock.c)
 *     RtlpUnWaitCriticalSection @ 0x1800E9B90 (RtlpUnWaitCriticalSection.c)
 *     RtlInitializeContext @ 0x1800FAFA0 (RtlInitializeContext.c)
 *     RtlIsNameInExpression @ 0x1800FB580 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1800FB630 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800FB70C (RtlpIsNameInExpressionPrivate.c)
 *     RtlpInitRandomExVector @ 0x1800FE940 (RtlpInitRandomExVector.c)
 *     TppExceptionFilter @ 0x1801107C4 (TppExceptionFilter.c)
 * Callees:
 *     RtlDispatchException @ 0x1800048E0 (RtlDispatchException.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x1800A2ED0 (ZwRaiseException.c)
 *     RtlpCaptureContext @ 0x1800A42B0 (RtlpCaptureContext.c)
 */

void __cdecl __noreturn RtlRaiseStatus(NTSTATUS Status)
{
  BOOLEAN v2; // bl
  NTSTATUS v3; // eax
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-578h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+C0h] [rbp-4D8h] BYREF

  RtlpCaptureContext(&ContextRecord);
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
