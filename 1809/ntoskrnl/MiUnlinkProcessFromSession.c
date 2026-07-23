/*
 * XREFs of MiUnlinkProcessFromSession @ 0x140091AF4
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1400917F8 (MiDeleteFinalPageTables.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlinkProcessFromSession(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rdx
  __int64 *v4; // rcx
  __int64 **v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
  v2 = *(_QWORD *)(a1 + 1024);
  if ( v2 )
  {
    v3 = (__int64 *)(a1 + 832);
    if ( *(_QWORD *)(a1 + 832) )
    {
      if ( (*(_BYTE *)(a1 + 1465) & 1) != 0 && !*(_QWORD *)(v2 + 7872) )
        *(_QWORD *)(v2 + 7872) = 1LL;
      v4 = (__int64 *)*v3;
      v5 = *(__int64 ***)(a1 + 840);
      if ( *(__int64 **)(*v3 + 8) != v3 || *v5 != v3 )
LABEL_13:
        __fastfail(3u);
      *v5 = v4;
      v4[1] = (__int64)v5;
    }
  }
  v6 = *(_QWORD *)(a1 + 1552);
  v7 = *(_QWORD **)(a1 + 1560);
  if ( *(_QWORD *)(v6 + 8) != a1 + 1552 || *v7 != a1 + 1552 )
    goto LABEL_13;
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  KxReleaseQueuedSpinLock(&LockHandle);
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
