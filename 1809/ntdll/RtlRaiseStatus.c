/*
 * XREFs of RtlRaiseStatus @ 0x18009F6A0
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
 *     RtlEncodePointer @ 0x1800758F0 (RtlEncodePointer.c)
 *     RtlInitializeSListHead @ 0x180076240 (RtlInitializeSListHead.c)
 *     RtlDeactivateActivationContext @ 0x1800766F0 (RtlDeactivateActivationContext.c)
 *     LdrpReportError @ 0x180077170 (LdrpReportError.c)
 *     LdrInitializeThunk @ 0x1800786D0 (LdrInitializeThunk.c)
 *     _LdrpInitialize @ 0x18007874C (_LdrpInitialize.c)
 *     LdrLockLoaderLock @ 0x180081040 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x180081CA0 (LdrUnlockLoaderLock.c)
 *     RtlSetUnhandledExceptionFilter @ 0x1800833C0 (RtlSetUnhandledExceptionFilter.c)
 *     RtlpAddVectoredHandler @ 0x180084200 (RtlpAddVectoredHandler.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x180088C10 (RtlConvertSRWLockExclusiveToShared.c)
 *     RtlConvertExclusiveToShared @ 0x18008DD70 (RtlConvertExclusiveToShared.c)
 *     RtlpUnwindOpSlots @ 0x18009F658 (RtlpUnwindOpSlots.c)
 *     RtlRaiseStatus @ 0x18009F6A0 (RtlRaiseStatus.c)
 *     KiUserApcDispatcher @ 0x1800A3F10 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcherHandler @ 0x1800A3F90 (KiUserCallbackDispatcherHandler.c)
 *     KiUserCallbackDispatcher @ 0x1800A4020 (KiUserCallbackDispatcher.c)
 *     KiUserExceptionDispatcher @ 0x1800A4070 (KiUserExceptionDispatcher.c)
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
 *     RtlRaiseStatus @ 0x18009F6A0 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x1800A2EB0 (ZwRaiseException.c)
 *     RtlpCaptureContext @ 0x1800A4290 (RtlpCaptureContext.c)
 */

void __fastcall __noreturn RtlRaiseStatus(int a1)
{
  __int64 v2; // r8
  char v3; // bl
  unsigned int v4; // eax
  _DWORD v5[2]; // [rsp+20h] [rbp-578h] BYREF
  __int64 v6; // [rsp+28h] [rbp-570h]
  __int64 v7; // [rsp+30h] [rbp-568h]
  int v8; // [rsp+38h] [rbp-560h]
  _BYTE v9[248]; // [rsp+C0h] [rbp-4D8h] BYREF
  __int64 v10; // [rsp+1B8h] [rbp-3E0h]

  RtlpCaptureContext(v9);
  v5[0] = a1;
  v3 = 0;
  v6 = 0LL;
  v8 = 0;
  v7 = v10;
  v5[1] = 1;
  if ( NtCurrentPeb()->BeingDebugged )
    v3 = 1;
  else
    RtlDispatchException((__int64)v5, (__int64)v9);
  LOBYTE(v2) = v3;
  v4 = ZwRaiseException(v5, v9, v2);
  RtlRaiseStatus(v4);
}
