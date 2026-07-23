/*
 * XREFs of PopFxSetDeviceAccountingCsPlatformState @ 0x1402F4B00
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1402F2F00 (PopFxEnablePlatformStates.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     PoFxIdleDevice @ 0x140145E7C (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x140145FF4 (PopFxActivateDevice.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopPepGetMinimumComponentIdleState @ 0x1402F90B8 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x1402F91B0 (PopPepGetMinimumDevicePowerState.c)
 */

NTSTATUS __fastcall PopFxSetDeviceAccountingCsPlatformState(unsigned int a1)
{
  unsigned int v1; // r15d
  NTSTATUS result; // eax
  NTSTATUS v3; // r12d
  struct _KTHREAD *CurrentThread; // rdx
  ULONG_PTR i; // rsi
  __int64 v6; // rax
  __int64 v7; // r13
  int v8; // r8d
  char MinimumDevicePowerState; // bl
  KIRQL v10; // al
  KIRQL v11; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  char v13; // r14
  unsigned int v14; // ebp
  __int64 v15; // rbx
  char MinimumComponentIdleState; // di
  KIRQL v17; // al
  KIRQL v18; // r15
  struct _KPRCB *v19; // rcx
  char Buffer; // [rsp+98h] [rbp+10h] BYREF
  int v22; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+20h]

  v1 = a1;
  result = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
  v3 = result;
  if ( result <= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
    for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    {
      v6 = *(_QWORD *)(i + 48);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 32);
        v23 = v7;
        PopFxActivateDevice(v7, 0, 0);
        LOBYTE(v8) = 1;
        MinimumDevicePowerState = PopPepGetMinimumDevicePowerState(*(_QWORD *)(i + 56), v1, v8, (unsigned int)&v22, 0LL);
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 592));
        *(_DWORD *)(i + 608) = v3;
        v11 = v10;
        memset((void *)(i + 624), 0, 0xC0uLL);
        if ( MinimumDevicePowerState && v22 > 1 )
        {
          *(_DWORD *)(i + 604) = v22;
          *(_BYTE *)(i + 600) = 1;
          *(_QWORD *)(i + 616) = MEMORY[0xFFFFF78000000008];
          _InterlockedOr((volatile signed __int32 *)(i + 816), 0x10u);
        }
        else
        {
          *(_QWORD *)(i + 616) = 0LL;
          *(_BYTE *)(i + 600) = 0;
        }
        KxReleaseSpinLock((PKSPIN_LOCK)(i + 592));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(v11);
        v13 = 0;
        v14 = 0;
        if ( !*(_DWORD *)(i + 820) )
          goto LABEL_26;
        do
        {
          v15 = *(_QWORD *)(*(_QWORD *)(i + 824) + 8LL * v14) + 200LL;
          MinimumComponentIdleState = PopPepGetMinimumComponentIdleState(*(_QWORD *)(i + 56), v14, a1, &v22);
          v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v15);
          *(_DWORD *)(v15 + 16) = v3;
          v18 = v17;
          memset((void *)(v15 + 32), 0, 0xC0uLL);
          if ( MinimumComponentIdleState && v22 )
          {
            v13 = 1;
            *(_DWORD *)(v15 + 12) = v22;
            *(_BYTE *)(v15 + 8) = 1;
            *(_QWORD *)(v15 + 24) = MEMORY[0xFFFFF78000000008];
            _InterlockedOr((volatile signed __int32 *)(i + 816), 0x10u);
          }
          else
          {
            *(_BYTE *)(v15 + 8) = 0;
            *(_QWORD *)(v15 + 24) = 0LL;
          }
          KxReleaseSpinLock((PKSPIN_LOCK)v15);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v18 < 2u )
          {
            v19 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)v19);
          }
          __writecr8(v18);
          ++v14;
        }
        while ( v14 < *(_DWORD *)(i + 820) );
        v7 = v23;
        v1 = a1;
        if ( v13 )
          _InterlockedOr((volatile signed __int32 *)(i + 816), 0x100u);
        else
LABEL_26:
          _InterlockedAnd((volatile signed __int32 *)(i + 816), 0xFFFFFEFF);
        PoFxIdleDevice(v7);
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    Buffer = 1;
    return ZwUpdateWnfStateData(&WNF_PO_DRIPS_DEVICE_CONSTRAINTS_REGISTERED, &Buffer, 1u, 0LL, 0LL, 0, 0);
  }
  return result;
}
