/*
 * XREFs of CcUnmapInactiveViewsInternal @ 0x14027E5B4
 * Callers:
 *     CcUnmapInactiveViews @ 0x14027E468 (CcUnmapInactiveViews.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x140076FA8 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x140077028 (CcAcquireBcbLockAndVacbLock.c)
 *     CcReferenceVacbArray @ 0x14007711C (CcReferenceVacbArray.c)
 *     CcDecrementOpenCount @ 0x14007A2AC (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14007A340 (CcGetPartition.c)
 *     SetVacb @ 0x14007A558 (SetVacb.c)
 *     CcSetVacbInFreeList @ 0x14007A65C (CcSetVacbInFreeList.c)
 *     CcGetVacbLargeOffset @ 0x14007D0F0 (CcGetVacbLargeOffset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     CcCanReuseVacb @ 0x14027E00C (CcCanReuseVacb.c)
 *     CcDereferenceVacbArray @ 0x14027E0AC (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x14027E154 (CcGetRandomVacbArrayWithReference.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x14027E1F4 (CcRecalculateVacbArrayHighwaterMark.c)
 *     CcReferenceSharedCacheMapByVacb @ 0x14027E2D0 (CcReferenceSharedCacheMapByVacb.c)
 *     CcUnmapVacb @ 0x140607830 (CcUnmapVacb.c)
 *     RtlRandom @ 0x1406E9410 (RtlRandom.c)
 */

__int64 __fastcall CcUnmapInactiveViewsInternal(__int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  unsigned int v4; // ecx
  _DWORD *RandomVacbArrayWithReference; // rdi
  int v6; // r12d
  __int64 v7; // r15
  unsigned int v8; // r14d
  bool v9; // si
  __int64 v10; // rbx
  unsigned int v11; // ebx
  KIRQL v12; // si
  _DWORD *v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  ULONG v16; // eax
  bool CanReuseVacb; // al
  __int64 v18; // r9
  __int64 v19; // rsi
  bool v20; // al
  __int64 v21; // r9
  KIRQL v22; // r14
  __int64 v23; // rbx
  __int64 v24; // rsi
  unsigned int v25; // r15d
  int v26; // r15d
  __int64 Partition; // r13
  __int64 v28; // rcx
  __int64 VacbLargeOffset; // r14
  int v30; // r12d
  unsigned int v31; // ecx
  KIRQL v32; // al
  KIRQL v33; // bl
  unsigned __int8 v34; // bl
  struct _KPRCB *v35; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v38; // r14d
  int v39; // esi
  __int64 v40; // rbx
  bool v41; // zf
  bool v43; // [rsp+20h] [rbp-48h]
  unsigned int v44; // [rsp+24h] [rbp-44h]
  unsigned int v45; // [rsp+28h] [rbp-40h]
  int v46; // [rsp+2Ch] [rbp-3Ch]
  int v47; // [rsp+30h] [rbp-38h]
  int v48; // [rsp+34h] [rbp-34h]
  __int64 v49; // [rsp+38h] [rbp-30h]
  int v50; // [rsp+40h] [rbp-28h]
  unsigned int v51; // [rsp+44h] [rbp-24h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-20h] BYREF
  unsigned int v54; // [rsp+B8h] [rbp+50h]
  int v55; // [rsp+C0h] [rbp+58h]

  v54 = a2;
  v46 = -1;
  v51 = 0;
  v50 = 0;
  v48 = 0;
  v4 = 0;
  v44 = 0;
  RandomVacbArrayWithReference = 0LL;
  v47 = 0;
  v6 = 0;
  v49 = 0LL;
  v7 = 0LL;
  v45 = 0;
  v8 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a4 )
  {
    *a4 = 0LL;
    v48 = 1;
  }
  v55 = a3 & 1;
  v9 = !(a3 & 1);
  v43 = v9;
  do
  {
    while ( v4 < a2 && v8 <= CcVacbArraysHighestUsedIndex )
    {
      if ( RandomVacbArrayWithReference )
      {
        LODWORD(v10) = v46;
        goto LABEL_19;
      }
      LODWORD(v10) = -1;
      v46 = -1;
      if ( v9 )
      {
        RandomVacbArrayWithReference = CcGetRandomVacbArrayWithReference();
LABEL_15:
        if ( RandomVacbArrayWithReference[1] == 1 )
          goto LABEL_16;
LABEL_19:
        if ( v9 )
        {
          v14 = 0;
          while ( 1 )
          {
            v15 = v14;
            v16 = RtlRandom(&CcRandomSeed);
            CanReuseVacb = CcCanReuseVacb(
                             (__int64)&RandomVacbArrayWithReference[8 * (v16 % (RandomVacbArrayWithReference[2] + 1))
                                                                  + 4
                                                                  + 2 * (v16 % (RandomVacbArrayWithReference[2] + 1))],
                             0LL);
            v14 = v15 + 1;
            if ( CanReuseVacb )
              v14 = v15;
            v19 = v18 & -(__int64)CanReuseVacb;
            if ( v19 )
              break;
            if ( v14 > 0x10 )
            {
              ++CcDbgRandomFailed;
              v9 = 0;
              v43 = 0;
              goto LABEL_16;
            }
          }
        }
        else
        {
          if ( (_DWORD)v10 == -1 )
          {
            LODWORD(v10) = RandomVacbArrayWithReference[2] + 1;
            v46 = v10;
          }
          if ( !(_DWORD)v10 )
            goto LABEL_16;
          do
          {
            v10 = (unsigned int)(v10 - 1);
            v20 = CcCanReuseVacb((__int64)&RandomVacbArrayWithReference[8 * v10 + 4 + 2 * (unsigned int)v10], v7);
          }
          while ( !v20 && (_DWORD)v10 );
          v46 = v10;
          v19 = v21 & -(__int64)v20;
          if ( !v19 )
          {
            v9 = v43;
LABEL_16:
            CcDereferenceVacbArray((__int64)RandomVacbArrayWithReference, 0);
            RandomVacbArrayWithReference = 0LL;
            goto LABEL_66;
          }
        }
        v22 = KeAcquireQueuedSpinLock(4uLL);
        if ( !CcCanReuseVacb(v19, v7) || !CcReferenceSharedCacheMapByVacb(v19) )
        {
          v49 = 0LL;
          v7 = 0LL;
          KeReleaseQueuedSpinLock(4uLL, v22);
LABEL_65:
          v9 = v43;
          v8 = v45;
          goto LABEL_66;
        }
        v23 = *(_QWORD *)(v19 + 16);
        v24 = *(_QWORD *)(v19 + 8);
        v25 = *(_DWORD *)(v24 + 152);
        KeReleaseQueuedSpinLock(4uLL, v22);
        v26 = (v25 >> 9) & 1;
        CcAcquireBcbLockAndVacbLock(v26, (struct _FAST_MUTEX *)v24);
        Partition = CcGetPartition((_QWORD *)v24);
        if ( a1 != Partition
          || v23 < 0
          || (v28 = *(_QWORD *)(v24 + 32), v23 >= v28)
          || (v28 <= 0x2000000
            ? (VacbLargeOffset = *(_QWORD *)(*(_QWORD *)(v24 + 88) + 8 * ((unsigned __int64)(unsigned int)v23 >> 18)))
            : (VacbLargeOffset = CcGetVacbLargeOffset(v24, v23)),
              !VacbLargeOffset || *(_WORD *)(VacbLargeOffset + 16)) )
        {
          CcReleaseBcbLockAndVacbLock(v26, (struct _FAST_MUTEX *)v24);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
          CcDecrementOpenCount(v24);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          __writecr8(OldIrql);
          v7 = v49;
          goto LABEL_65;
        }
        SetVacb(v24, v23, 0LL, 0LL);
        if ( *(_DWORD *)(Partition + 856) < (unsigned int)CcMinimumFreeHighPriorityVacbs )
        {
          v30 = 1;
LABEL_44:
          v31 = v47 | 2;
          v49 = 0LL;
          v47 |= 2u;
          goto LABEL_45;
        }
        v30 = 0;
        if ( v48 )
          goto LABEL_44;
        v31 = v47 & 0xFFFFFFFD;
        v47 &= ~2u;
        if ( !v49 && v55 )
          v49 = *(_QWORD *)VacbLargeOffset;
LABEL_45:
        CcUnmapVacb(VacbLargeOffset, v24, v31);
        CcReleaseBcbLockAndVacbLock(v26, (struct _FAST_MUTEX *)v24);
        if ( !v30 )
        {
          ++v44;
          v51 = 1;
          if ( v48 )
          {
            v48 = 0;
            *a4 = *(_QWORD *)VacbLargeOffset;
            *(_QWORD *)VacbLargeOffset = 0LL;
          }
        }
        v32 = KeAcquireQueuedSpinLock(4uLL);
        *(_QWORD *)(VacbLargeOffset + 8) = 0LL;
        v33 = v32;
        CcSetVacbInFreeList(Partition, (_QWORD *)VacbLargeOffset, v30);
        KeReleaseQueuedSpinLock(4uLL, v33);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
        CcDecrementOpenCount(v24);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v34 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v35 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v35->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v35);
        }
        __writecr8(v34);
        v7 = v49;
        v9 = v43;
        v4 = v44;
        v8 = v45;
        a2 = v54;
        v6 = v50;
      }
      else
      {
        v11 = v8;
        v12 = KeAcquireQueuedSpinLock(4uLL);
        while ( 1 )
        {
          v13 = CcReferenceVacbArray(v11);
          RandomVacbArrayWithReference = v13;
          if ( v13 )
            break;
          if ( ++v11 >= 0x500 )
          {
            RandomVacbArrayWithReference = 0LL;
            goto LABEL_13;
          }
        }
        CcRecalculateVacbArrayHighwaterMark((__int64)v13);
LABEL_13:
        KeReleaseQueuedSpinLock(4uLL, v12);
        v9 = v43;
        v45 = ++v8;
        if ( RandomVacbArrayWithReference )
        {
          LODWORD(v10) = -1;
          goto LABEL_15;
        }
LABEL_66:
        v4 = v44;
        a2 = v54;
      }
    }
    if ( RandomVacbArrayWithReference )
    {
      CcDereferenceVacbArray((__int64)RandomVacbArrayWithReference, 0);
      v4 = v44;
      RandomVacbArrayWithReference = 0LL;
      a2 = v54;
    }
    if ( v6 || v4 >= a2 )
      break;
    v6 = 1;
    v50 = 1;
    v38 = (a2 - v4) << 18;
    v39 = 0;
    ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
    v40 = CcBcbTrimNotificationList;
    if ( (__int64 *)CcBcbTrimNotificationList != &CcBcbTrimNotificationList )
    {
      do
      {
        KeReleaseGuardedMutex(&CcBcbTrimNotificationListLock);
        v39 |= (*(__int64 (__fastcall **)(_QWORD))(v40 + 16))(v38);
        ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
        v40 = *(_QWORD *)v40;
      }
      while ( (__int64 *)v40 != &CcBcbTrimNotificationList );
      v7 = v49;
    }
    KeReleaseGuardedMutex(&CcBcbTrimNotificationListLock);
    v4 = v44;
    v41 = v39 == 0;
    v9 = v43;
    v8 = v45;
    a2 = v54;
  }
  while ( !v41 );
  _InterlockedIncrement(&CcDbgNumberOfCcUnmapInactiveViews);
  return v51;
}
