/*
 * XREFs of _LdrpInitialize @ 0x1800720BC
 * Callers:
 *     LdrpInitialize @ 0x180072068 (LdrpInitialize.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     LdrpInitializeThread @ 0x180022CE8 (LdrpInitializeThread.c)
 *     LdrpLogDllState @ 0x1800255A8 (LdrpLogDllState.c)
 *     RtlSleepConditionVariableSRW @ 0x180060B80 (RtlSleepConditionVariableSRW.c)
 *     RtlInitializeHeapGC @ 0x18007DD18 (RtlInitializeHeapGC.c)
 *     LdrpProcessInitializationComplete @ 0x18007FC50 (LdrpProcessInitializationComplete.c)
 *     LdrpTouchThreadStack @ 0x1800818E0 (LdrpTouchThreadStack.c)
 *     LdrpInitializationFailure @ 0x1800897F0 (LdrpInitializationFailure.c)
 *     NtWaitForSingleObject @ 0x18009CF10 (NtWaitForSingleObject.c)
 *     ZwTerminateProcess @ 0x18009D410 (ZwTerminateProcess.c)
 *     ZwDelayExecution @ 0x18009D510 (ZwDelayExecution.c)
 *     ZwCreateEvent @ 0x18009D790 (ZwCreateEvent.c)
 *     ZwTestAlert @ 0x1800A05C0 (ZwTestAlert.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
 *     LdrpDoDebuggerBreak @ 0x1800D105C (LdrpDoDebuggerBreak.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800D4690 (LdrpInitializeProcessWrapperFilter.c)
 *     LdrInitializeMrdata @ 0x1800D5E40 (LdrInitializeMrdata.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 */

NTSTATUS __fastcall LdrpInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  struct _TEB *v4; // r15
  NTSTATUS result; // eax
  _PEB *ProcessEnvironmentBlock; // r14
  NTSTATUS v7; // edi
  NTSTATUS v8; // ecx
  char v9; // al
  NTSTATUS v10; // eax
  char v11; // cl
  struct _PEB *v12; // rax
  LARGE_INTEGER DelayInterval; // [rsp+40h] [rbp-58h] BYREF
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // [rsp+48h] [rbp-50h]
  NTSTATUS ExitStatus; // [rsp+B0h] [rbp+18h]

  v4 = NtCurrentTeb();
LABEL_2:
  result = _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 0);
  if ( result == 1 && (v4->SameTebFlags & 0x2000) == 0 )
    goto LABEL_26;
  while ( 1 )
  {
    ProcessEnvironmentBlock = v4->ProcessEnvironmentBlock;
    if ( !result )
    {
      ZwCreateEvent(&LdrpInitCompleteEvent, 0x1F0003u, 0LL, NotificationEvent, 0);
      v4->SameTebFlags |= 0x20u;
      ProcessEnvironmentBlock->LoaderLock = &LdrpLoaderLock;
      LdrInitState = 0;
      _interlockedbittestandset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      qword_18017A2C0 = (__int64)&RtlpDynamicFunctionTable;
      RtlpDynamicFunctionTable = (__int64)&RtlpDynamicFunctionTable;
      RtlpDynamicFunctionTableLock.0 = 0LL;
      RtlpDynamicFunctionTableTreeMin = 0LL;
      RtlpDynamicFunctionTableTreeMax = 0LL;
      RtlpDynamicCallbackTableTreeMin = 0LL;
      RtlpDynamicCallbackTableTreeMax = 0LL;
      v7 = LdrInitializeMrdata();
      if ( v7 < 0 )
      {
        result = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            1606,
            (unsigned int)"_LdrpInitialize",
            0,
            (__int64)"LDR:MRDATA: Process initialization failed with status 0x%08lx\n",
            v7);
          result = LdrpDebugFlags;
        }
        if ( (result & 0x10) != 0 )
          __debugbreak();
        goto LABEL_55;
      }
      ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
      if ( (ProcessParameters->Flags & 0x80000000) != 0 )
      {
        LdrpIsSecureProcess = 1;
        LdrpDetourExist = 1;
      }
      v7 = LdrpInitializeProcess(a1, a2);
      ExitStatus = v7;
      if ( v7 < 0 )
      {
        result = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            1630,
            (unsigned int)"_LdrpInitialize",
            0,
            (__int64)"Process initialization failed with status 0x%08lx\n",
            v7);
          result = LdrpDebugFlags;
        }
        if ( (result & 0x10) != 0 )
          __debugbreak();
        goto LABEL_55;
      }
      LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14AEu);
      if ( ProcessEnvironmentBlock->MinimumStackCommit )
        ExitStatus = LdrpTouchThreadStack();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      result = RtlInitializeHeapGC(LdrpThreadPool);
      v7 = ExitStatus;
      if ( ExitStatus >= 0 )
      {
        if ( !UseWOW64 || LdrpProcessInitialized == 1 )
          result = LdrpProcessInitializationComplete();
        goto LABEL_55;
      }
      goto LABEL_59;
    }
    v7 = 0;
    if ( !ProcessEnvironmentBlock->InheritedAddressSpace )
      goto LABEL_46;
    LdrpInitCompleteEvent = 0LL;
    if ( _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 2) == 2 )
      break;
LABEL_26:
    if ( !LdrpInitCompleteEvent )
      goto LABEL_33;
    v8 = NtWaitForSingleObject(LdrpInitCompleteEvent, 0, 0LL);
    if ( v8 < 0 )
    {
      v9 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          1514,
          (unsigned int)"_LdrpInitialize",
          1,
          (__int64)"NtWaitForSingleObject failed with status 0x%08lx, fallback to delay loop\n",
          v8);
        v9 = LdrpDebugFlags;
      }
      if ( (v9 & 0x40) != 0 )
        __debugbreak();
LABEL_33:
      DelayInterval.QuadPart = -300000LL;
      while ( LdrpProcessInitialized == 1 )
      {
        v10 = ZwDelayExecution(0, &DelayInterval);
        if ( v10 < 0 )
        {
          v11 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) != 0 )
          {
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              1531,
              (unsigned int)"_LdrpInitialize",
              1,
              (__int64)"Delaying execution failed with status 0x%08lx\n",
              v10);
            v11 = LdrpDebugFlags;
          }
          if ( (v11 & 0x40) != 0 )
            __debugbreak();
        }
      }
      goto LABEL_2;
    }
    result = LdrpProcessInitialized;
  }
  if ( ProcessEnvironmentBlock->InheritedAddressSpace )
  {
    v12 = NtCurrentPeb();
    LdrpForkActiveLock.0 = 0LL;
    LdrpForkConditionVariable.Ptr = 0LL;
    v12->InheritedAddressSpace = 0;
    if ( v12->BeingDebugged )
      LdrpDoDebuggerBreak();
    result = LdrpProcessInitializationComplete();
  }
  else
  {
    result = LdrpProcessInitializationComplete();
    v7 = 0;
  }
LABEL_46:
  if ( (v4->SameTebFlags & 0x40) == 0 )
  {
    if ( LdrpForkInProgress )
    {
      RtlAcquireSRWLockShared(&LdrpForkActiveLock);
      while ( LdrpForkInProgress )
        RtlSleepConditionVariableSRW(&LdrpForkConditionVariable, &LdrpForkActiveLock, 0LL, 1u);
      RtlReleaseSRWLockShared(&LdrpForkActiveLock);
    }
    if ( UseWOW64 )
      g_LdrpWow64LdrpInitialize(a1);
    result = LdrpInitializeThread(a1, a2, a3);
  }
LABEL_55:
  if ( v7 < 0 )
  {
LABEL_59:
    LdrpInitializationFailure((unsigned int)v7);
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7);
    RtlRaiseStatus(v7);
  }
  if ( (v4->SameTebFlags & 0x2000) == 0 )
    return ZwTestAlert();
  return result;
}
