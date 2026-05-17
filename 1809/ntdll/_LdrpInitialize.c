/*
 * XREFs of _LdrpInitialize @ 0x18007874C
 * Callers:
 *     LdrpInitialize @ 0x1800786F8 (LdrpInitialize.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     LdrpInitializeThread @ 0x18002356C (LdrpInitializeThread.c)
 *     LdrpLogDllState @ 0x180026314 (LdrpLogDllState.c)
 *     RtlSleepConditionVariableSRW @ 0x1800589C0 (RtlSleepConditionVariableSRW.c)
 *     RtlInitializeHeapGC @ 0x180082644 (RtlInitializeHeapGC.c)
 *     LdrpProcessInitializationComplete @ 0x1800844F0 (LdrpProcessInitializationComplete.c)
 *     LdrpTouchThreadStack @ 0x180085B38 (LdrpTouchThreadStack.c)
 *     RtlRaiseStatus @ 0x18009F6A0 (RtlRaiseStatus.c)
 *     NtWaitForSingleObject @ 0x1800A0360 (NtWaitForSingleObject.c)
 *     ZwTerminateProcess @ 0x1800A0860 (ZwTerminateProcess.c)
 *     ZwDelayExecution @ 0x1800A0960 (ZwDelayExecution.c)
 *     ZwCreateEvent @ 0x1800A0BE0 (ZwCreateEvent.c)
 *     ZwTestAlert @ 0x1800A39F0 (ZwTestAlert.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 *     LdrpDoDebuggerBreak @ 0x1800D288C (LdrpDoDebuggerBreak.c)
 *     LdrpInitializationFailure @ 0x1800D2AE4 (LdrpInitializationFailure.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800D6804 (LdrpInitializeProcessWrapperFilter.c)
 *     LdrInitializeMrdata @ 0x1800D7B40 (LdrInitializeMrdata.c)
 */

__int64 __fastcall LdrpInitialize(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  struct _TEB *v5; // r15
  __int64 result; // rax
  _PEB *ProcessEnvironmentBlock; // r14
  int v8; // edi
  NTSTATUS v9; // ecx
  char v10; // al
  int v11; // eax
  char v12; // cl
  struct _PEB *v13; // rax
  int v14; // [rsp+20h] [rbp-78h]
  __int64 v15; // [rsp+40h] [rbp-58h] BYREF
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // [rsp+48h] [rbp-50h]
  int v18; // [rsp+B0h] [rbp+18h]

  v5 = NtCurrentTeb();
LABEL_2:
  result = (unsigned int)_InterlockedCompareExchange(&LdrpProcessInitialized, 1, 0);
  if ( (_DWORD)result == 1 && (v5->SameTebFlags & 0x2000) == 0 )
    goto LABEL_26;
  while ( 1 )
  {
    ProcessEnvironmentBlock = v5->ProcessEnvironmentBlock;
    if ( !(_DWORD)result )
    {
      LOBYTE(v14) = 0;
      ZwCreateEvent(&LdrpInitCompleteEvent, 2031619LL, 0LL, 0LL, v14);
      v5->SameTebFlags |= 0x20u;
      ProcessEnvironmentBlock->LoaderLock = (_RTL_CRITICAL_SECTION *)&LdrpLoaderLock;
      LdrInitState = 0;
      _interlockedbittestandset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      qword_1801782C0 = (__int64)&RtlpDynamicFunctionTable;
      RtlpDynamicFunctionTable = (__int64)&RtlpDynamicFunctionTable;
      RtlpDynamicFunctionTableLock = 0LL;
      RtlpDynamicFunctionTableTreeMin = 0LL;
      RtlpDynamicFunctionTableTreeMax = 0LL;
      RtlpDynamicCallbackTableTreeMin = 0LL;
      RtlpDynamicCallbackTableTreeMax = 0LL;
      v8 = LdrInitializeMrdata();
      if ( v8 < 0 )
      {
        result = (unsigned int)LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            1612,
            (unsigned int)"_LdrpInitialize",
            0,
            "LDR:MRDATA: Process initialization failed with status 0x%08lx\n",
            v8);
          result = (unsigned int)LdrpDebugFlags;
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
      v8 = LdrpInitializeProcess(a1, a2);
      v18 = v8;
      if ( v8 < 0 )
      {
        result = (unsigned int)LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            1636,
            (unsigned int)"_LdrpInitialize",
            0,
            "Process initialization failed with status 0x%08lx\n",
            v8);
          result = (unsigned int)LdrpDebugFlags;
        }
        if ( (result & 0x10) != 0 )
          __debugbreak();
        goto LABEL_55;
      }
      LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14AEu);
      if ( ProcessEnvironmentBlock->MinimumStackCommit )
        v18 = LdrpTouchThreadStack();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      result = RtlInitializeHeapGC(LdrpThreadPool);
      v8 = v18;
      if ( v18 >= 0 )
      {
        if ( !UseWOW64 || LdrpProcessInitialized == 1 )
          result = LdrpProcessInitializationComplete();
        goto LABEL_55;
      }
      goto LABEL_59;
    }
    v8 = 0;
    if ( !ProcessEnvironmentBlock->InheritedAddressSpace )
      goto LABEL_46;
    LdrpInitCompleteEvent = 0LL;
    if ( _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 2) == 2 )
      break;
LABEL_26:
    if ( !LdrpInitCompleteEvent )
      goto LABEL_33;
    v9 = NtWaitForSingleObject(LdrpInitCompleteEvent, 0, 0LL);
    if ( v9 < 0 )
    {
      v10 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          1520,
          (unsigned int)"_LdrpInitialize",
          1,
          "NtWaitForSingleObject failed with status 0x%08lx, fallback to delay loop\n",
          v9);
        v10 = LdrpDebugFlags;
      }
      if ( (v10 & 0x40) != 0 )
        __debugbreak();
LABEL_33:
      v15 = -300000LL;
      while ( LdrpProcessInitialized == 1 )
      {
        v11 = ZwDelayExecution(0LL, &v15);
        if ( v11 < 0 )
        {
          v12 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) != 0 )
          {
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              1537,
              (unsigned int)"_LdrpInitialize",
              1,
              "Delaying execution failed with status 0x%08lx\n",
              v11);
            v12 = LdrpDebugFlags;
          }
          if ( (v12 & 0x40) != 0 )
            __debugbreak();
        }
      }
      goto LABEL_2;
    }
    result = (unsigned int)LdrpProcessInitialized;
  }
  if ( ProcessEnvironmentBlock->InheritedAddressSpace )
  {
    v13 = NtCurrentPeb();
    LdrpForkActiveLock = 0LL;
    LdrpForkConditionVariable = 0LL;
    v13->InheritedAddressSpace = 0;
    if ( v13->BeingDebugged )
      LdrpDoDebuggerBreak();
    result = LdrpProcessInitializationComplete();
  }
  else
  {
    result = LdrpProcessInitializationComplete();
    v8 = 0;
  }
LABEL_46:
  if ( (v5->SameTebFlags & 0x40) == 0 )
  {
    if ( LdrpForkInProgress )
    {
      RtlAcquireSRWLockShared(&LdrpForkActiveLock, a2, a3, a4);
      while ( LdrpForkInProgress )
        RtlSleepConditionVariableSRW(&LdrpForkConditionVariable, &LdrpForkActiveLock, 0LL, 1);
      RtlReleaseSRWLockShared(&LdrpForkActiveLock);
    }
    if ( UseWOW64 )
      g_LdrpWow64LdrpInitialize(a1);
    result = LdrpInitializeThread(a1, (__int64)a2, a3);
  }
LABEL_55:
  if ( v8 < 0 )
  {
LABEL_59:
    LdrpInitializationFailure((unsigned int)v8);
    ZwTerminateProcess(-1LL, (unsigned int)v8);
    RtlRaiseStatus((unsigned int)v8);
  }
  if ( (v5->SameTebFlags & 0x2000) == 0 )
    return ZwTestAlert();
  return result;
}
