/*
 * XREFs of PopSetWatchdog @ 0x140006068
 * Callers:
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 * Callees:
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14000630C (PopUpdateWatchdogNoWorkersEvent.c)
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

char *__fastcall PopSetWatchdog(char *P, unsigned int *a2, char a3)
{
  char *v5; // rbx
  KIRQL v6; // di
  __int64 v7; // rax
  char *result; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rcx
  PVOID *v13; // rax

  v5 = P;
  if ( P )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  }
  else
  {
    result = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x138uLL, 0x44574F50u);
    v5 = result;
    if ( !result )
      return result;
    memset(result, 0, 0x138uLL);
    *((_DWORD *)v5 + 4) = 1146572624;
    *((_WORD *)v5 + 12) = 0;
    v5[26] = 6;
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
    v6 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
    v11 = PopWatchdogList;
    if ( *(__int64 **)(PopWatchdogList + 8) != &PopWatchdogList )
      goto LABEL_20;
    *(_QWORD *)v5 = PopWatchdogList;
    *((_QWORD *)v5 + 1) = &PopWatchdogList;
    *(_QWORD *)(v11 + 8) = v5;
    PopWatchdogList = (__int64)v5;
  }
  if ( *((_DWORD *)v5 + 4) != 1146572624 )
    __fastfail(5u);
  v7 = *a2;
  if ( (_DWORD)v7 && !a3 )
  {
    v9 = 10000 * v7;
    *((_OWORD *)v5 + 14) = *(_OWORD *)a2;
    *((_OWORD *)v5 + 15) = *((_OWORD *)a2 + 1);
    *((_OWORD *)v5 + 16) = *((_OWORD *)a2 + 2);
    *((_OWORD *)v5 + 17) = *((_OWORD *)a2 + 3);
    *((_QWORD *)v5 + 36) = *((_QWORD *)a2 + 8);
    v10 = MEMORY[0xFFFFF78000000008];
    *((_QWORD *)v5 + 37) = MEMORY[0xFFFFF78000000008];
    *((_QWORD *)v5 + 26) = v9 + v10;
    *((_QWORD *)v5 + 38) = KeGetCurrentThread();
    v5[216] = 1;
    if ( !(unsigned __int8)KiSetTimerEx((int)v5 + 48, -(int)v9, 0, 0, (__int64)(v5 + 112)) )
    {
      v5[20] = 1;
      PopUpdateWatchdogNoWorkersEvent(v5);
    }
    goto LABEL_9;
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
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick();
    }
    __writecr8(v6);
    KeWaitForSingleObject(v5 + 24, Executive, 0, 0, 0LL);
    v6 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  }
  if ( !a3 )
    goto LABEL_9;
  v12 = *(_QWORD **)v5;
  v13 = (PVOID *)*((_QWORD *)v5 + 1);
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *v13 != v5 )
LABEL_20:
    __fastfail(3u);
  *v13 = v12;
  v12[1] = v13;
  *((_DWORD *)v5 + 4) = 1330532174;
  ExFreePoolWithTag(v5, 0x44574F50u);
  v5 = 0LL;
LABEL_9:
  KxReleaseSpinLock(&PopWatchdogLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick();
  }
  __writecr8(v6);
  return v5;
}
