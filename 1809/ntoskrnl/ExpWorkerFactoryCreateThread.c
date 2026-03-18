/*
 * XREFs of ExpWorkerFactoryCreateThread @ 0x140106DFC
 * Callers:
 *     ExpWorkerFactoryCheckCreate @ 0x1400CE200 (ExpWorkerFactoryCheckCreate.c)
 *     NtSetInformationWorkerFactory @ 0x1401060E0 (NtSetInformationWorkerFactory.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwSetInformationThread @ 0x1401B8310 (ZwSetInformationThread.c)
 *     ObCloseHandle @ 0x1405F5700 (ObCloseHandle.c)
 *     RtlpCreateUserThreadEx @ 0x14068CF34 (RtlpCreateUserThreadEx.c)
 */

__int64 __fastcall ExpWorkerFactoryCreateThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // esi
  struct _EX_RUNDOWN_REF *v4; // r14
  unsigned __int8 v5; // r15
  int UserThread; // eax
  unsigned int v7; // esi
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *v10; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v3 = (*(_DWORD *)(a1 + 152) >> 7) & 0x10;
  --CurrentThread->KernelApcDisable;
  v4 = (struct _EX_RUNDOWN_REF *)(a1 + 104);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 104)) )
  {
    v7 = 128;
    goto LABEL_9;
  }
  KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 33LL) )
  {
    v7 = 128;
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
  v5 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v10 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v10);
  }
  __writecr8(v5);
  UserThread = RtlpCreateUserThreadEx(*(_QWORD *)(a1 + 40), 0, v3, 0, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64));
  *(_DWORD *)(a1 + 160) = UserThread;
  v7 = UserThread;
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
  ExReleaseRundownProtection_0(v4);
LABEL_9:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v7;
}
