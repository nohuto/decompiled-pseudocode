/*
 * XREFs of MiRemoveSpecialPoolRange @ 0x1402ACAC0
 * Callers:
 *     MmFreeSpecialPool @ 0x1402AD368 (MmFreeSpecialPool.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14002840C (MiReturnSystemVa.c)
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     InsertTailListPte @ 0x140079CF0 (InsertTailListPte.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     RemoveListEntryPte @ 0x14012980C (RemoveListEntryPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiRemoveSpecialPoolRange(PKSPIN_LOCK SpinLock, char a2, unsigned __int64 *a3)
{
  int v4; // edx
  signed int v6; // r12d
  struct _KTHREAD **v7; // r15
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 updated; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  unsigned __int64 *v17; // rdi
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  unsigned __int8 v20; // di
  struct _KPRCB *v21; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+70h] [rbp+8h] BYREF

  v4 = a2 & 1;
  v6 = v4 != 0 ? 7 : 13;
  v7 = (struct _KTHREAD **)((char *)SpinLock + (-(__int64)(v4 != 0) & 0xFFFFFFFFFFFFFFE8uLL) + 32);
  v23 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v23) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  v9 = *(_QWORD *)(v8 + 16);
  v10 = v9;
  if ( qword_14043B180 && (v9 & 0x10) == 0 )
    v10 = v9 & ~qword_14043B180;
  updated = MiUpdatePageFileHighInPte(v9, HIDWORD(v10) - 1);
  *(_QWORD *)(v8 + 16) = updated;
  v13 = updated;
  if ( v12 )
  {
    if ( (updated & 0x10) != 0 )
      v13 = updated & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v13 = updated & ~v12;
  }
  if ( (v13 & 0xFFFFFFFF00000000uLL) != 0 )
  {
    InsertTailListPte(v7);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    result = OldIrql;
    __writecr8(OldIrql);
  }
  else
  {
    if ( (updated & 0xF000) != 0 )
      *(_QWORD *)(v8 + 16) = updated & 0xFFFFFFFFFFFF0FFFuLL;
    v17 = (unsigned __int64 *)((unsigned __int64)a3 & 0xFFFFFFFFFFFFF000uLL);
    v18 = ((unsigned __int64)a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFFF000uLL) < v18 )
    {
      do
      {
        if ( v17 != a3 )
          RemoveListEntryPte((unsigned __int64)v7, v17);
        v17 += 2;
      }
      while ( (unsigned __int64)v17 < v18 );
    }
    if ( SpinLock != &qword_14043BFC0 )
    {
      v19 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
      --*(_DWORD *)(v19 + 8128);
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v20 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v21 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v21);
    }
    __writecr8(v20);
    if ( SpinLock == &qword_14043BFC0 )
      _InterlockedDecrement(&dword_140439BD0);
    else
      v6 = 1;
    return MiReturnSystemVa(
             (__int64)(((unsigned __int64)a3 & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16,
             ((__int64)(((unsigned __int64)a3 & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16) + 0x200000,
             v6);
  }
  return result;
}
