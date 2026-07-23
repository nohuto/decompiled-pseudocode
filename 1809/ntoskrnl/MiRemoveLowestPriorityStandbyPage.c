/*
 * XREFs of MiRemoveLowestPriorityStandbyPage @ 0x140152020
 * Callers:
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiPurgePartitionStandby @ 0x140151F1C (MiPurgePartitionStandby.c)
 *     MiPruneStandbyPages @ 0x1402C0C84 (MiPruneStandbyPages.c)
 * Callees:
 *     MiDeleteParentDecayNode @ 0x140029354 (MiDeleteParentDecayNode.c)
 *     MiRemoveDecayClusterTimer @ 0x1400293F0 (MiRemoveDecayClusterTimer.c)
 *     MiIsPfnFromSlabAllocation @ 0x14003120C (MiIsPfnFromSlabAllocation.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     MiSetPfnBlink @ 0x140065CA0 (MiSetPfnBlink.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiRestoreTransitionPte @ 0x140081000 (MiRestoreTransitionPte.c)
 *     MiReturnFreeZeroPage @ 0x14008228C (MiReturnFreeZeroPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiDecreaseAvailablePages @ 0x1400EE8CC (MiDecreaseAvailablePages.c)
 *     MiUpdateTransitionPteFrame @ 0x140118A14 (MiUpdateTransitionPteFrame.c)
 *     MiIsDecayPfn @ 0x140118C7C (MiIsDecayPfn.c)
 *     MiUnlinkNumaStandbyPage @ 0x140152380 (MiUnlinkNumaStandbyPage.c)
 *     MiDiscardTransitionPte @ 0x14015839C (MiDiscardTransitionPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRemoveLowestPriorityStandbyPage(__int64 a1, unsigned int a2, __int64 a3)
{
  _QWORD *v3; // rdi
  ULONG_PTR v4; // r13
  unsigned __int64 v6; // rbp
  volatile __int64 *v7; // rsi
  __int64 v8; // r12
  __int64 CurrentIrql; // rbx
  unsigned __int64 v11; // r14
  __int64 v12; // r11
  __int64 v13; // r11
  int v14; // esi
  __int64 v15; // r9
  int v16; // edi
  __int64 v17; // rax
  char v18; // al
  int v19; // r9d
  unsigned __int8 v20; // bl
  unsigned __int64 v21; // r14
  BOOL IsDecayPfn; // eax
  __int64 v23; // r9
  __int64 v24; // r10
  __int64 v25; // r11
  __int64 updated; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r11
  __int64 v30; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  struct _KPRCB *v36; // rcx
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // rdx
  volatile signed __int32 *v39; // r8
  unsigned int v40; // eax
  unsigned __int64 v41; // rcx
  unsigned __int8 v42; // bl
  struct _KPRCB *v43; // rcx
  struct _KPRCB *v44; // rcx
  volatile signed __int64 *v45; // [rsp+30h] [rbp-68h] BYREF
  volatile __int64 *v46; // [rsp+38h] [rbp-60h]
  int v47; // [rsp+A8h] [rbp+10h] BYREF
  int v48; // [rsp+B0h] [rbp+18h]
  __int64 v49; // [rsp+B8h] [rbp+20h]

  v48 = a3;
  v3 = (_QWORD *)(a1 + 2368);
  v4 = 0LL;
  v6 = a1 + 8 * (a2 + 4 * (a2 + 74LL));
  if ( a1 + 2368 >= v6 )
    return -1LL;
  v7 = (volatile __int64 *)(a1 + 2400);
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
  v49 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v46 = v7;
  v45 = 0LL;
  KxAcquireQueuedSpinLock((__int64)&v45, v7, a3);
  v11 = v3[2];
  if ( v11 == 0xFFFFFFFFFLL )
  {
    KxReleaseQueuedSpinLock(&v45);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    goto LABEL_80;
  }
  CurrentIrql = 48 * v11 - 0x58000000000LL;
  if ( MiIsDecayPfn(v3[2]) )
  {
    v8 = v11;
    v21 = *(_QWORD *)(CurrentIrql + 16);
    v4 = CurrentIrql;
    if ( qword_14043B180 && (v21 & 0x10) == 0 )
      v21 &= ~qword_14043B180;
    v11 = (v21 >> 12) & 0xFFFFFFFFFLL;
    CurrentIrql = v12 + 48 * v11;
    if ( v11 == v8 )
    {
      MiUnlinkPageFromList(v4, 1);
      *(_BYTE *)(v4 + 35) &= ~8u;
      MiRemoveDecayClusterTimer(v4);
      KxReleaseQueuedSpinLock(&v45);
      if ( KiIrqlFlags )
      {
        LOBYTE(CurrentIrql) = v49;
        if ( (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || (unsigned __int8)v49 >= 2u )
          goto LABEL_50;
LABEL_48:
        v32 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v32->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v32);
LABEL_50:
        v8 = 0xFFFFFFFFFLL;
LABEL_79:
        v3 -= 5;
        v7 -= 5;
        v4 = 0LL;
LABEL_80:
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
  KxReleaseQueuedSpinLock(&v45);
  v47 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentIrql + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v47, v33, a3);
    while ( *(__int64 *)(CurrentIrql + 24) < 0 );
  }
  if ( (*(_BYTE *)(CurrentIrql + 34) & 7) != 2
    || *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(CurrentIrql + 40) >> 40) & 0x3FFLL)) != a1 )
  {
    goto LABEL_67;
  }
  v46 = v7;
  v45 = 0LL;
  KxAcquireQueuedSpinLock((__int64)&v45, v7, a3);
  v34 = v3[2];
  if ( !v4 )
  {
    if ( v11 == v34 )
    {
      v8 = 0xFFFFFFFFFLL;
      goto LABEL_11;
    }
    KxReleaseQueuedSpinLock(&v45);
LABEL_67:
    _InterlockedAnd64((volatile signed __int64 *)(CurrentIrql + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(CurrentIrql) = v49;
      if ( (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || (unsigned __int8)v49 >= 2u )
        goto LABEL_50;
      goto LABEL_48;
    }
LABEL_49:
    LOBYTE(CurrentIrql) = v49;
    goto LABEL_50;
  }
  if ( v8 != v34 )
  {
    v8 = 0xFFFFFFFFFLL;
LABEL_64:
    KxReleaseQueuedSpinLock(&v45);
LABEL_74:
    _InterlockedAnd64((volatile signed __int64 *)(CurrentIrql + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(CurrentIrql) = v49;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v49 < 2u )
    {
      v36 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v36->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v36);
    }
    goto LABEL_79;
  }
  v35 = *(_QWORD *)(v4 + 16);
  if ( qword_14043B180 && (v35 & 0x10) == 0 )
    v35 &= ~qword_14043B180;
  v8 = 0xFFFFFFFFFLL;
  if ( v11 != ((v35 >> 12) & 0xFFFFFFFFFLL) )
    goto LABEL_64;
LABEL_11:
  if ( MiIsPfnFromSlabAllocation(CurrentIrql) )
  {
    MiUnlinkPageFromList(CurrentIrql, 1);
    KxReleaseQueuedSpinLock(&v45);
    MiDiscardTransitionPte(CurrentIrql);
    goto LABEL_74;
  }
  if ( !*v3 )
    KeBugCheckEx(0x4Eu, 1uLL, (ULONG_PTR)v3, *(_QWORD *)(a1 + 7296), 0LL);
  --*v3;
  if ( dword_14043B82C == 1 )
  {
    v37 = v11 & 0x1F;
    LOBYTE(v38) = 1;
    v39 = (volatile signed __int32 *)(qword_14043B888 + 4 * (v11 >> 5));
    if ( v37 + 1 > 0x20 )
    {
      if ( (v11 & 0x1F) != 0 )
      {
        _InterlockedOr(v39++, ((1 << (32 - (v11 & 0x1F))) - 1) << v37);
        v38 = 1LL - (32 - (unsigned int)(v11 & 0x1F));
        if ( v38 >= 0x20 )
        {
          v41 = v38 >> 5;
          v38 += -32LL * (v38 >> 5);
          do
          {
            *v39++ = -1;
            --v41;
          }
          while ( v41 );
        }
        if ( !v38 )
          goto LABEL_14;
      }
      v40 = (1 << v38) - 1;
    }
    else
    {
      v40 = 1 << v37;
    }
    _InterlockedOr(v39, v40);
  }
LABEL_14:
  v14 = 0;
  v15 = *(_QWORD *)CurrentIrql & 0xFFFFFFFFFLL;
  if ( (*(_BYTE *)(CurrentIrql + 35) & 8) != 0 )
  {
    IsDecayPfn = MiIsDecayPfn(*(_QWORD *)(CurrentIrql + 24) & 0xFFFFFFFFFLL);
    if ( v23 == v24 && IsDecayPfn )
    {
      MiDeleteParentDecayNode(CurrentIrql);
      v14 = 1;
    }
    else
    {
      updated = MiUpdateTransitionPteFrame(*(_QWORD *)(v25 + 48 * v24 + 16), v23);
      *(_QWORD *)(v27 + 16) = updated;
      MiSetPfnBlink(v29 + 48 * v28, v30, 0);
      v14 = 1;
    }
  }
  else
  {
    v3[2] = v15;
    if ( v15 == 0xFFFFFFFFFLL )
      v3[3] = 0xFFFFFFFFFLL;
    else
      MiSetPfnBlink(v13 + 48 * v15, 0xFFFFFFFFFLL, 0);
  }
  MiUnlinkNumaStandbyPage(CurrentIrql);
  if ( v14 == 1 )
    *(_BYTE *)(CurrentIrql + 35) &= ~8u;
  KxReleaseQueuedSpinLock(&v45);
  v16 = MiDecreaseAvailablePages(a1, 1LL, 0xFFFFFFFFFFFFFFFFuLL, v48);
  *(_QWORD *)(CurrentIrql + 24) &= 0xFFFFFFF000000000uLL;
  MiRestoreTransitionPte(CurrentIrql, 0);
  v17 = 4288LL;
  if ( (*(_QWORD *)(CurrentIrql + 40) & 0x200000000000000LL) == 0 )
    v17 = 4992LL;
  _InterlockedDecrement64((volatile signed __int64 *)(v17 + a1));
  *(_QWORD *)(CurrentIrql + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(CurrentIrql + 34) &= 0xC7u;
  *(_BYTE *)(CurrentIrql + 35) &= ~0x20u;
  v18 = *(_BYTE *)(CurrentIrql + 34) & 0xFD;
  *(_QWORD *)CurrentIrql = 0LL;
  *(_BYTE *)(CurrentIrql + 34) = v18 | 5;
  *(_QWORD *)(CurrentIrql + 16) = ZeroPte;
  MiSetOriginalPtePfnFromFreeList((_QWORD *)(CurrentIrql + 16));
  if ( v19 )
    *(_QWORD *)(CurrentIrql + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(CurrentIrql + 16), 4294967293LL);
  if ( !v16 )
  {
    MiReturnFreeZeroPage(CurrentIrql);
    _InterlockedAnd64((volatile signed __int64 *)(CurrentIrql + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v42 = v49;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v49 < 2u )
    {
      v43 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v43->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v43);
    }
    __writecr8(v42);
    return -1LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(CurrentIrql + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v20 = v49;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v49 < 2u )
  {
    v44 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v44->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v44);
  }
  __writecr8(v20);
  return v11;
}
