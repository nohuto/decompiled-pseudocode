/*
 * XREFs of PopSetWatchdog @ 0x1400B35A0
 * Callers:
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1400B2CA0 (KeCancelTimer.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1400B387C (PopUpdateWatchdogNoWorkersEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopCacheDisplayOnPhaseDuration @ 0x1403019CC (PopCacheDisplayOnPhaseDuration.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

char *__fastcall PopSetWatchdog(char *P, unsigned int *a2, char a3)
{
  char *v5; // rbx
  unsigned __int64 v6; // rbp
  char v7; // r13
  unsigned int v8; // r12d
  KIRQL v9; // di
  __int64 v10; // rax
  char *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rcx
  PVOID *v16; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v18; // rcx

  v5 = P;
  v6 = 0LL;
  v7 = 0;
  v8 = 0;
  if ( P )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  }
  else
  {
    result = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x138uLL, 0x44574F50u);
    v5 = result;
    if ( !result )
      return result;
    memset(result, 0, 0x138uLL);
    *((_DWORD *)v5 + 4) = 1146572624;
    *(_WORD *)(v5 + 25) = 1536;
    *((_DWORD *)v5 + 7) = 1;
    *((_QWORD *)v5 + 5) = v5 + 32;
    *((_QWORD *)v5 + 4) = v5 + 32;
    *((_QWORD *)v5 + 6) = 0LL;
    v5[48] = 8;
    *((_QWORD *)v5 + 8) = v5 + 56;
    *((_QWORD *)v5 + 7) = v5 + 56;
    *((_QWORD *)v5 + 9) = 0LL;
    *((_QWORD *)v5 + 13) = 0LL;
    *((_QWORD *)v5 + 17) = PopWatchdogDpc;
    *((_DWORD *)v5 + 28) = 275;
    *((_QWORD *)v5 + 18) = v5;
    *((_QWORD *)v5 + 21) = 0LL;
    *((_QWORD *)v5 + 16) = 0LL;
    *((_QWORD *)v5 + 24) = PopWatchdogWorker;
    *((_QWORD *)v5 + 25) = v5;
    *((_QWORD *)v5 + 22) = 0LL;
    v9 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
    v14 = PopWatchdogList;
    if ( *(__int64 **)(PopWatchdogList + 8) != &PopWatchdogList )
      goto LABEL_23;
    *(_QWORD *)v5 = PopWatchdogList;
    *((_QWORD *)v5 + 1) = &PopWatchdogList;
    *(_QWORD *)(v14 + 8) = v5;
    PopWatchdogList = (__int64)v5;
  }
  if ( *((_DWORD *)v5 + 4) != 1146572624 )
    __fastfail(5u);
  v10 = *a2;
  if ( (_DWORD)v10 && !a3 )
  {
    v12 = 10000 * v10;
    *((_OWORD *)v5 + 14) = *(_OWORD *)a2;
    *((_OWORD *)v5 + 15) = *((_OWORD *)a2 + 1);
    *((_OWORD *)v5 + 16) = *((_OWORD *)a2 + 2);
    *((_OWORD *)v5 + 17) = *((_OWORD *)a2 + 3);
    *((_QWORD *)v5 + 36) = *((_QWORD *)a2 + 8);
    v13 = MEMORY[0xFFFFF78000000008];
    *((_QWORD *)v5 + 37) = MEMORY[0xFFFFF78000000008];
    *((_QWORD *)v5 + 26) = v12 + v13;
    *((_QWORD *)v5 + 38) = KeGetCurrentThread();
    v5[216] = 1;
    if ( !(unsigned __int8)KiSetTimerEx((__int64)(v5 + 48), -v12, 0, 0, (__int64)(v5 + 112)) )
    {
      v5[20] = 1;
      PopUpdateWatchdogNoWorkersEvent(v5);
    }
    goto LABEL_10;
  }
  if ( *((_DWORD *)v5 + 58) == 412 && *((_QWORD *)v5 + 30) > 0x20uLL )
  {
    v8 = *((_DWORD *)v5 + 60);
    v7 = 1;
    v6 = (MEMORY[0xFFFFF78000000008] - *((_QWORD *)v5 + 37)) / 0xAuLL;
  }
  v5[216] = 0;
  if ( KeCancelTimer((PKTIMER)(v5 + 48)) )
  {
    v5[20] = 0;
    PopUpdateWatchdogNoWorkersEvent(v5);
  }
  if ( !*((_DWORD *)v5 + 7) )
  {
    KxReleaseSpinLock(&PopWatchdogLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v9);
    KeWaitForSingleObject(v5 + 24, Executive, 0, 0, 0LL);
    v9 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  }
  if ( !a3 )
    goto LABEL_10;
  v15 = *(_QWORD **)v5;
  v16 = (PVOID *)*((_QWORD *)v5 + 1);
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *v16 != v5 )
LABEL_23:
    __fastfail(3u);
  *v16 = v15;
  v15[1] = v16;
  *((_DWORD *)v5 + 4) = 1330532174;
  ExFreePoolWithTag(v5, 0x44574F50u);
  v5 = 0LL;
LABEL_10:
  KxReleaseSpinLock(&PopWatchdogLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
  {
    v18 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v18);
  }
  __writecr8(v9);
  if ( v7 )
    PopCacheDisplayOnPhaseDuration(v8, v6);
  return v5;
}
