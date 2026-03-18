/*
 * XREFs of MiTryUnlinkNodeLargePage @ 0x140131048
 * Callers:
 *     MiDemoteLargeFreePage @ 0x140130F84 (MiDemoteLargeFreePage.c)
 *     MiLargeFreePageToMdl @ 0x14017B93C (MiLargeFreePageToMdl.c)
 *     MiMoveLargeFreePage @ 0x1402E6B2C (MiMoveLargeFreePage.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlinkNodeLargePageHelper @ 0x14009C010 (MiUnlinkNodeLargePageHelper.c)
 *     MiPageToNode @ 0x1400A02E4 (MiPageToNode.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiTryUnlinkNodeLargePage(__int64 a1, ULONG_PTR a2, unsigned int a3, char a4)
{
  __int64 v4; // r15
  __int64 v8; // rbx
  __int64 v9; // r14
  unsigned int v10; // ebp
  __int64 v11; // r12
  unsigned __int8 v12; // r15
  __int64 v13; // r8
  _QWORD *v14; // rbx
  unsigned int v15; // esi
  _QWORD *v16; // rax
  __int64 v17; // rcx
  struct _KPRCB *v19; // rcx
  unsigned __int64 v20; // rax
  __int64 *v21; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  __int64 v24; // [rsp+90h] [rbp+8h]
  __int64 v25; // [rsp+98h] [rbp+10h]

  v4 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = (unsigned int)MiPageToNode(a2, 0);
  v9 = 48 * a2 - 0x58000000000LL;
  v25 = v4;
  v10 = 3;
  v24 = MiLargePageContainingFrames[v4];
  v11 = (*(_QWORD *)(v9 + 40) >> 36) & 3LL;
  v12 = MiLockPageInline(v9);
  v13 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v9 + 40) >> 40) & 0x3FFLL));
  if ( v13 == a1 )
  {
    v14 = (_QWORD *)(*(_QWORD *)(v13 + 16) + 1984 * v8);
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = v14 + 244;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, v14 + 244);
    v15 = *(_BYTE *)(v9 + 34) & 7;
    if ( (*(_QWORD *)(v9 + 40) & 0xFFFFFFFFFLL) == v24 && v15 <= 1 )
    {
      v16 = *(_QWORD **)(v9 + 8);
      if ( (__int64)v16 < 0 )
      {
        v17 = *(_QWORD *)v9;
        if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 || *v16 != v9 )
          goto LABEL_11;
        *v16 = v17;
        *(_QWORD *)(v17 + 8) = v16;
        if ( MiUnlinkNodeLargePageHelper(v14, 48 * a2 - 0x58000000000LL, a3, v11, a4) )
        {
          v10 = *(_BYTE *)(v9 + 34) & 7;
          goto LABEL_9;
        }
        _mm_lfence();
        v20 = v14[34 * v25 + 18 + 4 * v15 + 4 * (unsigned __int64)(a2 < 0x100000 ? 2 : 0) + v11]
            + 24 * (a2 / MiLargePageSizes[v25] % (unsigned int)dword_140465B40[v25]);
        v21 = *(__int64 **)(v20 + 8);
        if ( *v21 != v20 )
LABEL_11:
          __fastfail(3u);
        *(_QWORD *)v9 = v20;
        *(_QWORD *)(v9 + 8) = v21;
        *v21 = v9;
        *(_QWORD *)(v20 + 8) = v9;
      }
      v10 = 5;
    }
LABEL_9:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    goto LABEL_10;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
  {
    v19 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v19);
  }
LABEL_10:
  __writecr8(v12);
  return v10;
}
