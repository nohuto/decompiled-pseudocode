/*
 * XREFs of MiEmptyAccessLogs @ 0x14017D570
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiGetSessionVm @ 0x140075FE4 (MiGetSessionVm.c)
 *     MiGetNextSession @ 0x14008CB84 (MiGetNextSession.c)
 *     MmDetachSession @ 0x14008CE30 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008CED0 (MmAttachSession.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     MiDrainSystemAccessLog @ 0x14012FE58 (MiDrainSystemAccessLog.c)
 *     MiCheckAndProcessCcAccessLog @ 0x14017D750 (MiCheckAndProcessCcAccessLog.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsGetNextProcess @ 0x140639220 (PsGetNextProcess.c)
 */

void MiEmptyAccessLogs()
{
  PSLIST_ENTRY v0; // r14
  unsigned __int8 v1; // bl
  _KPROCESS *i; // rcx
  __int64 NextProcess; // rax
  _KPROCESS *v4; // rbx
  __int64 v5; // rdi
  _QWORD *j; // rcx
  _QWORD *NextSession; // rax
  __int64 v8; // rbx
  unsigned __int64 SessionVm; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  unsigned __int8 v12; // bl
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v15; // rcx
  struct _KPRCB *v16; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v18[48]; // [rsp+38h] [rbp-38h] BYREF

  memset(v18, 0, sizeof(v18));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140466080, &LockHandle);
  if ( dword_140466068 )
  {
    stru_140466048.Parameter = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
  }
  else
  {
    v0 = 0LL;
    do
    {
      stru_140466048.Parameter = (void *)2;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v1 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v15 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v15);
      }
      __writecr8(v1);
      for ( i = 0LL; ; i = v4 )
      {
        NextProcess = PsGetNextProcess(i);
        v4 = (_KPROCESS *)NextProcess;
        if ( !NextProcess )
          break;
        v5 = NextProcess + 1280;
        if ( *((_QWORD *)MiGetSharedVm(NextProcess + 1280) + 5) )
        {
          KiStackAttachProcess(v4, 0, (__int64)v18);
          MiDrainSystemAccessLog(v5);
          KiUnstackDetachProcess((struct _KTHREAD *)v18, 0);
        }
      }
      for ( j = 0LL; ; j = (_QWORD *)v8 )
      {
        NextSession = MiGetNextSession(j);
        v8 = (__int64)NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession((ULONG_PTR)NextSession) >= 0 )
        {
          SessionVm = MiGetSessionVm();
          MiDrainSystemAccessLog(SessionVm);
          MmDetachSession(v8, (__int64)v18);
        }
      }
      v10 = &unk_140466780;
      v11 = 3LL;
      do
      {
        if ( v10[14] )
          MiDrainSystemAccessLog((__int64)v10);
        v10 += 40;
        --v11;
      }
      while ( v11 );
      MiCheckAndProcessCcAccessLog(0LL, 1LL);
      KeAcquireInStackQueuedSpinLock(&qword_140466080, &LockHandle);
    }
    while ( stru_140466048.Parameter != (void *)2 );
    if ( !dword_140466068 )
    {
      v0 = P;
      P = 0LL;
    }
    stru_140466048.Parameter = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v12 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v16 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v16);
    }
    __writecr8(v12);
    if ( v0 )
      ExFreePoolWithTag(v0, 0);
  }
}
