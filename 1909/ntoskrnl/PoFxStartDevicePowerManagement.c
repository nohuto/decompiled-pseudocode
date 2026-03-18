/*
 * XREFs of PoFxStartDevicePowerManagement @ 0x140195D20
 * Callers:
 *     PoFxEnableDStateReporting @ 0x1408A4EC0 (PoFxEnableDStateReporting.c)
 *     PoFxRegisterDebugger @ 0x140A226F4 (PoFxRegisterDebugger.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     PoFxActivateComponent @ 0x1400E0A20 (PoFxActivateComponent.c)
 *     PoFxIdleComponent @ 0x1400E1660 (PoFxIdleComponent.c)
 *     PopFxActivateDevice @ 0x140145FF4 (PopFxActivateDevice.c)
 *     PopFxIncrementDeviceSleepCount @ 0x1401656FC (PopFxIncrementDeviceSleepCount.c)
 *     PopPepDeviceStarted @ 0x140195E80 (PopPepDeviceStarted.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x140779A34 (PopDiagTraceFxDeviceStartPowerManagement.c)
 */

void __fastcall PoFxStartDevicePowerManagement(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  unsigned int v4; // edi
  KIRQL v5; // al
  unsigned int v6; // edx
  KIRQL v7; // r15
  unsigned int v8; // eax
  __int64 v9; // r14
  unsigned int i; // ebp
  struct _KTHREAD *CurrentThread; // rax
  char v12; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v14; // rbx
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 48);
  PopPepDeviceStarted(*(_QWORD *)(BugCheckParameter2 + 56));
  v3 = *(_QWORD *)(BugCheckParameter2 + 64);
  v4 = 0;
  if ( v3 )
  {
    v15 = *(_QWORD *)(BugCheckParameter2 + 72);
    (*(void (__fastcall **)(__int64, __int64 *))(v3 + 96))(18LL, &v15);
  }
  if ( v1 )
  {
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88));
    v6 = *(_DWORD *)(v1 + 120);
    v7 = v5;
    if ( (*(_DWORD *)(BugCheckParameter2 + 816) & 1) != 0 )
    {
      if ( !v6 )
      {
LABEL_10:
        *(_DWORD *)(v1 + 296) |= 4u;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 88));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v7);
        PopDiagTraceFxDeviceStartPowerManagement(v1);
        goto LABEL_12;
      }
      v6 = 0;
      *(_DWORD *)(v1 + 120) = 0;
    }
    if ( v6 )
    {
      v8 = *(_DWORD *)(BugCheckParameter2 + 820);
      v9 = v6;
      do
      {
        for ( i = 0; i < v8; ++i )
        {
          PoFxActivateComponent(BugCheckParameter2, i, 2LL);
          v8 = *(_DWORD *)(BugCheckParameter2 + 820);
        }
        --v9;
      }
      while ( v9 );
    }
    goto LABEL_10;
  }
LABEL_12:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  v12 = PopFxEnableShutdownActiveBias;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v12 )
  {
    v14 = *(_QWORD *)(v1 + 32);
    PopFxActivateDevice(v14, 0, 0);
    PopFxIncrementDeviceSleepCount(v14);
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 820) )
  {
    do
      PoFxIdleComponent(BugCheckParameter2, v4++);
    while ( v4 < *(_DWORD *)(BugCheckParameter2 + 820) );
  }
}
