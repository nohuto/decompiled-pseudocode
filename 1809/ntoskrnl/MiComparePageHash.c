/*
 * XREFs of MiComparePageHash @ 0x1402CC450
 * Callers:
 *     MiValidatePagefilePageHash @ 0x1402CC704 (MiValidatePagefilePageHash.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiComparePageHash(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v6; // esi
  _DWORD *v7; // r9
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v11; // r9
  unsigned __int8 v12; // bl
  struct _KPRCB *v13; // rcx
  struct _KLOCK_QUEUE_HANDLE v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  v6 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &v14);
  v15 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)(*(_QWORD *)(a1 + 216) + 4 * v3) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (v15 & 1) == 0 || *v7 == a3 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v14);
    OldIrql = v14.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(OldIrql);
    return 0LL;
  }
  else
  {
    if ( (*(_BYTE *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v15) >> 12) & 0xFFFFFFFFFLL)
                   - 0x58000000000LL
                   + 34) & 0x10) != 0 )
    {
      if ( !byte_14043BA00 )
        v6 = -1073741761;
    }
    else
    {
      *v11 = a3;
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v14);
    v12 = v14.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14.OldIrql < 2u )
    {
      v13 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v13);
    }
    __writecr8(v12);
    return v6;
  }
}
