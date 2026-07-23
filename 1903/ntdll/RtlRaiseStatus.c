/*
 * XREFs of RtlRaiseStatus @ 0x1800FBD30
 * Callers:
 *     sub_1800010F0 @ 0x1800010F0 (sub_1800010F0.c)
 *     sub_180007200 @ 0x180007200 (sub_180007200.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlVirtualUnwind @ 0x18001CC50 (RtlVirtualUnwind.c)
 *     RtlUnwindEx @ 0x18001D490 (RtlUnwindEx.c)
 *     sub_18001E620 @ 0x18001E620 (sub_18001E620.c)
 *     sub_18001F4F0 @ 0x18001F4F0 (sub_18001F4F0.c)
 *     sub_180022CE8 @ 0x180022CE8 (sub_180022CE8.c)
 *     RtlInitializeResource @ 0x1800338D0 (RtlInitializeResource.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 *     sub_18004A220 @ 0x18004A220 (sub_18004A220.c)
 *     RtlConvertSharedToExclusive @ 0x18005F9E0 (RtlConvertSharedToExclusive.c)
 *     RtlAcquireResourceShared @ 0x18005FB10 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18005FC20 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x18005FD60 (RtlReleaseResource.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800654E0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlDecodePointer @ 0x180067DA0 (RtlDecodePointer.c)
 *     RtlRaiseException @ 0x18006A4F0 (RtlRaiseException.c)
 *     sub_18006A670 @ 0x18006A670 (sub_18006A670.c)
 *     RtlUserThreadStart @ 0x18006D4B0 (RtlUserThreadStart.c)
 *     RtlDeactivateActivationContext @ 0x18006EB00 (RtlDeactivateActivationContext.c)
 *     RtlInitializeSListHead_0 @ 0x18006F07C (RtlInitializeSListHead_0.c)
 *     sub_18006F388 @ 0x18006F388 (sub_18006F388.c)
 *     RtlEncodePointer @ 0x18006FBD0 (RtlEncodePointer.c)
 *     LdrInitializeThunk @ 0x180071DF0 (LdrInitializeThunk.c)
 *     sub_180071E6C @ 0x180071E6C (sub_180071E6C.c)
 *     sub_180078AA0 @ 0x180078AA0 (sub_180078AA0.c)
 *     LdrLockLoaderLock @ 0x18007BF50 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x18007CC60 (LdrUnlockLoaderLock.c)
 *     RtlSetUnhandledExceptionFilter @ 0x18007E970 (RtlSetUnhandledExceptionFilter.c)
 *     sub_18007F8D0 @ 0x18007F8D0 (sub_18007F8D0.c)
 *     sub_18008296C @ 0x18008296C (sub_18008296C.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x180084470 (RtlConvertSRWLockExclusiveToShared.c)
 *     RtlConvertExclusiveToShared @ 0x18008A3F0 (RtlConvertExclusiveToShared.c)
 *     KiUserApcDispatcher @ 0x1800A0330 (KiUserApcDispatcher.c)
 *     sub_1800A03B0 @ 0x1800A03B0 (sub_1800A03B0.c)
 *     KiUserCallbackDispatcher @ 0x1800A0440 (KiUserCallbackDispatcher.c)
 *     KiUserExceptionDispatcher @ 0x1800A0490 (KiUserExceptionDispatcher.c)
 *     sub_1800CFBE0 @ 0x1800CFBE0 (sub_1800CFBE0.c)
 *     sub_1800D576C @ 0x1800D576C (sub_1800D576C.c)
 *     RtlGrowFunctionTable @ 0x1800DFCA0 (RtlGrowFunctionTable.c)
 *     RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x1800E6750 (RtlTryConvertSRWLockSharedToExclusiveOrRelease.c)
 *     sub_1800E6AAC @ 0x1800E6AAC (sub_1800E6AAC.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E6B30 (RtlpNotOwnerCriticalSection.c)
 *     sub_1800E6C88 @ 0x1800E6C88 (sub_1800E6C88.c)
 *     RtlpUnWaitCriticalSection @ 0x1800E6E60 (RtlpUnWaitCriticalSection.c)
 *     RtlIsNameInExpression @ 0x1800F4E70 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1800F4F20 (RtlIsNameInUnUpcasedExpression.c)
 *     sub_1800F4FFC @ 0x1800F4FFC (sub_1800F4FFC.c)
 *     RtlInitializeContext @ 0x1800F8B60 (RtlInitializeContext.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 *     sub_1800FBDC0 @ 0x1800FBDC0 (sub_1800FBDC0.c)
 *     sub_18010EE84 @ 0x18010EE84 (sub_18010EE84.c)
 * Callees:
 *     sub_18006A670 @ 0x18006A670 (sub_18006A670.c)
 *     ZwRaiseException @ 0x18009F2D0 (ZwRaiseException.c)
 *     sub_1800A06B0 @ 0x1800A06B0 (sub_1800A06B0.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

void __cdecl __noreturn RtlRaiseStatus(NTSTATUS Status)
{
  BOOLEAN v2; // bl
  NTSTATUS v3; // eax
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-578h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+C0h] [rbp-4D8h] BYREF

  sub_1800A06B0((__int64)&ContextRecord);
  ExceptionRecord.ExceptionCode = Status;
  v2 = 0;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.NumberParameters = 0;
  ExceptionRecord.ExceptionAddress = (PVOID)ContextRecord.Rip;
  ExceptionRecord.ExceptionFlags = 1;
  if ( NtCurrentPeb()->BeingDebugged )
    v2 = 1;
  else
    sub_18006A670((__int64)&ExceptionRecord, (__int64)&ContextRecord);
  v3 = ZwRaiseException(&ExceptionRecord, &ContextRecord, v2);
  RtlRaiseStatus(v3);
}
