/*
 * XREFs of MiRemoveLowestPriorityStandbyPage @ 0x140161710
 * Callers:
 *     MiGetPage @ 0x1400CFE40 (MiGetPage.c)
 *     MiPurgePartitionStandby @ 0x14016160C (MiPurgePartitionStandby.c)
 *     MiPruneStandbyPages @ 0x1402DA3F8 (MiPruneStandbyPages.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUpdateTransitionPteFrame @ 0x14009D504 (MiUpdateTransitionPteFrame.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400A1750 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiReturnFreeZeroPage @ 0x1400A1788 (MiReturnFreeZeroPage.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400D9CC0 (MiIsPfnFromSlabAllocation.c)
 *     MiDecreaseAvailablePages @ 0x1400DB4B8 (MiDecreaseAvailablePages.c)
 *     MiSetPfnBlink @ 0x1400DB5A0 (MiSetPfnBlink.c)
 *     MiRestoreTransitionPte @ 0x1400DB6B0 (MiRestoreTransitionPte.c)
 *     MiUpdatePageFileHighInPte @ 0x1400DBC30 (MiUpdatePageFileHighInPte.c)
 *     MiDeleteParentDecayNode @ 0x14011A568 (MiDeleteParentDecayNode.c)
 *     MiRemoveDecayClusterTimer @ 0x14011A5FC (MiRemoveDecayClusterTimer.c)
 *     MiIsDecayPfn @ 0x140122744 (MiIsDecayPfn.c)
 *     MiUnlinkNumaStandbyPage @ 0x140161A84 (MiUnlinkNumaStandbyPage.c)
 *     MiDiscardTransitionPteEx @ 0x14016872C (MiDiscardTransitionPteEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRemoveLowestPriorityStandbyPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  _QWORD *v3; // rbx
  ULONG_PTR v4; // r13
  unsigned __int64 v6; // r14
  unsigned __int64 *v7; // rbp
  __int64 v8; // r12
  __int64 CurrentIrql; // rsi
  unsigned __int64 v11; // rdi
  __int64 v12; // r11
  unsigned __int64 v13; // rdx
  volatile signed __int32 *v14; // r8
  __int64 v15; // r11
  int v16; // ebp
  __int64 v17; // r9
  int v18; // ebx
  __int64 v19; // rax
  char v20; // al
  int v21; // r9d
  unsigned __int8 v22; // si
  unsigned __int64 v23; // rdi
  BOOL IsDecayPfn; // eax
  __int64 v25; // r9
  __int64 v26; // r10
  __int64 v27; // r11
  __int64 updated; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r11
  __int64 v32; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  int v37; // edi
  struct _KPRCB *v38; // rcx
  unsigned __int64 v39; // r9
  unsigned int v40; // eax
  unsigned __int64 v41; // rcx
  unsigned __int8 v42; // si
  struct _KPRCB *v43; // rcx
  struct _KPRCB *v44; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  int v46; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v47; // [rsp+B0h] [rbp+18h]
  __int64 v48; // [rsp+B8h] [rbp+20h]

  v47 = a3;
  v3 = (_QWORD *)(a1 + 2368);
  v4 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = a1 + 8 * (a2 + 4 * (a2 + 74LL));
  if ( a1 + 2368 >= v6 )
    return -1LL;
  v7 = (unsigned __int64 *)(a1 + 2400);
  v8 = 0xFFFFFFFFFLL;
  while ( v3[2] == 0xFFFFFFFFFLL )
  {
LABEL_4:
    v3 += 5;
    v7 += 5;
    if ( (unsigned __int64)v3 >= v6 )
      return -1LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  v48 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  LockHandle.LockQueue.Lock = v7;
  LockHandle.LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v7);
  v11 = v3[2];
  if ( v11 == 0xFFFFFFFFFLL )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    goto LABEL_82;
  }
  CurrentIrql = 48 * v11 - 0x58000000000LL;
  if ( MiIsDecayPfn(v3[2]) )
  {
    v8 = v11;
    v23 = *(_QWORD *)(CurrentIrql + 16);
    v4 = CurrentIrql;
    if ( qword_140465B00 && (v23 & 0x10) == 0 )
      v23 &= ~qword_140465B00;
    v11 = (v23 >> 12) & 0xFFFFFFFFFLL;
    CurrentIrql = v12 + 48 * v11;
    if ( v11 == v8 )
    {
      MiUnlinkPageFromList(v4, 1);
      *(_BYTE *)(v4 + 35) &= ~8u;
      MiRemoveDecayClusterTimer(v4);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
      {
        LOBYTE(CurrentIrql) = v48;
        if ( (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || (unsigned __int8)v48 >= 2u )
          goto LABEL_50;
LABEL_48:
        v34 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v34->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v34);
LABEL_50:
        v8 = 0xFFFFFFFFFLL;
LABEL_81:
        v3 -= 5;
        v7 -= 5;
        v4 = 0LL;
LABEL_82:
        __writecr8((unsigned __int8)CurrentIrql);
        goto LABEL_4;
      }
      goto LABEL_49;
    }
  }
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(CurrentIrql + 24), 0x3FuLL) )
  {
    v8 = 0xFFFFFFFFFLL;
    goto LABEL_11;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v46 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentIrql + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v46);
    while ( *(__int64 *)(CurrentIrql + 24) < 0 );
  }
  if ( (*(_BYTE *)(CurrentIrql + 34) & 7) != 2
    || *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(CurrentIrql + 40) >> 40) & 0x3FFLL)) != a1 )
  {
    goto LABEL_67;
  }
  LockHandle.LockQueue.Lock = v7;
  LockHandle.LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v7);
  v35 = v3[2];
  if ( !v4 )
  {
    if ( v11 == v35 )
    {
      v8 = 0xFFFFFFFFFLL;
      goto LABEL_11;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_67:
    _InterlockedAnd64((volatile signed __int64 *)(CurrentIrql + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(CurrentIrql) = v48;
      if ( (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || (unsigned __int8)v48 >= 2u )
        goto LABEL_50;
      goto LABEL_48;
    }
LABEL_49:
    LOBYTE(CurrentIrql) = v48;
    goto LABEL_50;
  }
  if ( v8 != v35 )
  {
    v8 = 0xFFFFFFFFFLL;
LABEL_64:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_76;
  }
  v36 = *(_QWORD *)(v4 + 16);
  if ( qword_140465B00 && (v36 & 0x10) == 0 )
    v36 &= ~qword_140465B00;
  v8 = 0xFFFFFFFFFLL;
  if ( v11 != ((v36 >> 12) & 0xFFFFFFFFFLL) )
    goto LABEL_64;
LABEL_11:
  if ( MiIsPfnFromSlabAllocation(CurrentIrql) )
  {
    v37 = MiUnlinkPageFromList(CurrentIrql, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( v37 )
    {
      *(_BYTE *)(CurrentIrql + 35) &= 0xF8u;
      MiInsertPageInList(CurrentIrql, 0x800u);
    }
    else
    {
      MiDiscardTransitionPteEx(CurrentIrql, 0LL);
    }
LABEL_76:
    _InterlockedAnd64((volatile signed __int64 *)(CurrentIrql + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(CurrentIrql) = v48;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v48 < 2u )
    {
      v38 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v38->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v38);
    }
    goto LABEL_81;
  }
  if ( !*v3 )
    KeBugCheckEx(0x4Eu, 1uLL, (ULONG_PTR)v3, *(_QWORD *)(a1 + 8064), 0LL);
  --*v3;
  if ( dword_14046620C == 1 )
  {
    v39 = v11 & 0x1F;
    v13 = 1LL;
    v14 = (volatile signed __int32 *)(qword_140466268 + 4 * (v11 >> 5));
    if ( v39 + 1 > 0x20 )
    {
      if ( (v11 & 0x1F) != 0 )
      {
        _InterlockedOr(v14++, ((1 << (32 - (v11 & 0x1F))) - 1) << v39);
        v13 = 1LL - (32 - (unsigned int)(v11 & 0x1F));
        if ( v13 >= 0x20 )
        {
          v41 = v13 >> 5;
          v13 += -32LL * (v13 >> 5);
          do
          {
            *v14++ = -1;
            --v41;
          }
          while ( v41 );
        }
        if ( !v13 )
          goto LABEL_14;
      }
      v40 = (1 << v13) - 1;
    }
    else
    {
      v40 = 1 << v39;
    }
    _InterlockedOr(v14, v40);
  }
LABEL_14:
  v16 = 0;
  v17 = *(_QWORD *)CurrentIrql & 0xFFFFFFFFFLL;
  if ( (*(_BYTE *)(CurrentIrql + 35) & 8) != 0 )
  {
    IsDecayPfn = MiIsDecayPfn(*(_QWORD *)(CurrentIrql + 24) & 0xFFFFFFFFFLL);
    if ( v25 == v26 && IsDecayPfn )
    {
      MiDeleteParentDecayNode(CurrentIrql);
      v16 = 1;
    }
    else
    {
      updated = MiUpdateTransitionPteFrame(*(_QWORD *)(v27 + 48 * v26 + 16), v25);
      *(_QWORD *)(v29 + 16) = updated;
      MiSetPfnBlink(v31 + 48 * v30, v32, 0);
      v16 = 1;
    }
  }
  else
  {
    v3[2] = v17;
    if ( v17 == 0xFFFFFFFFFLL )
      v3[3] = 0xFFFFFFFFFLL;
    else
      MiSetPfnBlink(v15 + 48 * v17, 0xFFFFFFFFFLL, 0);
  }
  MiUnlinkNumaStandbyPage(CurrentIrql, v13, v14, v17);
  if ( v16 == 1 )
    *(_BYTE *)(CurrentIrql + 35) &= ~8u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v18 = MiDecreaseAvailablePages(a1, 1LL, 0xFFFFFFFFFFFFFFFFuLL, v47);
  *(_QWORD *)(CurrentIrql + 24) &= 0xFFFFFFF000000000uLL;
  MiRestoreTransitionPte(CurrentIrql, 0);
  v19 = 4288LL;
  if ( (*(_QWORD *)(CurrentIrql + 40) & 0x200000000000000LL) == 0 )
    v19 = 4992LL;
  _InterlockedDecrement64((volatile signed __int64 *)(v19 + a1));
  *(_QWORD *)(CurrentIrql + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(CurrentIrql + 34) &= 0xC7u;
  *(_BYTE *)(CurrentIrql + 35) &= ~0x20u;
  v20 = *(_BYTE *)(CurrentIrql + 34) & 0xFD;
  *(_QWORD *)CurrentIrql = 0LL;
  *(_BYTE *)(CurrentIrql + 34) = v20 | 5;
  *(_QWORD *)(CurrentIrql + 16) = ZeroPte;
  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(CurrentIrql + 16));
  if ( v21 )
    *(_QWORD *)(CurrentIrql + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(CurrentIrql + 16), 4294967293LL);
  if ( !v18 )
  {
    MiReturnFreeZeroPage(CurrentIrql);
    _InterlockedAnd64((volatile signed __int64 *)(CurrentIrql + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v42 = v48;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v48 < 2u )
    {
      v43 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v43->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v43);
    }
    __writecr8(v42);
    return -1LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(CurrentIrql + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v22 = v48;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v48 < 2u )
  {
    v44 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v44->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v44);
  }
  __writecr8(v22);
  return v11;
}
