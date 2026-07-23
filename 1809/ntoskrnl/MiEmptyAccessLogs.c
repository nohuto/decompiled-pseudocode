/*
 * XREFs of MiEmptyAccessLogs @ 0x140010D20
 * Callers:
 *     <none>
 * Callees:
 *     MiDrainSystemAccessLog @ 0x14000FF28 (MiDrainSystemAccessLog.c)
 *     MiGetNextSession @ 0x140012754 (MiGetNextSession.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     MmDetachSession @ 0x14011A630 (MmDetachSession.c)
 *     MmAttachSession @ 0x14011A6C0 (MmAttachSession.c)
 *     MiCheckAndProcessCcAccessLog @ 0x14013B948 (MiCheckAndProcessCcAccessLog.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsGetNextProcess @ 0x1405B31E0 (PsGetNextProcess.c)
 */

void MiEmptyAccessLogs()
{
  PSLIST_ENTRY v0; // r14
  __int64 v1; // rdx
  unsigned __int8 v2; // bl
  void *i; // rcx
  __int64 NextProcess; // rax
  __int64 v5; // rdx
  ULONG_PTR v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  void *j; // rcx
  ULONG_PTR NextSession; // rax
  __int64 v11; // rdx
  void *v12; // rbx
  __int64 SessionVm; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned __int8 v18; // bl
  __int64 v19; // rdx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v22; // rcx
  struct _KPRCB *v23; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v25[48]; // [rsp+38h] [rbp-38h] BYREF

  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  if ( dword_14043B9A8 )
  {
    WorkItem.Parameter = 0LL;
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v19);
    }
    __writecr8(OldIrql);
  }
  else
  {
    v0 = 0LL;
    do
    {
      WorkItem.Parameter = (void *)2;
      KxReleaseQueuedSpinLock(&LockHandle);
      v2 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v22 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v22, v1);
      }
      __writecr8(v2);
      for ( i = 0LL; ; i = (void *)v6 )
      {
        NextProcess = PsGetNextProcess(i);
        v6 = NextProcess;
        if ( !NextProcess )
          break;
        v7 = NextProcess + 1280;
        if ( *(_QWORD *)(MiGetSharedVm(NextProcess + 1280, v5) + 48) )
        {
          KiStackAttachProcess(v6);
          MiDrainSystemAccessLog(v7, v8);
          KiUnstackDetachProcess(v25, 0LL);
        }
      }
      for ( j = 0LL; ; j = v12 )
      {
        NextSession = MiGetNextSession(j);
        v12 = (void *)NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession(NextSession) >= 0 )
        {
          SessionVm = MiGetSessionVm();
          MiDrainSystemAccessLog(SessionVm, v14);
          MmDetachSession(v12, v25);
        }
      }
      v15 = &unk_14043C140;
      v16 = 3LL;
      do
      {
        if ( v15[14] )
          MiDrainSystemAccessLog((__int64)v15, v11);
        v15 += 34;
        --v16;
      }
      while ( v16 );
      MiCheckAndProcessCcAccessLog(0LL, 1LL);
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    }
    while ( WorkItem.Parameter != (void *)2 );
    if ( !dword_14043B9A8 )
    {
      v0 = P;
      P = 0LL;
    }
    WorkItem.Parameter = 0LL;
    KxReleaseQueuedSpinLock(&LockHandle);
    v18 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v23 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v23->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v23, v17);
    }
    __writecr8(v18);
    if ( v0 )
      ExFreePoolWithTag(v0, 0);
  }
}
