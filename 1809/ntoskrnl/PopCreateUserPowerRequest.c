/*
 * XREFs of PopCreateUserPowerRequest @ 0x140589C2C
 * Callers:
 *     NtSetThreadExecutionState @ 0x1405882F0 (NtSetThreadExecutionState.c)
 *     PopPowerRequestCreateInfo @ 0x140589318 (PopPowerRequestCreateInfo.c)
 * Callees:
 *     SessionIsInteractive @ 0x140001FF8 (SessionIsInteractive.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140002AE4 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopInsertPowerRequestObject @ 0x140589BEC (PopInsertPowerRequestObject.c)
 *     PopCreatePowerRequestObject @ 0x140589F40 (PopCreatePowerRequestObject.c)
 *     PopDiagTracePowerRequestCreate @ 0x14058A28C (PopDiagTracePowerRequestCreate.c)
 *     PopAcquirePowerRequestPushLock @ 0x14058AD50 (PopAcquirePowerRequestPushLock.c)
 *     PsQueryProcessAttributes @ 0x14062691C (PsQueryProcessAttributes.c)
 */

__int64 __fastcall PopCreateUserPowerRequest(__int64 *a1, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rsi
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // [rsp+48h] [rbp+10h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( a2 )
  {
    PsQueryProcessAttributes(CurrentThread->ApcState.Process, &v14, 0LL);
    if ( v14 )
      return 3221225659LL;
  }
  result = PopCreatePowerRequestObject(&v15, a3);
  if ( (int)result >= 0 )
  {
    v9 = v15;
    *(_BYTE *)(v15 + 128) = a2;
    if ( !a2 )
      *(_QWORD *)(v9 + 120) = Process;
    v10 = *(unsigned int *)(a3 + 36);
    if ( a2 )
    {
      *(_DWORD *)(v9 + 20) = 8;
    }
    else
    {
      v10 = SessionIsInteractive(v10) != 0 ? 63 : 30;
      *(_DWORD *)(v9 + 20) = v10;
    }
    LOBYTE(v10) = 1;
    PopAcquirePowerRequestPushLock(v10);
    PopInsertPowerRequestObject((_QWORD *)v9, a2);
    if ( !a2 )
      PopUmpoSendPowerRequestOverrideQuery(v9, v11, v12, v13);
    PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    PopDiagTracePowerRequestCreate(0LL, v9);
    result = 0LL;
    *a1 = v9;
  }
  return result;
}
