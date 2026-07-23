/*
 * XREFs of FsRtlPrivateFastUnlockAll @ 0x140106834
 * Callers:
 *     FsRtlFastUnlockAll @ 0x140106810 (FsRtlFastUnlockAll.c)
 *     FsRtlFastUnlockAllByKey @ 0x1402827D0 (FsRtlFastUnlockAllByKey.c)
 *     FsRtlProcessFileLock @ 0x140282DA0 (FsRtlProcessFileLock.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140084498 (ExFreeToNPagedLookasideList.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     RtlRealSuccessor @ 0x140106B40 (RtlRealSuccessor.c)
 *     RtlDelete @ 0x1401078E0 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x14010797C (FsRtlPrivateResetLowestLockOffset.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140107CD4 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlSplitLocks @ 0x140107D28 (FsRtlSplitLocks.c)
 *     IoGetRequestorProcess @ 0x1401088D0 (IoGetRequestorProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     FsRtlCompleteLockIrpReal @ 0x140282770 (FsRtlCompleteLockIrpReal.c)
 */

__int64 __fastcall FsRtlPrivateFastUnlockAll(
        __int64 a1,
        _RTL_SPLAY_LINKS *a2,
        struct _KPROCESS *a3,
        int a4,
        char a5,
        __int64 a6)
{
  __int64 v6; // r15
  _RTL_SPLAY_LINKS *v7; // r13
  KSPIN_LOCK *v8; // rsi
  KIRQL v9; // al
  _RTL_SPLAY_LINKS *v10; // r8
  _RTL_SPLAY_LINKS *v11; // r14
  KIRQL v12; // r12
  unsigned int v13; // ebx
  _RTL_SPLAY_LINKS *i; // rax
  PRTL_SPLAY_LINKS v15; // rax
  _RTL_SPLAY_LINKS *v16; // rcx
  _RTL_SPLAY_LINKS *Parent; // r15
  _RTL_SPLAY_LINKS *v18; // rdi
  _RTL_SPLAY_LINKS *v19; // rbx
  _RTL_SPLAY_LINKS *v20; // r13
  _RTL_SPLAY_LINKS *v21; // rdx
  _RTL_SPLAY_LINKS *v22; // r9
  _RTL_SPLAY_LINKS *v23; // rcx
  PRTL_SPLAY_LINKS v24; // rbx
  void *v25; // rdi
  void **v26; // r14
  _RTL_SPLAY_LINKS *j; // rax
  PRTL_SPLAY_LINKS v29; // rdi
  bool v30; // zf
  _RTL_SPLAY_LINKS *v31; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v33; // rcx
  PVOID v34; // rbx
  _RTL_SPLAY_LINKS *LeftChild; // rax
  struct _KPRCB *v36; // rcx
  KIRQL v37; // al
  _RTL_SPLAY_LINKS *k; // rax
  __int64 v39; // r15
  __int64 v40; // r13
  __int64 v41; // r13
  struct _KPRCB *v42; // rcx
  struct _KPRCB *v43; // rcx
  char v44[8]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v45; // [rsp+38h] [rbp-80h]
  PRTL_SPLAY_LINKS v46; // [rsp+40h] [rbp-78h]
  _RTL_SPLAY_LINKS *v47; // [rsp+48h] [rbp-70h]
  _RTL_SPLAY_LINKS *v48; // [rsp+50h] [rbp-68h] BYREF
  _RTL_SPLAY_LINKS *v49; // [rsp+58h] [rbp-60h] BYREF
  PVOID Entry; // [rsp+60h] [rbp-58h]
  char v51; // [rsp+C0h] [rbp+8h]

  v6 = *(_QWORD *)(a1 + 24);
  v7 = a2;
  Entry = 0LL;
  v45 = v6;
  if ( !v6 )
    return 3221225598LL;
  a2[5].Parent = 0LL;
  v8 = (KSPIN_LOCK *)(v6 + 24);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 24));
  v11 = *(_RTL_SPLAY_LINKS **)(v6 + 32);
  v12 = v9;
  if ( !v11 && !*(_QWORD *)(v6 + 40) )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(v6 + 24));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    v13 = -1073741698;
    goto LABEL_29;
  }
  if ( !v11 )
    goto LABEL_25;
  for ( i = v11->LeftChild; i; i = i->LeftChild )
    v11 = i;
  v51 = 0;
  do
  {
    v15 = RtlRealSuccessor(v11);
    v16 = v11 - 1;
    v46 = v15;
    Parent = v11[-1].Parent;
    v18 = 0LL;
    v19 = 0LL;
    v49 = 0LL;
    v20 = 0LL;
    v48 = 0LL;
    v47 = v11 - 1;
    v21 = v11 - 1;
    if ( !Parent )
      goto LABEL_20;
    v22 = a2;
    while ( 1 )
    {
      v10 = v20;
      Entry = Parent;
      if ( Parent[1].LeftChild == v22
        && (struct _KPROCESS *)Parent[1].RightChild == a3
        && (!a5 || HIDWORD(Parent[1].Parent) == a4) )
      {
        break;
      }
      v21 = Parent;
      v47 = Parent;
LABEL_14:
      if ( !v20 )
      {
        if ( Parent[2].Parent > v19 )
          v19 = Parent[2].Parent;
        v48 = v19;
      }
      Parent = v21->Parent;
      if ( !v21->Parent )
        goto LABEL_19;
    }
    v30 = v20 == 0LL;
    v20 = v21;
    if ( !v30 )
      v20 = v10;
    if ( Parent[2].Parent > v18 )
      v18 = Parent[2].Parent;
    v31 = v16[2].Parent;
    v49 = v18;
    if ( v21->Parent == v31 )
      v16[2].Parent = v21;
    v21->Parent = Parent->Parent;
    if ( !*(_QWORD *)(v45 + 16) )
    {
      ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, Parent);
      v21 = v47;
      v16 = v11 - 1;
      v22 = a2;
      goto LABEL_14;
    }
    v51 = 1;
LABEL_19:
    if ( v20 )
    {
      if ( v16->Parent )
      {
        FsRtlSplitLocks(v16, v20, &v49, &v48);
      }
      else
      {
        v8[1] = (KSPIN_LOCK)RtlDelete(v11);
        ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, &v11[-1]);
      }
    }
LABEL_20:
    if ( !v51 )
    {
      v6 = v45;
      goto LABEL_22;
    }
    KxReleaseSpinLock(v8);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      v33 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v33->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v33);
    }
    __writecr8(v12);
    v34 = Entry;
    v6 = v45;
    (*(void (__fastcall **)(__int64, char *))(v45 + 16))(a6, (char *)Entry + 8);
    v12 = KeAcquireSpinLockRaiseToDpc(v8);
    ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, v34);
    v23 = (_RTL_SPLAY_LINKS *)v8[1];
    v51 = 0;
    if ( v23 )
    {
      LeftChild = v23->LeftChild;
      if ( LeftChild )
      {
        do
        {
          v46 = LeftChild;
          LeftChild = LeftChild->LeftChild;
        }
        while ( LeftChild );
LABEL_22:
        v23 = v46;
      }
    }
    v11 = v23;
  }
  while ( v23 );
  v7 = a2;
LABEL_25:
  v24 = (PRTL_SPLAY_LINKS)v8[2];
  if ( v24 )
  {
    for ( j = v24->LeftChild; j; j = j->LeftChild )
      v24 = j;
    do
    {
      v29 = RtlRealSuccessor(v24);
      if ( v24[2].Parent == v7
        && (struct _KPROCESS *)v24[2].LeftChild == a3
        && (!a5 || HIDWORD(v24[1].RightChild) == a4) )
      {
        v8[2] = (KSPIN_LOCK)RtlDelete(v24);
        if ( *(_QWORD *)(v6 + 16) )
        {
          KxReleaseSpinLock(v8);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
          {
            v36 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v36->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v36);
          }
          __writecr8(v12);
          (*(void (__fastcall **)(__int64, PRTL_SPLAY_LINKS))(v6 + 16))(a6, v24 + 1);
          v37 = KeAcquireSpinLockRaiseToDpc(v8);
          v29 = (PRTL_SPLAY_LINKS)v8[2];
          v12 = v37;
          if ( v29 )
          {
            for ( k = v29->LeftChild; k; k = k->LeftChild )
              v29 = k;
          }
        }
        ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v24);
      }
      v24 = v29;
    }
    while ( v29 );
  }
  v25 = (void *)v8[3];
  v26 = (void **)(v8 + 3);
  if ( v25 )
  {
    do
    {
      v39 = *((_QWORD *)v25 + 3);
      v40 = *(_QWORD *)(v39 + 184);
      if ( a2 != *(_RTL_SPLAY_LINKS **)(v40 + 48)
        || a3 != IoGetRequestorProcess(*((PIRP *)v25 + 3))
        || a5 && a4 != *(_DWORD *)(v40 + 16) )
      {
        goto LABEL_98;
      }
      *(_BYTE *)(v39 + 69) = KeAcquireQueuedSpinLock(7uLL);
      v41 = 0LL;
      _InterlockedExchange64((volatile __int64 *)(v39 + 104), 0LL);
      if ( !*(_BYTE *)(v39 + 68) )
        v41 = v39;
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v39 + 69));
      if ( v41 )
      {
        *(_QWORD *)(v41 + 56) = 0LL;
        *v26 = *(void **)v25;
        if ( v25 == (void *)v8[4] )
          v8[4] = (KSPIN_LOCK)v26;
        KxReleaseSpinLock(v8);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
        {
          v42 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v42->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v42);
        }
        __writecr8(v12);
        FsRtlCompleteLockIrpReal(*(_QWORD *)(v45 + 8), *((_QWORD *)v25 + 2), v41, 3221225598LL, v44, 0LL);
        v12 = KeAcquireSpinLockRaiseToDpc(v8);
        v26 = (void **)(v8 + 3);
        ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v25);
      }
      else
      {
LABEL_98:
        v26 = (void **)v25;
      }
      v25 = *v26;
    }
    while ( *v26 );
  }
  LOBYTE(v10) = v12;
  FsRtlPrivateCheckWaitingLocks(v45, v8, v10);
  FsRtlPrivateResetLowestLockOffset(v45);
  KxReleaseSpinLock(v8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
  {
    v43 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v43->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v43);
  }
  v13 = 0;
LABEL_29:
  __writecr8(v12);
  return v13;
}
