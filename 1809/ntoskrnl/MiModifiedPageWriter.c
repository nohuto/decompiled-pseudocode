/*
 * XREFs of MiModifiedPageWriter @ 0x140188880
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCFC0 (KeSetActualBasePriorityThread.c)
 *     KeQueryPriorityThread @ 0x1400E17E0 (KeQueryPriorityThread.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400EEE4C (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1400EEFC8 (MiUseLowIoPriorityForModifiedPages.c)
 *     IoBoostThreadIoPriority @ 0x1401086DC (IoBoostThreadIoPriority.c)
 *     MiGatherPagefilePages @ 0x14014F0E0 (MiGatherPagefilePages.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x1401760F8 (MiStoreCheckCompleteWriteBatch.c)
 *     MiInitializePagefileBitmapsCache @ 0x140188364 (MiInitializePagefileBitmapsCache.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeModifiedReservations @ 0x1402B8358 (MiFreeModifiedReservations.c)
 */

LONG __fastcall MiModifiedPageWriter(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // r15
  struct _KEVENT *v6; // r13
  struct _KEVENT *v7; // rsi
  struct _KEVENT *v8; // r14
  NTSTATUS v9; // eax
  __int64 *v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  signed __int32 v14; // r11d
  int v15; // eax
  __int64 v16; // r8
  unsigned int v17; // r14d
  int v18; // ecx
  __int64 v19; // rsi
  _QWORD *v20; // rax
  unsigned int v21; // eax
  __int64 v22; // r8
  unsigned int v23; // r11d
  unsigned int v24; // r10d
  __int64 v25; // rdx
  char v26; // al
  unsigned int v27; // r9d
  __int64 v28; // r8
  __int64 **v29; // rcx
  __int64 **v30; // rax
  unsigned int v31; // ecx
  unsigned int v32; // eax
  unsigned __int64 v33; // r13
  __int64 *v34; // r15
  __int64 v35; // r12
  __int64 v36; // rsi
  char v37; // al
  unsigned __int8 OldIrql; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v40; // r8
  unsigned int v41; // eax
  struct _KTHREAD *v42; // rsi
  unsigned __int64 v43; // r13
  __int64 v44; // r12
  __int64 v45; // r14
  _QWORD *v46; // r15
  signed __int32 v48[8]; // [rsp+8h] [rbp-100h] BYREF
  struct _KTHREAD *v49; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v50; // [rsp+50h] [rbp-B8h]
  __int64 v51; // [rsp+58h] [rbp-B0h]
  __int64 v52; // [rsp+60h] [rbp-A8h]
  PVOID Object[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-90h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+98h] [rbp-70h] BYREF
  PVOID v56[6]; // [rsp+F8h] [rbp-10h] BYREF
  struct _KWAIT_BLOCK v57; // [rsp+128h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 928) = CurrentThread;
  v49 = CurrentThread;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  LODWORD(v51) = KeSetActualBasePriorityThread((__int64)CurrentThread, 18LL, a3);
  v5 = a1 + 104;
  Object[0] = (PVOID)(a1 + 104);
  Object[1] = (PVOID)(a1 + 720);
  v6 = (struct _KEVENT *)(a1 + 864);
  v56[0] = (PVOID)(a1 + 104);
  v56[2] = (PVOID)(a1 + 904);
  v7 = (struct _KEVENT *)(a1 + 680);
  v56[1] = (PVOID)(a1 + 864);
  v8 = (struct _KEVENT *)(a1 + 992);
  *(_BYTE *)(a1 + 658) = 1;
  v56[3] = (PVOID)(a1 + 680);
  v56[4] = (PVOID)(a1 + 992);
LABEL_2:
  *(_QWORD *)(a1 + 824) = 0LL;
  *(_DWORD *)(a1 + 832) = 0;
  *(_BYTE *)(a1 + 658) = 0;
  MiStoreCheckCompleteWriteBatch(a1);
  v9 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrPageOut, 0, 0, 0LL, &WaitBlockArray);
  *(_BYTE *)(a1 + 658) = 1;
  if ( v9 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(v5 + 4) )
        goto LABEL_76;
      if ( !*(_QWORD *)(a1 + 7792) )
        goto LABEL_2;
      --CurrentThread->SpecialApcDisable;
      MiStoreCheckCompleteWriteBatch(a1);
      v10 = (__int64 *)(a1 + 888);
      if ( (__int64 *)*v10 == v10 )
      {
        *(_BYTE *)(a1 + 657) = 1;
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        if ( !KeWaitForMultipleObjects(5u, v56, WaitAny, WrPageOut, 0, 0, 0LL, &v57) )
          goto LABEL_76;
        --CurrentThread->SpecialApcDisable;
        *(_BYTE *)(a1 + 657) = 0;
      }
      if ( v7->Header.SignalState )
      {
        KeResetEvent(v7);
        if ( *(_DWORD *)(a1 + 676) )
          IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
      }
      if ( v6->Header.SignalState )
      {
        KeResetEvent(v6);
        _InterlockedOr(v48, 0);
        v23 = *(_DWORD *)(a1 + 7128);
        v24 = 0;
        if ( v23 )
        {
          v25 = a1 + 7136;
          do
          {
            v26 = *(_BYTE *)(*(_QWORD *)v25 + 206LL);
            if ( (v26 & 1) != 0 )
            {
              v27 = 0;
              *(_BYTE *)(*(_QWORD *)v25 + 206LL) = v26 & 0xFE;
              v28 = 64LL;
              do
              {
                v29 = *(__int64 ***)(v28 + *(_QWORD *)v25);
                if ( v29 && *v29 == (__int64 *)2575857425LL )
                {
                  v30 = *(__int64 ***)(a1 + 896);
                  if ( *v30 != v10 )
                    goto LABEL_75;
                  *v29 = v10;
                  v29[1] = (__int64 *)v30;
                  *v30 = (__int64 *)v29;
                  *(_QWORD *)(a1 + 896) = v29;
                }
                ++v27;
                v28 += 8LL;
              }
              while ( v27 < 2 );
            }
            ++v24;
            v25 += 8LL;
          }
          while ( v24 < v23 );
        }
      }
      if ( v8->Header.SignalState )
      {
        KeResetEvent(v8);
        MiStoreUpdateMemoryConditions(a1);
      }
      v11 = 0LL;
      v12 = *(_QWORD *)(a1 + 2688);
      v13 = *(_QWORD *)(a1 + 7792);
      if ( *(__int64 *)(a1 + 7360) >= 0 )
        v11 = *(_QWORD *)(a1 + 7360);
      if ( (v50 = *(_QWORD *)(a1 + 2688), *(_QWORD *)(a1 + 816) >= 0x800uLL)
        || v13 <= *(_QWORD *)(a1 + 7120) >> 2 && v13 <= v11 >> 2
        || (v31 = *(_DWORD *)(a1 + 832), v31 < 0x40)
        || *(_DWORD *)(a1 + 824) / v31 >= (unsigned int)dword_14054118C >> 3 )
      {
        v14 = 1;
      }
      else
      {
        v32 = *(_DWORD *)(a1 + 7128);
        v14 = 1;
        v33 = 3 * (v13 >> 2);
        if ( v32 )
        {
          v34 = (__int64 *)(a1 + 7136);
          v35 = v32;
          do
          {
            v36 = *v34;
            if ( (*(_WORD *)(*v34 + 204) & 0x60) == 0 )
            {
              if ( v12 > v33 )
              {
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v36 + 232), &LockHandle);
                v37 = *(_BYTE *)(v36 + 207);
                if ( (v37 & 1) == 0 )
                {
                  *(_BYTE *)(v36 + 207) = v37 | 1;
                  MiInitializePagefileBitmapsCache(v36);
                  *(_DWORD *)(v36 + 124) = dword_14054118C;
                }
                KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
                OldIrql = LockHandle.OldIrql;
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
                __writecr8(OldIrql);
              }
              MiFreeModifiedReservations(v36, 0LL);
              v12 = v50;
              v14 = 1;
            }
            ++v34;
            --v35;
          }
          while ( v35 );
          CurrentThread = v49;
          v10 = (__int64 *)(a1 + 888);
          v7 = (struct _KEVENT *)(a1 + 680);
          v8 = (struct _KEVENT *)(a1 + 992);
        }
        ++*(_DWORD *)(a1 + 840);
        if ( v12 > v33 )
        {
          *(_QWORD *)(a1 + 848) = KiQueryUnbiasedInterruptTime();
          _InterlockedOr(v48, 0);
          *(_WORD *)(a1 + 860) |= v14;
          *(_DWORD *)(a1 + 836) += v14;
        }
        *(_DWORD *)(a1 + 832) = 0;
        v6 = (struct _KEVENT *)(a1 + 864);
        *(_QWORD *)(a1 + 824) = 0LL;
      }
      if ( (__int64 *)*v10 == v10 )
        break;
      v15 = *(_DWORD *)(a1 + 1136);
      if ( ((unsigned __int8)v15 & (unsigned __int8)v14) != 0
        && (v15 & 0xFFFFFFFE) == 0
        && v14 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1136), 0, v14) )
      {
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        KeResetEvent((PRKEVENT)(a1 + 720));
LABEL_74:
        v5 = a1 + 104;
        goto LABEL_2;
      }
      if ( MiUseLowIoPriorityForModifiedPages(a1) )
      {
        if ( *(_QWORD *)(a1 + 7792) < *(_QWORD *)(a1 + 712) )
        {
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          goto LABEL_74;
        }
        *(_DWORD *)(a1 + 704) = 4;
        v17 = KeSetActualBasePriorityThread((__int64)CurrentThread, 4LL, v16);
        v18 = 0;
      }
      else
      {
        if ( *(_DWORD *)(a1 + 676) )
          IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
        v17 = -1;
        v18 = 8;
      }
      v19 = *v10;
      v20 = *(_QWORD **)*v10;
      if ( *(__int64 **)(*v10 + 8) != v10 || v20[1] != v19 )
LABEL_75:
        __fastfail(3u);
      *v10 = (__int64)v20;
      v20[1] = v10;
      v21 = *(_DWORD *)(v19 + 40) & 0xFFFFFFE3;
      *(_QWORD *)v19 = 97LL;
      *(_DWORD *)(v19 + 40) = v18 | v21;
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      *(_QWORD *)(v19 + 200) = v19 + 208;
      MiGatherPagefilePages(v19);
      v7 = (struct _KEVENT *)(a1 + 680);
      v5 = a1 + 104;
      if ( v17 == -1 )
      {
        v8 = (struct _KEVENT *)(a1 + 992);
      }
      else
      {
        if ( KeQueryPriorityThread(CurrentThread) != 18 )
          KeSetActualBasePriorityThread((__int64)CurrentThread, v17, v22);
        *(_DWORD *)(a1 + 704) = 18;
        v7 = (struct _KEVENT *)(a1 + 680);
        v8 = (struct _KEVENT *)(a1 + 992);
LABEL_27:
        v5 = a1 + 104;
      }
    }
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    goto LABEL_27;
  }
LABEL_76:
  if ( *(_DWORD *)(a1 + 676) )
    IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 936));
  v41 = *(_DWORD *)(a1 + 7128);
  if ( v41 )
  {
    v42 = (struct _KTHREAD *)(a1 + 7136);
    v50 = *(unsigned int *)(a1 + 7128);
    v43 = v41;
    v49 = (struct _KTHREAD *)(a1 + 7136);
    do
    {
      if ( *(_QWORD *)&v42->Header.Lock )
      {
        --CurrentThread->SpecialApcDisable;
        v44 = 2LL;
        v52 = 2LL;
        v45 = 64LL;
        do
        {
          v46 = *(_QWORD **)(v45 + *(_QWORD *)&v42->Header.Lock);
          if ( v46 )
          {
            while ( *v46 == 97LL )
            {
              *(_BYTE *)(a1 + 657) = 1;
              KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
              KeWaitForSingleObject((PVOID)(a1 + 904), WrPageOut, 0, 0, 0LL);
              --CurrentThread->SpecialApcDisable;
            }
            v42 = v49;
            v44 = v52;
          }
          v45 += 8LL;
          v52 = --v44;
        }
        while ( v44 );
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        v43 = v50;
      }
      v42 = (struct _KTHREAD *)((char *)v42 + 8);
      --v43;
      v49 = v42;
      v50 = v43;
    }
    while ( v43 );
  }
  KeSetActualBasePriorityThread((__int64)CurrentThread, (unsigned int)v51, v40);
  return KeSetEvent((PRKEVENT)(a1 + 744), 0, 0);
}
