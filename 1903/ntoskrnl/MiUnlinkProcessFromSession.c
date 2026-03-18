/*
 * XREFs of MiUnlinkProcessFromSession @ 0x1400AD670
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1400AD0A0 (MiDeleteFinalPageTables.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlinkProcessFromSession(__int64 a1)
{
  __int64 v2; // rdx
  __int64 *v3; // rcx
  __int64 *v4; // rdx
  __int64 **v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v2 = *(_QWORD *)(a1 + 1024);
  if ( v2 )
  {
    v3 = (__int64 *)(a1 + 840);
    if ( *(_QWORD *)(a1 + 840) )
    {
      if ( (*(_BYTE *)(a1 + 1465) & 1) != 0 && !*(_QWORD *)(v2 + 960) )
        *(_QWORD *)(v2 + 960) = 1LL;
      v4 = (__int64 *)*v3;
      v5 = *(__int64 ***)(a1 + 848);
      if ( *(__int64 **)(*v3 + 8) != v3 || *v5 != v3 )
LABEL_13:
        __fastfail(3u);
      *v5 = v4;
      v4[1] = (__int64)v5;
    }
  }
  v6 = *(_QWORD *)(a1 + 1600);
  v7 = *(_QWORD **)(a1 + 1608);
  if ( *(_QWORD *)(v6 + 8) != a1 + 1600 || *v7 != a1 + 1600 )
    goto LABEL_13;
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
