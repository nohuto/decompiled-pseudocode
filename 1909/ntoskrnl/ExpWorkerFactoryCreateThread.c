/*
 * XREFs of ExpWorkerFactoryCreateThread @ 0x1400835A4
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140045C90 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14005BA80 (ExpWorkerFactoryCheckCreate.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwSetInformationThread @ 0x1401C0DF0 (ZwSetInformationThread.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     RtlpCreateUserThreadEx @ 0x140612374 (RtlpCreateUserThreadEx.c)
 */

__int64 __fastcall ExpWorkerFactoryCreateThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v3; // r13
  int v4; // r12d
  unsigned __int8 v5; // r15
  int UserThread; // eax
  unsigned int v7; // esi
  unsigned __int8 v9; // r15
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *v11; // rcx
  struct _KPRCB *v12; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  int v14; // [rsp+38h] [rbp-19h]
  __int64 v15[2]; // [rsp+68h] [rbp+17h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp+27h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+67h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v15[0] = 0LL;
  v15[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (struct _EX_RUNDOWN_REF *)(a1 + 104);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 104)) )
  {
    v7 = 128;
    goto LABEL_12;
  }
  KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 33LL) )
  {
    v7 = 128;
LABEL_16:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    goto LABEL_11;
  }
  ++*(_DWORD *)(a1 + 296);
  v4 = *(_DWORD *)(a1 + 312);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v5 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v11 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v11);
  }
  __writecr8(v5);
  UserThread = RtlpCreateUserThreadEx(
                 *(HANDLE *)(a1 + 40),
                 *(_QWORD *)(a1 + 56),
                 *(_QWORD *)(a1 + 64),
                 v14,
                 *(PUSER_THREAD_START_ROUTINE *)(a1 + 24),
                 *(PVOID *)(a1 + 32),
                 (__int64)&Handle,
                 (__int64)v15);
  *(_DWORD *)(a1 + 320) = UserThread;
  v7 = UserThread;
  if ( UserThread < 0 )
  {
    KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
    --*(_DWORD *)(a1 + 296);
    goto LABEL_16;
  }
  if ( (v4 & 0x8000) == 0 )
  {
    KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
    *(_DWORD *)(a1 + 312) |= 0x8000u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v9 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v12 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v12);
    }
    __writecr8(v9);
  }
  if ( *(_DWORD *)(a1 + 316) )
    ZwSetInformationThread(Handle, ThreadBasePriority, (PVOID)(a1 + 316), 4u);
  if ( (*(_DWORD *)(a1 + 312) & 0x4000) != 0 )
    ZwSetInformationThread(Handle, ThreadSelectedCpuSets, (PVOID)(a1 + 120), 8 * (unsigned __int16)KiActiveGroups);
  ObCloseHandle(Handle, 0);
LABEL_11:
  ExReleaseRundownProtection_0(v3);
LABEL_12:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v7;
}
