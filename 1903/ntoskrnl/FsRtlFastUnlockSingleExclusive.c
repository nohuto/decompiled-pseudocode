/*
 * XREFs of FsRtlFastUnlockSingleExclusive @ 0x140103950
 * Callers:
 *     FsRtlFastUnlockSingle @ 0x140103870 (FsRtlFastUnlockSingle.c)
 *     FsRtlPrivateRemoveLock @ 0x140282FE4 (FsRtlPrivateRemoveLock.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     RtlRealSuccessor @ 0x1401032A0 (RtlRealSuccessor.c)
 *     RtlDelete @ 0x140104040 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x1401040DC (FsRtlPrivateResetLowestLockOffset.c)
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x140104158 (FsRtlFindFirstOverlappingExclusiveNode.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140104434 (FsRtlPrivateCheckWaitingLocks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsRtlFastUnlockSingleExclusive(
        __int64 a1,
        _RTL_SPLAY_LINKS *a2,
        _RTL_SPLAY_LINKS **a3,
        _RTL_SPLAY_LINKS **a4,
        _RTL_SPLAY_LINKS *a5,
        int a6,
        __int64 a7,
        char a8,
        char a9)
{
  _RTL_SPLAY_LINKS *v9; // rbx
  KSPIN_LOCK *v10; // r14
  KIRQL v14; // al
  KSPIN_LOCK v15; // rcx
  unsigned int v16; // edi
  KIRQL v17; // r15
  PRTL_SPLAY_LINKS FirstOverlappingExclusiveNode; // rsi
  int v20; // r12d
  bool v21; // cc
  __int64 v22; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v24; // rcx
  struct _KPRCB *v25; // rcx
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF
  _RTL_SPLAY_LINKS *v27; // [rsp+80h] [rbp+18h] BYREF
  _RTL_SPLAY_LINKS **v28; // [rsp+88h] [rbp+20h]

  v28 = a4;
  v9 = *a3;
  v10 = (KSPIN_LOCK *)(a1 + 24);
  v27 = *a3;
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 24));
  v15 = v10[2];
  v16 = 0;
  v17 = v14;
  if ( v15 )
  {
    v26 = (__int64)v9 + (_QWORD)*a4 - 1;
    FirstOverlappingExclusiveNode = (PRTL_SPLAY_LINKS)FsRtlFindFirstOverlappingExclusiveNode(
                                                        v15,
                                                        (unsigned int)&v27,
                                                        (unsigned int)&v26,
                                                        0,
                                                        0LL);
    if ( FirstOverlappingExclusiveNode )
    {
      v20 = a6;
      while ( 1 )
      {
        if ( FirstOverlappingExclusiveNode[2].Parent == a2
          && FirstOverlappingExclusiveNode[2].LeftChild == a5
          && HIDWORD(FirstOverlappingExclusiveNode[1].RightChild) == v20 )
        {
          v21 = FirstOverlappingExclusiveNode[1].Parent <= v9;
          if ( FirstOverlappingExclusiveNode[1].Parent != v9 )
            goto LABEL_24;
          if ( FirstOverlappingExclusiveNode[1].LeftChild == *v28 )
          {
            if ( a2[5].Parent == &FirstOverlappingExclusiveNode[1] )
              a2[5].Parent = 0LL;
            v10[2] = (KSPIN_LOCK)RtlDelete(FirstOverlappingExclusiveNode);
            if ( *(_RTL_SPLAY_LINKS **)a1 == FirstOverlappingExclusiveNode[1].Parent )
              FsRtlPrivateResetLowestLockOffset(a1);
            if ( !a8 && *(_QWORD *)(a1 + 16) )
            {
              KxReleaseSpinLock(v10);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
              __writecr8(v17);
              (*(void (__fastcall **)(__int64, PRTL_SPLAY_LINKS))(a1 + 16))(a7, FirstOverlappingExclusiveNode + 1);
              v17 = KeAcquireSpinLockRaiseToDpc(v10);
            }
            ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, FirstOverlappingExclusiveNode);
            if ( a9 && v10[3] )
            {
              LOBYTE(v22) = v17;
              FsRtlPrivateCheckWaitingLocks(a1, v10, v22);
            }
            KxReleaseSpinLock(v10);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
            {
              v24 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v24);
            }
            goto LABEL_4;
          }
        }
        v21 = FirstOverlappingExclusiveNode[1].Parent <= v9;
LABEL_24:
        if ( v21 )
        {
          FirstOverlappingExclusiveNode = RtlRealSuccessor(FirstOverlappingExclusiveNode);
          if ( FirstOverlappingExclusiveNode )
            continue;
        }
        break;
      }
    }
  }
  KxReleaseSpinLock(v10);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
  {
    v25 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v25);
  }
  v16 = -1073741698;
LABEL_4:
  __writecr8(v17);
  return v16;
}
