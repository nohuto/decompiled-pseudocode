/*
 * XREFs of CcUnmapInactiveViewsInternal @ 0x14026AC9C
 * Callers:
 *     CcUnmapInactiveViews @ 0x14026AB50 (CcUnmapInactiveViews.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     CcReferenceVacbArray @ 0x140021A84 (CcReferenceVacbArray.c)
 *     CcGetVacbLargeOffset @ 0x140022BD4 (CcGetVacbLargeOffset.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     CcSetVacbInFreeList @ 0x140079BC0 (CcSetVacbInFreeList.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400ACEE0 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x14012CFA4 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x14012CFE4 (CcAcquireBcbLockAndVacbLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CcCanReuseVacb @ 0x14026A77C (CcCanReuseVacb.c)
 *     CcDereferenceVacbArray @ 0x14026A81C (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x14026A8C8 (CcGetRandomVacbArrayWithReference.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x14026A968 (CcRecalculateVacbArrayHighwaterMark.c)
 *     SetVacb @ 0x14026B264 (SetVacb.c)
 *     CcUnmapVacb @ 0x1405F384C (CcUnmapVacb.c)
 *     RtlRandom @ 0x1406C9DF0 (RtlRandom.c)
 */

__int64 __fastcall CcUnmapInactiveViewsInternal(__int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  unsigned int v4; // r12d
  _DWORD *RandomVacbArrayWithReference; // rdi
  int v6; // r13d
  __int64 v7; // r15
  unsigned int v8; // r14d
  bool v9; // si
  __int64 v10; // rbx
  unsigned int v11; // ebx
  KIRQL v12; // si
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  ULONG v15; // eax
  bool CanReuseVacb; // al
  bool v17; // dl
  __int64 v18; // r9
  __int64 v19; // rsi
  bool v20; // al
  __int64 v21; // r9
  KIRQL v22; // r14
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 Partition; // rax
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rsi
  unsigned int v30; // r12d
  int v31; // r12d
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r13
  __int64 v35; // rcx
  __int64 v36; // r14
  int v37; // r15d
  unsigned int v38; // ecx
  KIRQL v39; // bl
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v42; // rcx
  __int64 v43; // r14
  int v44; // esi
  __int64 v45; // rbx
  bool v46; // zf
  bool v48; // [rsp+28h] [rbp-49h]
  unsigned int v49; // [rsp+2Ch] [rbp-45h]
  int v50; // [rsp+30h] [rbp-41h]
  unsigned int v51; // [rsp+34h] [rbp-3Dh]
  int v52; // [rsp+38h] [rbp-39h]
  int v53; // [rsp+3Ch] [rbp-35h]
  int v54; // [rsp+40h] [rbp-31h]
  __int64 v55; // [rsp+48h] [rbp-29h]
  unsigned int v56; // [rsp+50h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-19h] BYREF
  volatile signed __int64 *v58[11]; // [rsp+70h] [rbp-1h] BYREF
  unsigned int v60; // [rsp+E0h] [rbp+6Fh]
  int v61; // [rsp+E8h] [rbp+77h]

  v60 = a2;
  v50 = -1;
  v51 = 0;
  v56 = 0;
  v4 = 0;
  v54 = 0;
  RandomVacbArrayWithReference = 0LL;
  v53 = 0;
  v6 = 0;
  v52 = 0;
  v7 = 0LL;
  v55 = 0LL;
  v8 = 0;
  v49 = 0;
  if ( a4 )
  {
    *a4 = 0LL;
    v53 = 1;
  }
  v61 = a3 & 1;
  v9 = !(a3 & 1);
  v48 = v9;
  do
  {
    while ( v4 < a2 && v8 <= CcVacbArraysHighestUsedIndex )
    {
      if ( RandomVacbArrayWithReference )
      {
        LODWORD(v10) = v50;
LABEL_19:
        if ( v9 )
        {
          v13 = 0;
          while ( 1 )
          {
            v14 = v13;
            v15 = RtlRandom(&CcRandomSeed);
            CanReuseVacb = CcCanReuseVacb(
                             (__int64)&RandomVacbArrayWithReference[8 * (v15 % (RandomVacbArrayWithReference[2] + 1))
                                                                  + 4
                                                                  + 2 * (v15 % (RandomVacbArrayWithReference[2] + 1))],
                             0LL);
            v13 = v14 + 1;
            if ( CanReuseVacb )
              v13 = v14;
            v19 = v18 & -(__int64)CanReuseVacb;
            if ( v19 )
              break;
            if ( v13 > 0x10 )
            {
              ++CcDbgRandomFailed;
              v9 = v17;
              v48 = v17;
              goto LABEL_68;
            }
          }
        }
        else
        {
          if ( (_DWORD)v10 == -1 )
          {
            LODWORD(v10) = RandomVacbArrayWithReference[2] + 1;
            v50 = v10;
          }
          if ( !(_DWORD)v10 )
            goto LABEL_68;
          do
          {
            v10 = (unsigned int)(v10 - 1);
            v20 = CcCanReuseVacb((__int64)&RandomVacbArrayWithReference[8 * v10 + 4 + 2 * (unsigned int)v10], v7);
          }
          while ( !v20 && (_DWORD)v10 );
          v50 = v10;
          v19 = v21 & -(__int64)v20;
          if ( !v19 )
          {
            v9 = v48;
LABEL_68:
            CcDereferenceVacbArray((__int64)RandomVacbArrayWithReference, 0);
            RandomVacbArrayWithReference = 0LL;
            goto LABEL_69;
          }
        }
        v22 = KeAcquireQueuedSpinLock(4uLL);
        if ( CcCanReuseVacb(v19, v7) )
        {
          Partition = CcGetPartition(*(_QWORD **)(v19 + 8), v23, v24);
          v58[0] = 0LL;
          v58[1] = (volatile signed __int64 *)(Partition + 128);
          KxAcquireQueuedSpinLock((__int64)v58, (volatile __int64 *)(Partition + 128), v26);
          v27 = *(_QWORD *)(v19 + 8);
          if ( *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v27 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) != v27 )
          {
            KxReleaseQueuedSpinLock(v58);
            goto LABEL_66;
          }
          ++*(_DWORD *)(v27 + 4);
          ++*(_DWORD *)(v27 + 536);
          KxReleaseQueuedSpinLock(v58);
          v28 = *(_QWORD *)(v19 + 16);
          v29 = *(_QWORD *)(v19 + 8);
          v30 = *(_DWORD *)(v29 + 152);
          KeReleaseQueuedSpinLock(4uLL, v22);
          v31 = (v30 >> 9) & 1;
          CcAcquireBcbLockAndVacbLock(v31, (struct _FAST_MUTEX *)v29);
          v34 = CcGetPartition((_QWORD *)v29, v32, v33);
          if ( a1 == v34 && v28 >= 0 )
          {
            v35 = *(_QWORD *)(v29 + 32);
            if ( v28 < v35 )
            {
              v36 = v35 <= 0x2000000
                  ? *(_QWORD *)(*(_QWORD *)(v29 + 88) + 8 * ((unsigned __int64)(unsigned int)v28 >> 18))
                  : CcGetVacbLargeOffset(v29, v28);
              if ( v36 && !*(_WORD *)(v36 + 16) )
              {
                SetVacb(v29, v28, 0LL);
                if ( *(_DWORD *)(v34 + 856) >= (unsigned int)CcMinimumFreeHighPriorityVacbs )
                {
                  v37 = 0;
                  if ( !v53 )
                  {
                    v38 = v52 & 0xFFFFFFFD;
                    v52 &= ~2u;
                    if ( !v55 && v61 )
                      v55 = *(_QWORD *)v36;
                    goto LABEL_45;
                  }
                }
                else
                {
                  v37 = 1;
                }
                v38 = v52 | 2;
                v55 = 0LL;
                v52 |= 2u;
LABEL_45:
                CcUnmapVacb(v36, v29, v38);
                CcReleaseBcbLockAndVacbLock(v31, (struct _FAST_MUTEX *)v29);
                v4 = v51;
                if ( !v37 )
                {
                  v4 = v51 + 1;
                  v56 = 1;
                  ++v51;
                  if ( v53 )
                  {
                    v53 = 0;
                    *a4 = *(_QWORD *)v36;
                    *(_QWORD *)v36 = 0LL;
                  }
                }
                v39 = KeAcquireQueuedSpinLock(4uLL);
                *(_QWORD *)(v36 + 8) = 0LL;
                CcSetVacbInFreeList(v34, (_QWORD *)v36, v37);
                KeReleaseQueuedSpinLock(4uLL, v39);
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v34 + 128), &LockHandle);
                CcDecrementOpenCount(v29);
                KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
                OldIrql = LockHandle.OldIrql;
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
                v7 = v55;
                goto LABEL_64;
              }
            }
          }
          CcReleaseBcbLockAndVacbLock(v31, (struct _FAST_MUTEX *)v29);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v34 + 128), &LockHandle);
          CcDecrementOpenCount(v29);
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
          {
            v42 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v42->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)v42);
          }
          v4 = v51;
LABEL_64:
          v9 = v48;
          __writecr8(OldIrql);
          v8 = v49;
          a2 = v60;
          v6 = v54;
        }
        else
        {
LABEL_66:
          v55 = 0LL;
          v7 = 0LL;
          KeReleaseQueuedSpinLock(4uLL, v22);
          a2 = v60;
          v9 = v48;
          v8 = v49;
        }
      }
      else
      {
        LODWORD(v10) = -1;
        v50 = -1;
        if ( v9 )
        {
          RandomVacbArrayWithReference = CcGetRandomVacbArrayWithReference();
LABEL_15:
          if ( RandomVacbArrayWithReference[1] == 1 )
            goto LABEL_68;
          goto LABEL_19;
        }
        v11 = v8;
        v12 = KeAcquireQueuedSpinLock(4uLL);
        while ( 1 )
        {
          RandomVacbArrayWithReference = CcReferenceVacbArray(v11);
          if ( RandomVacbArrayWithReference )
            break;
          if ( ++v11 >= 0x500 )
          {
            RandomVacbArrayWithReference = 0LL;
            goto LABEL_13;
          }
        }
        CcRecalculateVacbArrayHighwaterMark((__int64)RandomVacbArrayWithReference);
LABEL_13:
        KeReleaseQueuedSpinLock(4uLL, v12);
        v9 = v48;
        v49 = ++v8;
        if ( RandomVacbArrayWithReference )
        {
          LODWORD(v10) = -1;
          goto LABEL_15;
        }
LABEL_69:
        a2 = v60;
      }
    }
    if ( RandomVacbArrayWithReference )
    {
      CcDereferenceVacbArray((__int64)RandomVacbArrayWithReference, 0);
      a2 = v60;
      RandomVacbArrayWithReference = 0LL;
    }
    if ( v6 || v4 >= a2 )
      break;
    v6 = 1;
    v43 = (a2 - v4) << 18;
    v44 = 0;
    v54 = 1;
    ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
    v45 = CcBcbTrimNotificationList;
    if ( (__int64 *)CcBcbTrimNotificationList != &CcBcbTrimNotificationList )
    {
      do
      {
        KeReleaseGuardedMutex(&CcBcbTrimNotificationListLock);
        v44 |= (*(__int64 (__fastcall **)(__int64))(v45 + 16))(v43);
        ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
        v45 = *(_QWORD *)v45;
      }
      while ( (__int64 *)v45 != &CcBcbTrimNotificationList );
      v7 = v55;
    }
    KeReleaseGuardedMutex(&CcBcbTrimNotificationListLock);
    v8 = v49;
    a2 = v60;
    v46 = v44 == 0;
    v9 = v48;
  }
  while ( !v46 );
  _InterlockedIncrement(&CcDbgNumberOfCcUnmapInactiveViews);
  return v56;
}
