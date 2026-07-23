/*
 * XREFs of PopFxSetDeviceAccountingCsPlatformState @ 0x1402D9888
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1402D8200 (PopFxEnablePlatformStates.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PoFxIdleDevice @ 0x14015A028 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x14015A1A8 (PopFxActivateDevice.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopPepGetMinimumComponentIdleState @ 0x1402DD04C (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x1402DD144 (PopPepGetMinimumDevicePowerState.c)
 */

NTSTATUS __fastcall PopFxSetDeviceAccountingCsPlatformState(unsigned int a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // r15d
  struct _KTHREAD *CurrentThread; // rdx
  ULONG_PTR i; // rsi
  __int64 v6; // rax
  __int64 v7; // r12
  int v8; // r8d
  char MinimumDevicePowerState; // bl
  KIRQL v10; // al
  KIRQL v11; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int j; // ebp
  __int64 v14; // rbx
  char MinimumComponentIdleState; // di
  KIRQL v16; // al
  KIRQL v17; // r14
  struct _KPRCB *v18; // rcx
  char Buffer; // [rsp+88h] [rbp+10h] BYREF
  int v20; // [rsp+90h] [rbp+18h] BYREF

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
        PopFxActivateDevice(v7, 0, 0);
        LOBYTE(v8) = 1;
        MinimumDevicePowerState = PopPepGetMinimumDevicePowerState(*(_QWORD *)(i + 56), a1, v8, (unsigned int)&v20, 0LL);
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 584));
        *(_DWORD *)(i + 600) = v3;
        v11 = v10;
        memset((void *)(i + 616), 0, 0xC0uLL);
        if ( MinimumDevicePowerState && v20 > 1 )
        {
          *(_DWORD *)(i + 596) = v20;
          *(_BYTE *)(i + 592) = 1;
          *(_QWORD *)(i + 608) = MEMORY[0xFFFFF78000000008];
          _InterlockedOr((volatile signed __int32 *)(i + 808), 0x10u);
        }
        else
        {
          *(_BYTE *)(i + 592) = 0;
          *(_QWORD *)(i + 608) = 0LL;
        }
        KxReleaseSpinLock((PKSPIN_LOCK)(i + 584));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(v11);
        for ( j = 0; j < *(_DWORD *)(i + 812); ++j )
        {
          v14 = *(_QWORD *)(*(_QWORD *)(i + 816) + 8LL * j) + 200LL;
          MinimumComponentIdleState = PopPepGetMinimumComponentIdleState(*(_QWORD *)(i + 56), j, a1, &v20);
          v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v14);
          *(_DWORD *)(v14 + 16) = v3;
          v17 = v16;
          memset((void *)(v14 + 32), 0, 0xC0uLL);
          if ( MinimumComponentIdleState && v20 )
          {
            *(_DWORD *)(v14 + 12) = v20;
            *(_BYTE *)(v14 + 8) = 1;
            *(_QWORD *)(v14 + 24) = MEMORY[0xFFFFF78000000008];
            _InterlockedOr((volatile signed __int32 *)(i + 808), 0x10u);
          }
          else
          {
            *(_QWORD *)(v14 + 24) = 0LL;
            *(_BYTE *)(v14 + 8) = 0;
          }
          KxReleaseSpinLock((PKSPIN_LOCK)v14);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
          {
            v18 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)v18);
          }
          __writecr8(v17);
        }
        PoFxIdleDevice(v7);
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    Buffer = 1;
    return ZwUpdateWnfStateData(&WNF_PO_DRIPS_DEVICE_CONSTRAINTS_REGISTERED, &Buffer, 1u, 0LL, 0LL, 0, 0);
  }
  return result;
}
