/*
 * XREFs of NtUserFindWindowEx @ 0x1C006CC10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _FindWindowEx @ 0x1C006CFC0 (_FindWindowEx.c)
 *     LeaveEditionCrit @ 0x1C0117860 (LeaveEditionCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserFindWindowEx(__int64 a1, __int64 a2, ULONG64 a3, ULONG64 a4)
{
  ULONG64 v4; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  struct _KTHREAD *CurrentThread; // r15
  __int64 v15; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rax
  __int64 v18; // r13
  int v19; // edx
  ULONG64 v20; // r15
  ULONG64 v21; // rax
  int v22; // r14d
  ULONG64 v23; // r12
  ULONG64 v24; // rcx
  ULONG64 v25; // rcx
  __int64 *Window; // rax
  __int64 v27; // rsi
  int v29; // [rsp+30h] [rbp-68h]
  int v30; // [rsp+34h] [rbp-64h]
  int v31; // [rsp+A0h] [rbp+8h]

  v4 = a3;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive() )
    {
      ++gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v31 = ++gdwAtomicCheckSerial;
        v8 = 0LL;
        v7 = gdwAtomicCheckLogSize;
        if ( gdwAtomicCheckLogSize )
        {
          v9 = gpAtomickCheckStacks;
          while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v8 << 6) + gpAtomickCheckStacks) )
          {
            v8 = (unsigned int)(v8 + 1);
            if ( (unsigned int)v8 >= gdwAtomicCheckLogSize )
              goto LABEL_10;
          }
          v10 = (unsigned __int64)(unsigned int)v8 << 6;
          *(_DWORD *)(v10 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
          *(_DWORD *)(gpAtomickCheckStacks + v10 + 4) = (unsigned int)PsGetCurrentThreadId();
          *(_DWORD *)(gpAtomickCheckStacks + v10 + 8) = (MEMORY[0xFFFFF78000000320]
                                                       * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          RtlWalkFrameChain((PVOID *)(v10 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
        }
      }
    }
  }
LABEL_10:
  if ( a1 == -3 )
  {
    a1 = 0LL;
    CurrentThread = KeGetCurrentThread();
    v15 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7, v9) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v15 = *ThreadWin32Thread;
    }
    if ( v15 )
    {
      v17 = *(_QWORD *)(v15 + 448);
      if ( v17 )
        a1 = *(_QWORD *)(v17 + 104);
    }
    v4 = a3;
  }
  else if ( a1 )
  {
    a1 = ValidateHwnd(a1);
    if ( !a1 )
      goto LABEL_49;
  }
  if ( a2 )
  {
    v18 = ValidateHwnd(a2);
    if ( !v18 )
      goto LABEL_49;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  v19 = *(_DWORD *)v4;
  v29 = *(_DWORD *)v4;
  v20 = *(_QWORD *)(v4 + 8);
  v21 = a4;
  if ( a4 >= MmUserProbeAddress )
    v21 = MmUserProbeAddress;
  v22 = *(_DWORD *)v21;
  v30 = *(_DWORD *)v21;
  v23 = *(_QWORD *)(v21 + 8);
  if ( (v20 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v20 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v24 = v20 + (unsigned __int16)v19 + 2LL;
    if ( v24 < MmUserProbeAddress && (unsigned __int16)v19 <= HIWORD(v29) )
    {
      if ( (v19 & 1) != 0 )
        goto LABEL_37;
      if ( v24 > v20 )
        goto LABEL_39;
    }
    if ( (v19 & 1) == 0 )
    {
LABEL_38:
      *(_BYTE *)MmUserProbeAddress = 0;
      goto LABEL_39;
    }
LABEL_37:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
    goto LABEL_38;
  }
LABEL_39:
  if ( (v23 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v25 = (unsigned __int16)v22 + v23 + 2;
  if ( v25 < MmUserProbeAddress && (unsigned __int16)v22 <= HIWORD(v30) )
  {
    if ( (v22 & 1) != 0 )
    {
LABEL_46:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
      goto LABEL_47;
    }
    if ( v25 > v23 )
      goto LABEL_48;
  }
  if ( (v22 & 1) != 0 )
    goto LABEL_46;
LABEL_47:
  *(_BYTE *)MmUserProbeAddress = 0;
LABEL_48:
  Window = (__int64 *)FindWindowEx(a1, v18, v20, v23);
  if ( Window )
  {
    v27 = *Window;
    goto LABEL_51;
  }
LABEL_49:
  v27 = 0LL;
LABEL_51:
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive() )
    {
      --gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v13 = 0LL;
        if ( gdwAtomicCheckLogSize )
        {
          while ( 1 )
          {
            v11 = (unsigned int)v13;
            v12 = (unsigned __int64)(unsigned int)v13 << 6;
            if ( *(_DWORD *)(v12 + gpAtomickCheckStacks) == v31 )
              break;
            v13 = (unsigned int)(v13 + 1);
            if ( (unsigned int)v13 >= gdwAtomicCheckLogSize )
              goto LABEL_59;
          }
          v11 = (unsigned __int64)(unsigned int)v13 << 6;
          *(_DWORD *)(v11 + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_59:
  LeaveEditionCrit(v12, v11, v13);
  return v27;
}
