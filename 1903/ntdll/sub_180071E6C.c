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

__int64 __fastcall sub_180071E6C(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  struct _TEB *v5; // r15
  __int64 result; // rax
  struct _PEB *ProcessEnvironmentBlock; // r14
  int v8; // edi
  int v9; // ecx
  char v10; // al
  int v11; // eax
  char v12; // cl
  struct _PEB *v13; // rax
  int v14; // [rsp+20h] [rbp-78h]
  __int64 v15; // [rsp+40h] [rbp-58h] BYREF
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // [rsp+48h] [rbp-50h]
  int v18; // [rsp+B0h] [rbp+18h]

  v5 = NtCurrentTeb();
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(&dword_180165418, 1, 0);
    if ( (_DWORD)result == 1 && (v5->SameTebFlags & 0x2000) == 0 )
      goto LABEL_15;
LABEL_3:
    ProcessEnvironmentBlock = v5->ProcessEnvironmentBlock;
    if ( !(_DWORD)result )
    {
      LOBYTE(v14) = 0;
      ZwCreateEvent(&qword_180165378, 2031619LL, 0LL, 0LL, v14);
      v5->SameTebFlags |= 0x20u;
      ProcessEnvironmentBlock->LoaderLock = (struct _RTL_CRITICAL_SECTION *)&off_18015F4F8;
      dword_1801664E0 = 0;
      _interlockedbittestandset((volatile signed __int32 *)&ProcessEnvironmentBlock->CrossProcessFlags, 1u);
      qword_18017A2B8 = (__int64)&qword_18017A2B0;
      qword_18017A2B0 = (__int64)&qword_18017A2B0;
      qword_180164350 = 0LL;
      qword_18017A2A8 = 0LL;
      v8 = sub_1800D5D80();
      if ( v8 < 0 )
      {
        result = (unsigned int)dword_18015FAB0;
        if ( (dword_18015FAB0 & 3) != 0 )
        {
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            1603,
            (unsigned int)"_LdrpInitialize",
            0,
            (__int64)"LDR:MRDATA: Process initialization failed with status 0x%08lx\n",
            v8);
          result = (unsigned int)dword_18015FAB0;
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
      v8 = sub_1800D2538(a1, a2);
      v18 = v8;
      if ( v8 < 0 )
      {
        result = (unsigned int)dword_18015FAB0;
        if ( (dword_18015FAB0 & 3) != 0 )
        {
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            1627,
            (unsigned int)"_LdrpInitialize",
            0,
            (__int64)"Process initialization failed with status 0x%08lx\n",
            v8);
          result = (unsigned int)dword_18015FAB0;
        }
        if ( (result & 0x10) != 0 )
          __debugbreak();
        goto LABEL_10;
      }
      sub_1800255A8(*(_QWORD *)(qword_180164FC8 + 48), qword_180164FC8 + 72, 0x14AEu);
      if ( ProcessEnvironmentBlock->MinimumStackCommit )
        v18 = sub_180081240();
      dword_1801664E0 = 3;
      _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->CrossProcessFlags, 1u);
      result = sub_18007D678(qword_1801661B0);
      v8 = v18;
      if ( v18 >= 0 )
      {
        if ( !dword_180165428 || dword_180165418 == 1 )
          result = LdrProcessInitializationComplete();
        goto LABEL_10;
      }
LABEL_59:
      sub_180089150((unsigned int)v8);
      ZwTerminateProcess(-1LL, (unsigned int)v8);
      RtlRaiseStatus((unsigned int)v8);
    }
    v8 = 0;
    if ( !ProcessEnvironmentBlock->InheritedAddressSpace )
      goto LABEL_5;
    qword_180165378 = 0LL;
    if ( _InterlockedCompareExchange(&dword_180165418, 1, 2) == 2 )
      break;
LABEL_15:
    if ( qword_180165378 )
    {
      v9 = ZwWaitForSingleObject(qword_180165378, 0LL, 0LL);
      if ( v9 >= 0 )
      {
        result = (unsigned int)dword_180165418;
        goto LABEL_3;
      }
      v10 = dword_18015FAB0;
      if ( (dword_18015FAB0 & 3) != 0 )
      {
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          1514,
          (unsigned int)"_LdrpInitialize",
          1,
          (__int64)"NtWaitForSingleObject failed with status 0x%08lx, fallback to delay loop\n",
          v9);
        v10 = dword_18015FAB0;
      }
      if ( (v10 & 0x40) != 0 )
        __debugbreak();
    }
    v15 = -300000LL;
    while ( dword_180165418 == 1 )
    {
      v11 = ZwDelayExecution(0LL, &v15);
      if ( v11 < 0 )
      {
        v12 = dword_18015FAB0;
        if ( (dword_18015FAB0 & 3) != 0 )
        {
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            1531,
            (unsigned int)"_LdrpInitialize",
            1,
            (__int64)"Delaying execution failed with status 0x%08lx\n",
            v11);
          v12 = dword_18015FAB0;
        }
        if ( (v12 & 0x40) != 0 )
          __debugbreak();
      }
    }
  }
  if ( ProcessEnvironmentBlock->InheritedAddressSpace )
  {
    v13 = NtCurrentPeb();
    qword_1801662E8 = 0LL;
    qword_1801662F0 = 0LL;
    v13->InheritedAddressSpace = 0;
    if ( v13->BeingDebugged )
      sub_1800D0F9C();
    result = LdrProcessInitializationComplete();
  }
  else
  {
    result = LdrProcessInitializationComplete();
    v8 = 0;
  }
LABEL_5:
  if ( (v5->SameTebFlags & 0x40) == 0 )
  {
    if ( byte_180164EF9 )
    {
      RtlAcquireSRWLockShared(&qword_1801662E8, a2, a3, a4);
      while ( byte_180164EF9 )
        RtlSleepConditionVariableSRW(&qword_1801662F0, &qword_1801662E8, 0LL, 1);
      RtlReleaseSRWLockShared(&qword_1801662E8);
    }
    if ( dword_180165428 )
      qword_18017A220(a1);
    result = sub_180022CE8(a1, a2, a3);
  }
LABEL_10:
  if ( v8 < 0 )
    goto LABEL_59;
  if ( (v5->SameTebFlags & 0x2000) == 0 )
    return ZwTestAlert();
  return result;
}
