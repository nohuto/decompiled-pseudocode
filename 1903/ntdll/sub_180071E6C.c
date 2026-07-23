/*
 * XREFs of sub_180071E6C @ 0x180071E6C
 * Callers:
 *     sub_180071E18 @ 0x180071E18 (sub_180071E18.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     sub_180022CE8 @ 0x180022CE8 (sub_180022CE8.c)
 *     sub_1800255A8 @ 0x1800255A8 (sub_1800255A8.c)
 *     RtlSleepConditionVariableSRW @ 0x180060AE0 (RtlSleepConditionVariableSRW.c)
 *     sub_18007D678 @ 0x18007D678 (sub_18007D678.c)
 *     LdrProcessInitializationComplete @ 0x18007F5B0 (LdrProcessInitializationComplete.c)
 *     sub_180081240 @ 0x180081240 (sub_180081240.c)
 *     sub_180089150 @ 0x180089150 (sub_180089150.c)
 *     ZwWaitForSingleObject @ 0x18009C760 (ZwWaitForSingleObject.c)
 *     ZwTerminateProcess @ 0x18009CC60 (ZwTerminateProcess.c)
 *     ZwDelayExecution @ 0x18009CD60 (ZwDelayExecution.c)
 *     ZwCreateEvent @ 0x18009CFE0 (ZwCreateEvent.c)
 *     ZwTestAlert @ 0x18009FE10 (ZwTestAlert.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 *     sub_1800D0F9C @ 0x1800D0F9C (sub_1800D0F9C.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     sub_1800D45D0 @ 0x1800D45D0 (sub_1800D45D0.c)
 *     sub_1800D5D80 @ 0x1800D5D80 (sub_1800D5D80.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

NTSTATUS __fastcall sub_180071E6C(__int64 a1, __int64 a2, __int64 a3)
{
  struct _TEB *v4; // r15
  NTSTATUS result; // eax
  PPEB ProcessEnvironmentBlock; // r14
  NTSTATUS v7; // edi
  NTSTATUS v8; // ecx
  char v9; // al
  NTSTATUS v10; // eax
  char v11; // cl
  struct _PEB *v12; // rax
  LARGE_INTEGER DelayInterval; // [rsp+40h] [rbp-58h] BYREF
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // [rsp+48h] [rbp-50h]
  int v16; // [rsp+B0h] [rbp+18h]

  v4 = NtCurrentTeb();
  while ( 1 )
  {
    result = _InterlockedCompareExchange(&dword_180165418, 1, 0);
    if ( result == 1 && (v4->SameTebFlags & 0x2000) == 0 )
      goto LABEL_15;
LABEL_3:
    ProcessEnvironmentBlock = v4->ProcessEnvironmentBlock;
    if ( !result )
    {
      ZwCreateEvent(&qword_180165378, 0x1F0003u, 0LL, NotificationEvent, 0);
      v4->SameTebFlags |= 0x20u;
      ProcessEnvironmentBlock->LoaderLock = &stru_18015F4F8;
      dword_1801664E0 = 0;
      _interlockedbittestandset((volatile signed __int32 *)&ProcessEnvironmentBlock->CrossProcessFlags, 1u);
      qword_18017A2B8 = (__int64)&qword_18017A2B0;
      qword_18017A2B0 = (__int64)&qword_18017A2B0;
      stru_180164350.Ptr = 0LL;
      qword_18017A2A8 = 0LL;
      v7 = sub_1800D5D80();
      if ( v7 < 0 )
      {
        result = dword_18015FAB0;
        if ( (dword_18015FAB0 & 3) != 0 )
        {
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            1603,
            (unsigned int)"_LdrpInitialize",
            0,
            (__int64)"LDR:MRDATA: Process initialization failed with status 0x%08lx\n",
            v7);
          result = dword_18015FAB0;
        }
        if ( (result & 0x10) != 0 )
          __debugbreak();
        goto LABEL_10;
      }
      ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
      if ( (ProcessParameters->Flags & 0x80000000) != 0 )
      {
        byte_180165430 = 1;
        byte_180165300 = 1;
      }
      v7 = sub_1800D2538(a1, a2);
      v16 = v7;
      if ( v7 < 0 )
      {
        result = dword_18015FAB0;
        if ( (dword_18015FAB0 & 3) != 0 )
        {
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            1627,
            (unsigned int)"_LdrpInitialize",
            0,
            (__int64)"Process initialization failed with status 0x%08lx\n",
            v7);
          result = dword_18015FAB0;
        }
        if ( (result & 0x10) != 0 )
          __debugbreak();
        goto LABEL_10;
      }
      sub_1800255A8(*(_QWORD *)(qword_180164FC8 + 48), qword_180164FC8 + 72, 0x14AEu);
      if ( ProcessEnvironmentBlock->MinimumStackCommit )
        v16 = sub_180081240();
      dword_1801664E0 = 3;
      _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->CrossProcessFlags, 1u);
      result = sub_18007D678(Pool);
      v7 = v16;
      if ( v16 >= 0 )
      {
        if ( !dword_180165428 || dword_180165418 == 1 )
          result = LdrProcessInitializationComplete();
        goto LABEL_10;
      }
LABEL_59:
      sub_180089150((unsigned int)v7);
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7);
      RtlRaiseStatus(v7);
    }
    v7 = 0;
    if ( !ProcessEnvironmentBlock->InheritedAddressSpace )
      goto LABEL_5;
    qword_180165378 = 0LL;
    if ( _InterlockedCompareExchange(&dword_180165418, 1, 2) == 2 )
      break;
LABEL_15:
    if ( qword_180165378 )
    {
      v8 = ZwWaitForSingleObject(qword_180165378, 0, 0LL);
      if ( v8 >= 0 )
      {
        result = dword_180165418;
        goto LABEL_3;
      }
      v9 = dword_18015FAB0;
      if ( (dword_18015FAB0 & 3) != 0 )
      {
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          1514,
          (unsigned int)"_LdrpInitialize",
          1,
          (__int64)"NtWaitForSingleObject failed with status 0x%08lx, fallback to delay loop\n",
          v8);
        v9 = dword_18015FAB0;
      }
      if ( (v9 & 0x40) != 0 )
        __debugbreak();
    }
    DelayInterval.QuadPart = -300000LL;
    while ( dword_180165418 == 1 )
    {
      v10 = ZwDelayExecution(0, &DelayInterval);
      if ( v10 < 0 )
      {
        v11 = dword_18015FAB0;
        if ( (dword_18015FAB0 & 3) != 0 )
        {
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            1531,
            (unsigned int)"_LdrpInitialize",
            1,
            (__int64)"Delaying execution failed with status 0x%08lx\n",
            v10);
          v11 = dword_18015FAB0;
        }
        if ( (v11 & 0x40) != 0 )
          __debugbreak();
      }
    }
  }
  if ( ProcessEnvironmentBlock->InheritedAddressSpace )
  {
    v12 = NtCurrentPeb();
    stru_1801662E8.Ptr = 0LL;
    ConditionVariable.Ptr = 0LL;
    v12->InheritedAddressSpace = 0;
    if ( v12->BeingDebugged )
      sub_1800D0F9C();
    result = LdrProcessInitializationComplete();
  }
  else
  {
    result = LdrProcessInitializationComplete();
    v7 = 0;
  }
LABEL_5:
  if ( (v4->SameTebFlags & 0x40) == 0 )
  {
    if ( byte_180164EF9 )
    {
      RtlAcquireSRWLockShared(&stru_1801662E8);
      while ( byte_180164EF9 )
        RtlSleepConditionVariableSRW(&ConditionVariable, &stru_1801662E8, 0LL, 1u);
      RtlReleaseSRWLockShared(&stru_1801662E8);
    }
    if ( dword_180165428 )
      qword_18017A220(a1);
    result = sub_180022CE8(a1, a2, a3);
  }
LABEL_10:
  if ( v7 < 0 )
    goto LABEL_59;
  if ( (v4->SameTebFlags & 0x2000) == 0 )
    return ZwTestAlert();
  return result;
}
