/*
 * XREFs of ExpWorkerFactoryCreateThread @ 0x140106E9C
 * Callers:
 *     ExpWorkerFactoryCheckCreate @ 0x1400CE2A0 (ExpWorkerFactoryCheckCreate.c)
 *     NtSetInformationWorkerFactory @ 0x140106180 (NtSetInformationWorkerFactory.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwSetInformationThread @ 0x1401B8490 (ZwSetInformationThread.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     RtlpCreateUserThreadEx @ 0x14068E0D4 (RtlpCreateUserThreadEx.c)
 */

__int64 __fastcall ExpWorkerFactoryCreateThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v3; // r14
  unsigned __int8 v4; // r15
  int UserThread; // eax
  unsigned int v6; // esi
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *v9; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  int v11; // [rsp+30h] [rbp-68h]
  __int64 v12; // [rsp+60h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (struct _EX_RUNDOWN_REF *)(a1 + 104);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 104)) )
  {
    v6 = 128;
    goto LABEL_9;
  }
  KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 33LL) )
  {
    v6 = 128;
LABEL_11:
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    goto LABEL_8;
  }
  ++*(_DWORD *)(a1 + 136);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v4 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v9 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v9);
  }
  __writecr8(v4);
  UserThread = RtlpCreateUserThreadEx(
                 *(HANDLE *)(a1 + 40),
                 *(_QWORD *)(a1 + 56),
                 *(_QWORD *)(a1 + 64),
                 v11,
                 *(PUSER_THREAD_START_ROUTINE *)(a1 + 24),
                 *(PVOID *)(a1 + 32),
                 (__int64)&Handle,
                 (__int64)&v12);
  *(_DWORD *)(a1 + 160) = UserThread;
  v6 = UserThread;
  if ( UserThread < 0 )
  {
    KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
    --*(_DWORD *)(a1 + 136);
    goto LABEL_11;
  }
  if ( *(_DWORD *)(a1 + 156) )
    ZwSetInformationThread(Handle, ThreadBasePriority, (PVOID)(a1 + 156), 4u);
  ObCloseHandle(Handle, 0);
LABEL_8:
  ExReleaseRundownProtection_0(v3);
LABEL_9:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v6;
}
