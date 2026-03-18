/*
 * XREFs of PopPepIdleTimeoutRoutine @ 0x1402F9840
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     PopPepUpdateIdleState @ 0x1400B0724 (PopPepUpdateIdleState.c)
 *     PopPepComponentGetResidencyIdleState @ 0x1400B0830 (PopPepComponentGetResidencyIdleState.c)
 *     PopPepCountReadyActivities @ 0x1400B1FD4 (PopPepCountReadyActivities.c)
 *     PopPepRequestWork @ 0x1400B2094 (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x1400B2224 (PopPepPromoteActivities.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     PopPepArmIdleTimer @ 0x1402F8FD8 (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutRoutine()
{
  __int64 v0; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 i; // rdi
  KIRQL v3; // bp
  unsigned int ready; // r15d
  unsigned int j; // esi
  __int64 v6; // r10
  char v7; // al
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  int ResidencyIdleState; // eax
  __int64 v11; // r10
  unsigned int v12; // eax
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = MEMORY[0xFFFFF78000000008];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  for ( i = PopPepDeviceList; (__int64 *)i != &PopPepDeviceList; i = *(_QWORD *)i )
  {
    if ( (*(_BYTE *)(i + 16) & 1) != 0 )
      continue;
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(i + 64));
    if ( *(_BYTE *)(i + 136) )
    {
      ready = PopPepCountReadyActivities((unsigned int *)i, 0LL, 3);
      for ( j = 0; j < *(_DWORD *)(i + 180); ++j )
      {
        v6 = 200LL * j + i + 184;
        if ( *(_DWORD *)(v6 + 176) == *(_DWORD *)(v6 + 188) - 1
          || **(_DWORD **)(v6 + 72)
          || (v7 = 1, **(_DWORD **)(v6 + 80)) )
        {
          v7 = 0;
        }
        if ( v7 )
        {
          v8 = *(_QWORD *)(v6 + 136);
          if ( v0 > v8 )
          {
            v9 = v0 - v8;
            if ( (unsigned __int64)(v0 - v8) > *(_QWORD *)(v6 + 120) )
            {
              *(_QWORD *)(v6 + 120) = v9;
              ResidencyIdleState = PopPepComponentGetResidencyIdleState(v6, v9);
              if ( *(_DWORD *)(v11 + 160) != ResidencyIdleState )
              {
                *(_DWORD *)(v11 + 160) = ResidencyIdleState;
                PopPepUpdateIdleState(i, v11, 1);
              }
            }
          }
        }
      }
      PopPepPromoteActivities(i, 0LL, 3);
      v12 = PopPepCountReadyActivities((unsigned int *)i, 0LL, 3);
      PopPepRequestWork(ready, v12);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(i + 64));
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v3 >= 2u )
        goto LABEL_25;
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(i + 64));
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v3 >= 2u )
        goto LABEL_25;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
LABEL_25:
    __writecr8(v3);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  PopPepArmIdleTimer(1);
}
