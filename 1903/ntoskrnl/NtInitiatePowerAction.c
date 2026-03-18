/*
 * XREFs of NtInitiatePowerAction @ 0x140725440
 * Callers:
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1405AD8B0 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     IopWarmEjectDevice @ 0x140878040 (IopWarmEjectDevice.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1401BEAE4 (PopBsdHandleRequest.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x140725380 (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     PopExecutePowerAction @ 0x140725658 (PopExecutePowerAction.c)
 */

NTSTATUS __stdcall NtInitiatePowerAction(
        POWER_ACTION SystemAction,
        SYSTEM_POWER_STATE MinSystemState,
        ULONG Flags,
        BOOLEAN Asynchronous)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // ebx
  char *v6; // rdi
  char PreviousMode; // r12
  char *PoolWithTag; // rax
  char *v13; // rsi
  __int64 v14; // rcx
  char **v15; // rax
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v18[4]; // [rsp+38h] [rbp-28h] BYREF
  int v19; // [rsp+48h] [rbp-18h] BYREF
  int v20; // [rsp+4Ch] [rbp-14h]
  __int128 v21; // [rsp+50h] [rbp-10h]

  v21 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = 0LL;
  Timeout.QuadPart = -1500000000LL;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( SystemAction == PowerActionWarmEject )
      return -1073741811;
    if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, CurrentThread->PreviousMode) )
      return -1073741727;
  }
  if ( MinSystemState > PowerSystemMaximum
    || SystemAction > PowerActionWarmEject
    || (Flags & 0x10000000) != 0
    || SystemAction == PowerActionSleep && MinSystemState >= PowerSystemHibernate
    || (Flags & 0xCFFFFC0) != 0 )
  {
    return -1073741811;
  }
  if ( (unsigned int)(SystemAction - 4) > 2 && PsIsCurrentThreadInServerSilo() )
    return -1073741637;
  v18[2] = 0;
  v18[0] = SystemAction;
  v18[1] = Flags;
  v20 = 128;
  v21 = 0LL;
  if ( !PreviousMode && SystemAction == PowerActionShutdownOff && (Flags & 0x3000000) != 0 )
  {
    v19 = 15;
  }
  else
  {
    v19 = 4;
    PopDiagTracePolicyInitiatePowerActionApiCall(SystemAction, MinSystemState);
  }
  if ( !Asynchronous )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x57634150u);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    memset(PoolWithTag, 0, 0x38uLL);
    *((_QWORD *)v6 + 6) = &v19;
    KeInitializeEvent((PRKEVENT)v6, NotificationEvent, 0);
    v20 |= 0x20u;
    *(_QWORD *)&v21 = v6;
  }
  if ( (unsigned int)(SystemAction - 4) <= 2 && (BYTE8(PopBsdPowerTransition) & 8) == 0 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE8(PopBsdPowerTransition) |= 8u;
    LOBYTE(PopBsdPowerTransitionExtension) = dword_140443054;
    PopBsdHandleRequest(8);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
  PopAcquirePolicyLock();
  PopExecutePowerAction((unsigned int)&v19, 0, (unsigned int)v18, MinSystemState, 1);
  PopReleasePolicyLock();
  if ( v6 )
  {
    v13 = v6 + 32;
    if ( !*((_QWORD *)v6 + 4) )
      goto LABEL_23;
    v5 = KeWaitForSingleObject(v6, Suspended, 0, 1u, &Timeout);
    if ( v5 == 258 && (byte_140443041 & 3) != 0 )
      v5 = KeWaitForSingleObject(v6, Suspended, 0, 1u, 0LL);
    PopAcquirePolicyLock();
    v14 = *(_QWORD *)v13;
    if ( *(char **)(*(_QWORD *)v13 + 8LL) != v13 || (v15 = (char **)*((_QWORD *)v6 + 5), *v15 != v13) )
      __fastfail(3u);
    *v15 = (char *)v14;
    *(_QWORD *)(v14 + 8) = v15;
    PopReleasePolicyLock();
    if ( v5 >= 0 )
    {
LABEL_23:
      v5 = *((_DWORD *)v6 + 6);
      if ( v5 >= 0 )
        v5 = 0;
    }
    ExFreePoolWithTag(v6, 0);
  }
  return v5;
}
