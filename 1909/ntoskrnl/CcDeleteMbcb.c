/*
 * XREFs of CcDeleteMbcb @ 0x1401290E0
 * Callers:
 *     CcSetFileSizesEx @ 0x14007D570 (CcSetFileSizesEx.c)
 *     CcDeleteSharedCacheMap @ 0x14007FC90 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDeallocateBcb @ 0x140079788 (CcDeallocateBcb.c)
 *     CcDeductDirtyPages @ 0x14007A5F4 (CcDeductDirtyPages.c)
 *     CcGetPartition @ 0x14007A700 (CcGetPartition.c)
 *     ExFreeToNPagedLookasideList @ 0x140084498 (ExFreeToNPagedLookasideList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeleteMbcb(__int64 a1)
{
  __int64 Partition; // rbx
  unsigned __int64 v3; // rdi
  unsigned __int8 OldIrql; // bl
  PVOID ***v5; // r15
  PVOID **v6; // rbx
  PVOID *v7; // rcx
  PVOID ***v8; // rax
  PVOID *v9; // rdx
  PVOID *v10; // rax
  PVOID v11; // rcx
  PVOID *v12; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  PVOID P; // [rsp+20h] [rbp-30h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  p_P = &P;
  P = &P;
  Partition = CcGetPartition((_QWORD *)a1);
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  v3 = *(_QWORD *)(a1 + 160);
  if ( v3 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    CcDeductDirtyPages(a1, *(_DWORD *)(v3 + 8));
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    v5 = (PVOID ***)(v3 + 16);
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == (PVOID **)v5 )
        break;
      v7 = *v6;
      v8 = (PVOID ***)v6[1];
      if ( (*v6)[1] != v6 || *v8 != v6 )
LABEL_20:
        __fastfail(3u);
      *v8 = (PVOID **)v7;
      v7[1] = v8;
      v9 = v6[5];
      if ( v9 && v9 != (PVOID *)(v3 + 96) )
        ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&CcBitmapLookasideList, v9);
      if ( (unsigned __int64)v6 < v3 || (unsigned __int64)v6 >= v3 + 192 )
      {
        v10 = p_P;
        if ( *p_P != &P )
          goto LABEL_20;
        v6[1] = p_P;
        *v6 = &P;
        *v10 = v6;
        p_P = (PVOID *)v6;
      }
    }
    *(_QWORD *)(a1 + 160) = 0LL;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
    while ( 1 )
    {
      v11 = P;
      if ( P == &P )
        break;
      v12 = *(PVOID **)P;
      if ( *((PVOID **)P + 1) != &P || v12[1] != P )
        goto LABEL_20;
      P = *(PVOID *)P;
      v12[1] = &P;
      ExFreePoolWithTag(v11, 0);
    }
    CcDeallocateBcb((char *)v3);
  }
  else
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
  }
}
