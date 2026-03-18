/*
 * XREFs of NtUserFindWindowEx @ 0x1C00CB540
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _FindWindowEx @ 0x1C00CB8F0 (_FindWindowEx.c)
 *     LeaveEditionCrit @ 0x1C013D940 (LeaveEditionCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserFindWindowEx(__int64 a1, __int64 a2, ULONG64 a3, ULONG64 a4)
{
  ULONG64 v4; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  struct _KTHREAD *CurrentThread; // r15
  __int64 v16; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rax
  __int64 v19; // r13
  int v20; // edx
  ULONG64 v21; // r15
  ULONG64 v22; // rax
  int v23; // r14d
  ULONG64 v24; // r12
  ULONG64 v25; // rcx
  ULONG64 v26; // rcx
  __int64 *Window; // rax
  __int64 v28; // rsi
  int v30; // [rsp+30h] [rbp-68h]
  int v31; // [rsp+34h] [rbp-64h]
  int v32; // [rsp+A0h] [rbp+8h]

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
        v32 = ++gdwAtomicCheckSerial;
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
          v11 = (unsigned __int64)(unsigned int)v8 << 6;
          *(_DWORD *)(v11 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
          *(_DWORD *)(gpAtomickCheckStacks + v11 + 4) = (unsigned int)PsGetCurrentThreadId();
          *(_DWORD *)(gpAtomickCheckStacks + v11 + 8) = (MEMORY[0xFFFFF78000000320]
                                                       * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          RtlWalkFrameChain((PVOID *)(v11 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
        }
      }
    }
  }
LABEL_10:
  if ( a1 == -3 )
  {
    a1 = 0LL;
    CurrentThread = KeGetCurrentThread();
    v16 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7, v9, v10) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v16 = *ThreadWin32Thread;
    }
    if ( v16 )
    {
      v18 = *(_QWORD *)(v16 + 448);
      if ( v18 )
        a1 = *(_QWORD *)(v18 + 104);
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
    v19 = ValidateHwnd(a2);
    if ( !v19 )
      goto LABEL_49;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  v20 = *(_DWORD *)v4;
  v30 = *(_DWORD *)v4;
  v21 = *(_QWORD *)(v4 + 8);
  v22 = a4;
  if ( a4 >= MmUserProbeAddress )
    v22 = MmUserProbeAddress;
  v23 = *(_DWORD *)v22;
  v31 = *(_DWORD *)v22;
  v24 = *(_QWORD *)(v22 + 8);
  if ( (v21 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v21 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v25 = v21 + (unsigned __int16)v20 + 2LL;
    if ( v25 < MmUserProbeAddress && (unsigned __int16)v20 <= HIWORD(v30) )
    {
      if ( (v20 & 1) != 0 )
        goto LABEL_37;
      if ( v25 > v21 )
        goto LABEL_39;
    }
    if ( (v20 & 1) == 0 )
    {
LABEL_38:
      *(_BYTE *)MmUserProbeAddress = 0;
      goto LABEL_39;
    }
LABEL_37:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
    goto LABEL_38;
  }
LABEL_39:
  if ( (v24 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v26 = (unsigned __int16)v23 + v24 + 2;
  if ( v26 < MmUserProbeAddress && (unsigned __int16)v23 <= HIWORD(v31) )
  {
    if ( (v23 & 1) != 0 )
    {
LABEL_46:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
      goto LABEL_47;
    }
    if ( v26 > v24 )
      goto LABEL_48;
  }
  if ( (v23 & 1) != 0 )
    goto LABEL_46;
LABEL_47:
  *(_BYTE *)MmUserProbeAddress = 0;
LABEL_48:
  Window = (__int64 *)FindWindowEx(a1, v19, v21, v24);
  if ( Window )
  {
    v28 = *Window;
    goto LABEL_51;
  }
LABEL_49:
  v28 = 0LL;
LABEL_51:
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive() )
    {
      --gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v14 = 0LL;
        if ( gdwAtomicCheckLogSize )
        {
          while ( 1 )
          {
            v12 = (unsigned int)v14;
            v13 = (unsigned __int64)(unsigned int)v14 << 6;
            if ( *(_DWORD *)(v13 + gpAtomickCheckStacks) == v32 )
              break;
            v14 = (unsigned int)(v14 + 1);
            if ( (unsigned int)v14 >= gdwAtomicCheckLogSize )
              goto LABEL_59;
          }
          v12 = (unsigned __int64)(unsigned int)v14 << 6;
          *(_DWORD *)(v12 + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_59:
  LeaveEditionCrit(v13, v12, v14);
  return v28;
}
