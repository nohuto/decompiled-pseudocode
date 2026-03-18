/*
 * XREFs of PopFxStopDeviceAccounting @ 0x1402F574C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402FC0EC (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     PopFxUpdateAccountingActiveTime @ 0x1400B1768 (PopFxUpdateAccountingActiveTime.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxMergeActiveTimeAccounting @ 0x1402F3EA4 (PopFxMergeActiveTimeAccounting.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x1402FDA28 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxGlobalDeviceAccounting @ 0x1402FE010 (PopDiagTraceFxGlobalDeviceAccounting.c)
 *     PopDiagTraceFxComponentAccounting @ 0x1408AF390 (PopDiagTraceFxComponentAccounting.c)
 */

unsigned __int64 PopFxStopDeviceAccounting()
{
  unsigned __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v2; // r14
  ULONG_PTR v3; // rbx
  __int64 v4; // r12
  UNICODE_STRING *p_DestinationString; // r15
  KIRQL v6; // si
  _QWORD *v7; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v9; // esi
  __int64 v10; // r13
  KIRQL v11; // r14
  _QWORD *v12; // rcx
  struct _KPRCB *v13; // rcx
  KIRQL v14; // al
  __int64 v15; // rdi
  __int64 v16; // rsi
  KIRQL v17; // bl
  struct _KPRCB *v18; // rcx
  unsigned __int64 v19; // [rsp+38h] [rbp-39h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-31h] BYREF
  _OWORD v21[2]; // [rsp+50h] [rbp-21h] BYREF
  __int64 v22; // [rsp+70h] [rbp-1h]
  _OWORD v23[2]; // [rsp+78h] [rbp+7h] BYREF
  __int64 v24; // [rsp+98h] [rbp+27h]

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = (unsigned int)PopFxDeviceAccountingLevel;
  if ( PopFxDeviceAccountingLevel )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
    v2 = MEMORY[0xFFFFF78000000008];
    v3 = PopFxDeviceList;
    v19 = MEMORY[0xFFFFF78000000008];
    while ( (ULONG_PTR *)v3 != &PopFxDeviceList )
    {
      v4 = *(_QWORD *)(v3 + 48);
      if ( v4 )
      {
        if ( *(_QWORD *)(v3 + 1192) )
        {
          p_DestinationString = (UNICODE_STRING *)(v3 + 1184);
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)&pwsz);
          p_DestinationString = &DestinationString;
        }
        if ( PopFxDeviceAccountingLevel < 0 )
        {
          v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 592));
          if ( (PopFxDeviceAccountingLevel & 1) != 0 )
          {
            PopFxUpdateAccountingActiveTime(v3 + 592, v2, 0x47868C00uLL);
            PopFxMergeActiveTimeAccounting(v7);
          }
          KxReleaseSpinLock((PKSPIN_LOCK)(v3 + 592));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          __writecr8(v6);
          PopDiagTraceFxDeviceAccounting(v4, v3 + 592, p_DestinationString, *(_QWORD *)(v3 + 624));
        }
        v9 = 0;
        if ( *(_DWORD *)(v3 + 820) )
        {
          do
          {
            v10 = *(_QWORD *)(*(_QWORD *)(v3 + 824) + 8LL * v9);
            v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 200));
            if ( (PopFxDeviceAccountingLevel & 1) != 0 )
            {
              PopFxUpdateAccountingActiveTime(v10 + 200, v19, 0x47868C00uLL);
              PopFxMergeActiveTimeAccounting(v12);
            }
            KxReleaseSpinLock((PKSPIN_LOCK)(v10 + 200));
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
            {
              v13 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)v13);
            }
            __writecr8(v11);
            PopDiagTraceFxComponentAccounting(
              v4,
              *(_DWORD *)(v10 + 16),
              v10 + 200,
              (_DWORD)p_DestinationString,
              *(_QWORD *)(v10 + 232));
            ++v9;
          }
          while ( v9 < *(_DWORD *)(v3 + 820) );
          v2 = v19;
        }
      }
      v3 = *(_QWORD *)v3;
    }
    v14 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
    v15 = qword_140444890;
    v16 = qword_140444898;
    v17 = v14;
    v23[0] = xmmword_1404448A0;
    v23[1] = xmmword_1404448B0;
    v24 = qword_1404448C0;
    v21[0] = xmmword_1404448C8;
    v21[1] = xmmword_1404448D8;
    v22 = qword_1404448E8;
    KxReleaseSpinLock(&PopFxGlobalDeviceAccountingLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
    {
      v18 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v18);
    }
    __writecr8(v17);
    PopDiagTraceFxGlobalDeviceAccounting(v15, v16, v23, v21);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    return (unsigned __int64)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}
