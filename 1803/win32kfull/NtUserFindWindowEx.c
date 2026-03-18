/*
 * XREFs of NtUserFindWindowEx @ 0x1C0029830
 * Callers:
 *     <none>
 * Callees:
 *     _FindWindowEx @ 0x1C0029C30 (_FindWindowEx.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     LeaveEditionCrit @ 0x1C010CB20 (LeaveEditionCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserFindWindowEx(__int64 a1, __int64 a2, ULONG64 a3, ULONG64 a4)
{
  ULONG64 v4; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  struct _KTHREAD *CurrentThread; // r15
  __int64 v14; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  int v18; // edx
  ULONG64 v19; // r15
  ULONG64 v20; // rax
  int v21; // r14d
  ULONG64 v22; // r12
  ULONG64 v23; // rcx
  ULONG64 v24; // rcx
  __int64 *Window; // rax
  __int64 v26; // rsi
  int v28; // [rsp+30h] [rbp-68h]
  int v29; // [rsp+34h] [rbp-64h]
  int v30; // [rsp+A0h] [rbp+8h]

  v4 = a3;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive(v8) )
    {
      ++gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v30 = ++gdwAtomicCheckSerial;
        v8 = 0LL;
        v7 = gdwAtomicCheckLogSize;
        if ( gdwAtomicCheckLogSize )
        {
          while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v8 << 6) + gpAtomickCheckStacks) )
          {
            v8 = (unsigned int)(v8 + 1);
            if ( (unsigned int)v8 >= gdwAtomicCheckLogSize )
              goto LABEL_9;
          }
          v9 = (unsigned __int64)(unsigned int)v8 << 6;
          *(_DWORD *)(v9 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
          *(_DWORD *)(gpAtomickCheckStacks + v9 + 4) = (unsigned int)PsGetCurrentThreadId();
          *(_DWORD *)(gpAtomickCheckStacks + v9 + 8) = (MEMORY[0xFFFFF78000000320]
                                                      * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          RtlWalkFrameChain((PVOID *)(v9 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
        }
      }
    }
  }
LABEL_9:
  if ( a1 == -3 )
  {
    a1 = 0LL;
    CurrentThread = KeGetCurrentThread();
    v14 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v14 = *ThreadWin32Thread;
    }
    if ( v14 )
    {
      v16 = *(_QWORD *)(v14 + 448);
      if ( v16 )
        a1 = *(_QWORD *)(v16 + 104);
    }
    v4 = a3;
  }
  else if ( a1 )
  {
    a1 = ValidateHwnd(a1);
    if ( !a1 )
      goto LABEL_48;
  }
  if ( a2 )
  {
    v17 = ValidateHwnd(a2);
    if ( !v17 )
      goto LABEL_48;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  v18 = *(_DWORD *)v4;
  v28 = *(_DWORD *)v4;
  v19 = *(_QWORD *)(v4 + 8);
  v20 = a4;
  if ( a4 >= MmUserProbeAddress )
    v20 = MmUserProbeAddress;
  v21 = *(_DWORD *)v20;
  v29 = *(_DWORD *)v20;
  v22 = *(_QWORD *)(v20 + 8);
  if ( (v19 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v19 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = v19 + (unsigned __int16)v18 + 2LL;
    if ( v23 < MmUserProbeAddress && (unsigned __int16)v18 <= HIWORD(v28) )
    {
      if ( (v18 & 1) != 0 )
        goto LABEL_36;
      if ( v23 > v19 )
        goto LABEL_38;
    }
    if ( (v18 & 1) == 0 )
    {
LABEL_37:
      *(_BYTE *)MmUserProbeAddress = 0;
      goto LABEL_38;
    }
LABEL_36:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
    goto LABEL_37;
  }
LABEL_38:
  if ( (v22 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v24 = (unsigned __int16)v21 + v22 + 2;
  if ( v24 < MmUserProbeAddress && (unsigned __int16)v21 <= HIWORD(v29) )
  {
    if ( (v21 & 1) != 0 )
    {
LABEL_45:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
      goto LABEL_46;
    }
    if ( v24 > v22 )
      goto LABEL_47;
  }
  if ( (v21 & 1) != 0 )
    goto LABEL_45;
LABEL_46:
  *(_BYTE *)MmUserProbeAddress = 0;
LABEL_47:
  Window = (__int64 *)FindWindowEx(a1, v17, v19, v22);
  if ( Window )
  {
    v26 = *Window;
    goto LABEL_50;
  }
LABEL_48:
  v26 = 0LL;
LABEL_50:
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive(v11) )
    {
      --gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v12 = 0LL;
        if ( gdwAtomicCheckLogSize )
        {
          while ( 1 )
          {
            v10 = (unsigned int)v12;
            v11 = (unsigned __int64)(unsigned int)v12 << 6;
            if ( *(_DWORD *)(v11 + gpAtomickCheckStacks) == v30 )
              break;
            v12 = (unsigned int)(v12 + 1);
            if ( (unsigned int)v12 >= gdwAtomicCheckLogSize )
              goto LABEL_58;
          }
          v10 = (unsigned __int64)(unsigned int)v12 << 6;
          *(_DWORD *)(v10 + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_58:
  LeaveEditionCrit(v11, v10, v12);
  return v26;
}
