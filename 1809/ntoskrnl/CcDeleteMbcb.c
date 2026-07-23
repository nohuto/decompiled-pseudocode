/*
 * XREFs of CcDeleteMbcb @ 0x140125A58
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14007C260 (CcDeleteSharedCacheMap.c)
 *     CcSetFileSizesEx @ 0x14007CFB0 (CcSetFileSizesEx.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     CcDeallocateBcb @ 0x140020F14 (CcDeallocateBcb.c)
 *     CcDeductDirtyPages @ 0x14002124C (CcDeductDirtyPages.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeleteMbcb(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 Partition; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int8 OldIrql; // bl
  PVOID ***v7; // r15
  PVOID **v8; // rbx
  PVOID *v9; // rcx
  PVOID ***v10; // rax
  PVOID *v11; // rdx
  PVOID *v12; // rax
  PVOID v13; // rcx
  PVOID *v14; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  PVOID P; // [rsp+20h] [rbp-30h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  p_P = &P;
  P = &P;
  Partition = CcGetPartition((_QWORD *)a1, a2, a3);
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  v5 = *(_QWORD *)(a1 + 160);
  if ( v5 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    CcDeductDirtyPages(a1, *(_DWORD *)(v5 + 8));
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    v7 = (PVOID ***)(v5 + 16);
    while ( 1 )
    {
      v8 = *v7;
      if ( *v7 == (PVOID **)v7 )
        break;
      v9 = *v8;
      v10 = (PVOID ***)v8[1];
      if ( (*v8)[1] != v8 || *v10 != v8 )
LABEL_20:
        __fastfail(3u);
      *v10 = (PVOID **)v9;
      v9[1] = v10;
      v11 = v8[5];
      if ( v11 && v11 != (PVOID *)(v5 + 96) )
        ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&CcBitmapLookasideList, v11);
      if ( (unsigned __int64)v8 < v5 || (unsigned __int64)v8 >= v5 + 192 )
      {
        v12 = p_P;
        if ( *p_P != &P )
          goto LABEL_20;
        v8[1] = p_P;
        *v8 = &P;
        *v12 = v8;
        p_P = (PVOID *)v8;
      }
    }
    *(_QWORD *)(a1 + 160) = 0LL;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
    while ( 1 )
    {
      v13 = P;
      if ( P == &P )
        break;
      v14 = *(PVOID **)P;
      if ( *((PVOID **)P + 1) != &P || v14[1] != P )
        goto LABEL_20;
      P = *(PVOID *)P;
      v14[1] = &P;
      ExFreePoolWithTag(v13, 0);
    }
    CcDeallocateBcb((char *)v5);
  }
  else
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
  }
}
