/*
 * XREFs of PoFxStartDevicePowerManagement @ 0x14018BE10
 * Callers:
 *     PoFxEnableDStateReporting @ 0x14086A290 (PoFxEnableDStateReporting.c)
 *     PoFxRegisterDebugger @ 0x1409E033C (PoFxRegisterDebugger.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PoFxActivateComponent @ 0x1400FE110 (PoFxActivateComponent.c)
 *     PopFxIdleComponent @ 0x1400FED8C (PopFxIdleComponent.c)
 *     PopFxIncrementDeviceSleepCount @ 0x140155E00 (PopFxIncrementDeviceSleepCount.c)
 *     PopFxActivateDevice @ 0x14015A1A8 (PopFxActivateDevice.c)
 *     PopPepDeviceStarted @ 0x14018BF70 (PopPepDeviceStarted.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x140751FAC (PopDiagTraceFxDeviceStartPowerManagement.c)
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
  __int64 v15; // [rsp+90h] [rbp+8h] BYREF

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
    if ( (*(_DWORD *)(BugCheckParameter2 + 808) & 1) != 0 )
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
      v8 = *(_DWORD *)(BugCheckParameter2 + 812);
      v9 = v6;
      do
      {
        for ( i = 0; i < v8; ++i )
        {
          PoFxActivateComponent(BugCheckParameter2, i, 2LL);
          v8 = *(_DWORD *)(BugCheckParameter2 + 812);
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v12 )
  {
    v14 = *(_QWORD *)(v1 + 32);
    PopFxActivateDevice(v14, 0, 0);
    PopFxIncrementDeviceSleepCount(v14);
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 812) )
  {
    do
      PopFxIdleComponent(BugCheckParameter2, v4++, 1);
    while ( v4 < *(_DWORD *)(BugCheckParameter2 + 812) );
  }
}
