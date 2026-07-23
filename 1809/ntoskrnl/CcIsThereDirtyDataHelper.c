/*
 * XREFs of CcIsThereDirtyDataHelper @ 0x14026A380
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall CcIsThereDirtyDataHelper(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rbp
  __int64 *v4; // r15
  int v5; // edi
  __int64 i; // rbx
  int v7; // edx
  unsigned __int8 v8; // di
  struct _KPRCB *v9; // rcx
  __int64 v10; // rbx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v14; // bl
  struct _KPRCB *v15; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = (KSPIN_LOCK *)(a1 + 128);
  v4 = (__int64 *)(a1 + 48);
  v5 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  for ( i = *v4; ; i = *(_QWORD *)(v10 + 136) )
  {
    v10 = i - 136;
    if ( (__int64 *)(v10 + 136) == v4 )
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(OldIrql);
      return 1;
    }
    v7 = *(_DWORD *)(v10 + 152);
    if ( (v7 & 0x800) == 0
      && *(_QWORD *)((*(_QWORD *)(v10 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x10) == *(_QWORD *)a2
      && *(_DWORD *)(v10 + 112)
      && (*(_DWORD *)((*(_QWORD *)(v10 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x50) & 0x8000) == 0 )
    {
      break;
    }
    if ( (unsigned int)++v5 >= 0x14 && (v7 & 0x820) == 0 )
    {
      *(_DWORD *)(v10 + 152) |= 0x20u;
      ++*(_DWORD *)(v10 + 112);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v8 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v9 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v9);
      }
      __writecr8(v8);
      v5 = 0;
      KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
      *(_DWORD *)(v10 + 152) &= ~0x20u;
      --*(_DWORD *)(v10 + 112);
    }
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v14 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v15 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v15);
  }
  __writecr8(v14);
  *(_BYTE *)(a2 + 8) = 1;
  return 0;
}
