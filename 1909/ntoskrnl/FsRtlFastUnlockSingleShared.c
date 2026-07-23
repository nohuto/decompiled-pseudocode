/*
 * XREFs of FsRtlFastUnlockSingleShared @ 0x140107374
 * Callers:
 *     FsRtlFastUnlockSingle @ 0x140107110 (FsRtlFastUnlockSingle.c)
 *     FsRtlPrivateRemoveLock @ 0x140282D44 (FsRtlPrivateRemoveLock.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140084498 (ExFreeToNPagedLookasideList.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     FsRtlFindFirstOverlappingSharedNode @ 0x140107598 (FsRtlFindFirstOverlappingSharedNode.c)
 *     RtlDelete @ 0x1401078E0 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x14010797C (FsRtlPrivateResetLowestLockOffset.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140107CD4 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlSplitLocks @ 0x140107D28 (FsRtlSplitLocks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsRtlFastUnlockSingleShared(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        char a9)
{
  unsigned __int64 v9; // rbx
  KSPIN_LOCK *v10; // rbp
  KIRQL v13; // al
  KSPIN_LOCK v14; // rcx
  unsigned int v15; // edi
  KIRQL v16; // r15
  __int64 FirstOverlappingSharedNode; // rax
  _RTL_SPLAY_LINKS *v18; // r10
  _QWORD *v19; // r14
  unsigned __int64 v20; // rax
  _QWORD *v21; // rsi
  _QWORD *v22; // r12
  bool v23; // cc
  __int64 v24; // r8
  unsigned __int64 v26; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v28; // rcx
  struct _KPRCB *v29; // rcx
  unsigned __int64 v30; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+90h] [rbp+8h] BYREF
  __int64 v32; // [rsp+98h] [rbp+10h]
  __int64 v33; // [rsp+A0h] [rbp+18h] BYREF
  _QWORD *v34; // [rsp+A8h] [rbp+20h]

  v34 = a4;
  v32 = a2;
  v9 = *a3;
  v10 = (KSPIN_LOCK *)(a1 + 24);
  v30 = *a3;
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 24));
  v14 = v10[1];
  v15 = 0;
  v16 = v13;
  if ( v14 )
  {
    v33 = *a4 + v9 - 1;
    FirstOverlappingSharedNode = FsRtlFindFirstOverlappingSharedNode(
                                   v14,
                                   (unsigned int)&v30,
                                   (unsigned int)&v33,
                                   0,
                                   0LL);
    v18 = (_RTL_SPLAY_LINKS *)FirstOverlappingSharedNode;
    if ( FirstOverlappingSharedNode )
    {
      v19 = (_QWORD *)(FirstOverlappingSharedNode - 24);
      v20 = 0LL;
      v21 = (_QWORD *)*v19;
      v22 = v19;
      v31 = 0LL;
      if ( v21 )
      {
        while ( 1 )
        {
          if ( v21[4] == v32 && v21[5] == a5 && *((_DWORD *)v21 + 7) == a6 )
          {
            v23 = v21[1] <= v9;
            if ( v21[1] != v9 )
              goto LABEL_30;
            if ( v21[2] == *v34 )
            {
              if ( *(_QWORD **)(v32 + 120) == v21 + 1 )
                *(_QWORD *)(v32 + 120) = 0LL;
              if ( *v22 == v19[6] )
                v19[6] = v22;
              *v22 = *v21;
              if ( v22 == v19 )
              {
                if ( !*v19 )
                {
                  v10[1] = (KSPIN_LOCK)RtlDelete(v18);
                  ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, v19);
                  v19 = 0LL;
                }
                if ( *(_QWORD *)a1 == v21[1] )
                  FsRtlPrivateResetLowestLockOffset(a1);
              }
              if ( v19 )
                FsRtlSplitLocks(v19, v22, v21 + 6, &v31);
              if ( !a8 && *(_QWORD *)(a1 + 16) )
              {
                KxReleaseSpinLock(v10);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
                __writecr8(v16);
                (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 16))(a7, v21 + 1);
                v16 = KeAcquireSpinLockRaiseToDpc(v10);
              }
              ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, v21);
              if ( a9 && v10[3] )
              {
                LOBYTE(v24) = v16;
                FsRtlPrivateCheckWaitingLocks(a1, v10, v24);
              }
              KxReleaseSpinLock(v10);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
              {
                v28 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(v28);
              }
              goto LABEL_26;
            }
          }
          v23 = v21[1] <= v9;
LABEL_30:
          if ( v23 )
          {
            v26 = v21[6];
            v22 = v21;
            v21 = (_QWORD *)*v21;
            if ( v20 < v26 )
              v20 = v26;
            v31 = v20;
            if ( v21 )
              continue;
          }
          break;
        }
      }
    }
  }
  KxReleaseSpinLock(v10);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
  {
    v29 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v29);
  }
  v15 = -1073741698;
LABEL_26:
  __writecr8(v16);
  return v15;
}
