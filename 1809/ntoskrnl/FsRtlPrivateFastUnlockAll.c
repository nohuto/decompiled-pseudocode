/*
 * XREFs of FsRtlPrivateFastUnlockAll @ 0x14012ED34
 * Callers:
 *     FsRtlFastUnlockAll @ 0x14012ED10 (FsRtlFastUnlockAll.c)
 *     FsRtlProcessFileLock @ 0x14013FAD0 (FsRtlProcessFileLock.c)
 *     FsRtlFastUnlockAllByKey @ 0x14026F270 (FsRtlFastUnlockAllByKey.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlDelete @ 0x14008D400 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x14008D49C (FsRtlPrivateResetLowestLockOffset.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     IoGetRequestorProcess @ 0x14010E000 (IoGetRequestorProcess.c)
 *     RtlRealSuccessor @ 0x14012F030 (RtlRealSuccessor.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14012F070 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlSplitLocks @ 0x14012F0C4 (FsRtlSplitLocks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsRtlPrivateFastUnlockAll(
        __int64 a1,
        _RTL_SPLAY_LINKS *a2,
        struct _KPROCESS *a3,
        int a4,
        char a5,
        __int64 a6)
{
  __int64 *v6; // r14
  _RTL_SPLAY_LINKS *v7; // r13
  KSPIN_LOCK *v8; // rsi
  KIRQL v9; // al
  _RTL_SPLAY_LINKS *v10; // r8
  _RTL_SPLAY_LINKS *v11; // rbp
  KIRQL v12; // r12
  unsigned int v13; // ebx
  _RTL_SPLAY_LINKS *i; // rax
  PRTL_SPLAY_LINKS v16; // rax
  _RTL_SPLAY_LINKS *v17; // rcx
  _RTL_SPLAY_LINKS *Parent; // r14
  _RTL_SPLAY_LINKS *v19; // rdi
  _RTL_SPLAY_LINKS *v20; // rbx
  _RTL_SPLAY_LINKS *v21; // r13
  _RTL_SPLAY_LINKS *v22; // rdx
  _RTL_SPLAY_LINKS *v23; // r9
  _RTL_SPLAY_LINKS *v24; // rcx
  PRTL_SPLAY_LINKS v25; // rbx
  _RTL_SPLAY_LINKS *j; // rax
  PRTL_SPLAY_LINKS v27; // rdi
  void *v28; // rdi
  void **v29; // r14
  bool v30; // zf
  _RTL_SPLAY_LINKS *v31; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v33; // rcx
  PVOID v34; // rbx
  _RTL_SPLAY_LINKS *LeftChild; // rax
  struct _KPRCB *v36; // rcx
  KIRQL v37; // al
  _RTL_SPLAY_LINKS *k; // rax
  __int64 v39; // rbp
  __int64 v40; // r13
  IRP *v41; // r13
  struct _KPRCB *v42; // rcx
  __int64 v43; // rcx
  void (__fastcall *v44)(__int64, IRP *); // rax
  struct _KPRCB *v45; // rcx
  __int64 *v46; // [rsp+20h] [rbp-78h]
  PRTL_SPLAY_LINKS v47; // [rsp+28h] [rbp-70h]
  _RTL_SPLAY_LINKS *v48; // [rsp+30h] [rbp-68h]
  _RTL_SPLAY_LINKS *v49; // [rsp+38h] [rbp-60h] BYREF
  _RTL_SPLAY_LINKS *v50; // [rsp+40h] [rbp-58h] BYREF
  PVOID Entry; // [rsp+48h] [rbp-50h]
  char v52; // [rsp+A0h] [rbp+8h]

  v6 = *(__int64 **)(a1 + 24);
  v7 = a2;
  Entry = 0LL;
  v46 = v6;
  if ( !v6 )
    return 3221225598LL;
  a2[5].Parent = 0LL;
  v8 = (KSPIN_LOCK *)(v6 + 3);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 3);
  v11 = (_RTL_SPLAY_LINKS *)v6[4];
  v12 = v9;
  if ( !v11 && !v6[5] )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)v6 + 3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    v13 = -1073741698;
    goto LABEL_6;
  }
  if ( !v11 )
    goto LABEL_26;
  for ( i = v11->LeftChild; i; i = i->LeftChild )
    v11 = i;
  v52 = 0;
  do
  {
    v16 = RtlRealSuccessor(v11);
    v17 = v11 - 1;
    v47 = v16;
    Parent = v11[-1].Parent;
    v19 = 0LL;
    v20 = 0LL;
    v50 = 0LL;
    v21 = 0LL;
    v49 = 0LL;
    v48 = v11 - 1;
    v22 = v11 - 1;
    if ( !Parent )
      goto LABEL_21;
    v23 = a2;
    while ( 1 )
    {
      v10 = v21;
      Entry = Parent;
      if ( Parent[1].LeftChild == v23
        && (struct _KPROCESS *)Parent[1].RightChild == a3
        && (!a5 || HIDWORD(Parent[1].Parent) == a4) )
      {
        break;
      }
      v22 = Parent;
      v48 = Parent;
LABEL_15:
      if ( !v21 )
      {
        if ( Parent[2].Parent > v20 )
          v20 = Parent[2].Parent;
        v49 = v20;
      }
      Parent = v22->Parent;
      if ( !v22->Parent )
        goto LABEL_20;
    }
    v30 = v21 == 0LL;
    v21 = v22;
    if ( !v30 )
      v21 = v10;
    if ( Parent[2].Parent > v19 )
      v19 = Parent[2].Parent;
    v31 = v17[2].Parent;
    v50 = v19;
    if ( v22->Parent == v31 )
      v17[2].Parent = v22;
    v22->Parent = Parent->Parent;
    if ( !v46[2] )
    {
      ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, Parent);
      v22 = v48;
      v17 = v11 - 1;
      v23 = a2;
      goto LABEL_15;
    }
    v52 = 1;
LABEL_20:
    if ( v21 )
    {
      if ( v17->Parent )
      {
        FsRtlSplitLocks(v17, v21, &v50, &v49);
      }
      else
      {
        v8[1] = (KSPIN_LOCK)RtlDelete(v11);
        ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, &v11[-1]);
      }
    }
LABEL_21:
    if ( !v52 )
    {
      v6 = v46;
      goto LABEL_23;
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
    v6 = v46;
    ((void (__fastcall *)(__int64, char *))v46[2])(a6, (char *)Entry + 8);
    v12 = KeAcquireSpinLockRaiseToDpc(v8);
    ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, v34);
    v24 = (_RTL_SPLAY_LINKS *)v8[1];
    v52 = 0;
    if ( v24 )
    {
      LeftChild = v24->LeftChild;
      if ( LeftChild )
      {
        do
        {
          v47 = LeftChild;
          LeftChild = LeftChild->LeftChild;
        }
        while ( LeftChild );
LABEL_23:
        v24 = v47;
      }
    }
    v11 = v24;
  }
  while ( v24 );
  v7 = a2;
LABEL_26:
  v25 = (PRTL_SPLAY_LINKS)v8[2];
  if ( v25 )
  {
    for ( j = v25->LeftChild; j; j = j->LeftChild )
      v25 = j;
    do
    {
      v27 = RtlRealSuccessor(v25);
      if ( v25[2].Parent == v7
        && (struct _KPROCESS *)v25[2].LeftChild == a3
        && (!a5 || HIDWORD(v25[1].RightChild) == a4) )
      {
        v8[2] = (KSPIN_LOCK)RtlDelete(v25);
        if ( v6[2] )
        {
          KxReleaseSpinLock(v8);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
          {
            v36 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v36->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v36);
          }
          __writecr8(v12);
          ((void (__fastcall *)(__int64, _RTL_SPLAY_LINKS *))v6[2])(a6, &v25[1]);
          v37 = KeAcquireSpinLockRaiseToDpc(v8);
          v27 = (PRTL_SPLAY_LINKS)v8[2];
          v12 = v37;
          if ( v27 )
          {
            for ( k = v27->LeftChild; k; k = k->LeftChild )
              v27 = k;
          }
        }
        ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v25);
      }
      v25 = v27;
    }
    while ( v27 );
  }
  v28 = (void *)v8[3];
  v29 = (void **)(v8 + 3);
  if ( v28 )
  {
    do
    {
      v39 = *((_QWORD *)v28 + 3);
      v40 = *(_QWORD *)(v39 + 184);
      if ( a2 != *(_RTL_SPLAY_LINKS **)(v40 + 48)
        || a3 != IoGetRequestorProcess(*((PIRP *)v28 + 3))
        || a5 && a4 != *(_DWORD *)(v40 + 16) )
      {
        goto LABEL_100;
      }
      *(_BYTE *)(v39 + 69) = KeAcquireQueuedSpinLock(7uLL);
      v41 = 0LL;
      _InterlockedExchange64((volatile __int64 *)(v39 + 104), 0LL);
      if ( !*(_BYTE *)(v39 + 68) )
        v41 = (IRP *)v39;
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v39 + 69));
      if ( v41 )
      {
        v41->IoStatus.Information = 0LL;
        *v29 = *(void **)v28;
        if ( v28 == (void *)v8[4] )
          v8[4] = (KSPIN_LOCK)v29;
        KxReleaseSpinLock(v8);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
        {
          v42 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v42->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v42);
        }
        __writecr8(v12);
        v43 = *((_QWORD *)v28 + 2);
        v44 = (void (__fastcall *)(__int64, IRP *))v46[1];
        v41->IoStatus.Status = -1073741698;
        if ( v44 )
          v44(v43, v41);
        else
          IofCompleteRequest(v41, 1);
        v12 = KeAcquireSpinLockRaiseToDpc(v8);
        v29 = (void **)(v8 + 3);
        ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v28);
      }
      else
      {
LABEL_100:
        v29 = (void **)v28;
      }
      v28 = *v29;
    }
    while ( *v29 );
  }
  LOBYTE(v10) = v12;
  FsRtlPrivateCheckWaitingLocks(v46, v8, v10);
  FsRtlPrivateResetLowestLockOffset(v46);
  KxReleaseSpinLock(v8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
  {
    v45 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v45->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v45);
  }
  v13 = 0;
LABEL_6:
  __writecr8(v12);
  return v13;
}
