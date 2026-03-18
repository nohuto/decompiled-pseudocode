/*
 * XREFs of MiUnlinkNodeLargePage @ 0x14002A7D0
 * Callers:
 *     MiGetPagesToZero @ 0x14002A040 (MiGetPagesToZero.c)
 *     MiGetFreeZeroLargePage @ 0x1400972C8 (MiGetFreeZeroLargePage.c)
 *     MiDemoteLocalLargePage @ 0x1400BBBF0 (MiDemoteLocalLargePage.c)
 *     MiGetHugePageToZero @ 0x14018F650 (MiGetHugePageToZero.c)
 *     MiScrubNodeLargePageList @ 0x1402E6B20 (MiScrubNodeLargePageList.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1400464C0 (KxWaitForLockOwnerShip.c)
 *     MiBeginPageAccessor @ 0x140072B10 (MiBeginPageAccessor.c)
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400F8050 (MiUnlinkNodeLargePageHelper.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiUnlinkNodeLargePage(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  char v7; // bl
  __int64 v8; // rdi
  char *v9; // r12
  unsigned __int8 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r11
  unsigned int v15; // ecx
  __int64 v16; // r10
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r14
  unsigned int v21; // eax
  __int64 v22; // rdx
  _QWORD *v23; // r14
  __int64 v24; // r8
  __int64 v25; // rsi
  int v26; // eax
  unsigned __int8 v27; // r10
  struct _KPRCB *v28; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned int *v30; // r12
  __int64 v31; // rsi
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r15
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v36; // rcx
  _DWORD *v37; // rdx
  _QWORD *v38; // rax
  unsigned __int8 v39; // r10
  int v40; // eax
  struct _KPRCB *v41; // rcx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *v43; // rcx
  _QWORD *v44; // rax
  int v45; // eax
  struct _KPRCB *v46; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v48; // [rsp+30h] [rbp-71h]
  int v49; // [rsp+38h] [rbp-69h]
  int v50; // [rsp+3Ch] [rbp-65h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-61h] BYREF
  __int64 v52; // [rsp+58h] [rbp-49h]
  __int64 v53; // [rsp+60h] [rbp-41h]
  unsigned int v54; // [rsp+68h] [rbp-39h]
  int v55; // [rsp+6Ch] [rbp-35h]
  int v56; // [rsp+70h] [rbp-31h]
  __int64 v57; // [rsp+78h] [rbp-29h]
  unsigned __int8 *v58; // [rsp+80h] [rbp-21h]
  unsigned int *v59; // [rsp+88h] [rbp-19h]
  __int64 v60; // [rsp+90h] [rbp-11h]
  void *retaddr; // [rsp+E8h] [rbp+47h]
  unsigned int v62; // [rsp+F0h] [rbp+4Fh]
  int v63; // [rsp+F8h] [rbp+57h]
  char v64; // [rsp+100h] [rbp+5Fh] BYREF
  char v65; // [rsp+101h] [rbp+60h] BYREF
  unsigned int v66; // [rsp+108h] [rbp+67h]

  v66 = a4;
  v63 = a2;
  v7 = a6;
  v52 = (unsigned int)a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  a2 = (unsigned int)a2;
  v49 = 0;
  v62 = dword_140465840[(unsigned int)a2];
  v8 = *(_QWORD *)(a1 + 16) + 1984LL * a3;
  if ( !*(_QWORD *)(v8 + 1808) && (_DWORD)InitializationPhase )
    return 0LL;
  if ( (a6 & 4) != 0 )
    v53 = 0x100000000LL;
  else
    v53 = 1LL;
  v48 = 17;
  v59 = (unsigned int *)(a5 + 4LL * (unsigned int)a2);
  do
  {
LABEL_5:
    v55 = *(unsigned __int8 *)(v8 + 1936);
    if ( (_DWORD)a4 == 4 )
    {
      v9 = (char *)(v8 + 1942);
      v10 = (unsigned __int8 *)(v8 + 1942 + (unsigned int)MmNumberOfChannels);
    }
    else
    {
      v64 = a4;
      v9 = &v64;
      v10 = (unsigned __int8 *)&v65;
    }
    v58 = v10;
LABEL_8:
    v11 = (unsigned __int8)*v9;
    v12 = 0LL;
    v56 = (unsigned __int8)*v9;
    v57 = v11;
    v60 = 8 * v11;
    v13 = (unsigned int)v11;
    v14 = 144LL;
LABEL_9:
    v15 = 0;
    v16 = v8 + 272 * a2;
    while ( 1 )
    {
      v17 = *((int *)&v53 + v15);
      v18 = v13 + 4 * (v17 + 2 * v12);
      v19 = *(_QWORD *)(v16 + 8 * v18 + 144);
      if ( *(_QWORD *)(v16 + 8 * v18 + 16) )
        break;
LABEL_11:
      if ( ++v15 >= (unsigned int)((v7 & 2) != 0) + 1 )
      {
        a2 = v52;
        ++v12;
        v14 += 64LL;
        if ( v12 <= ((v7 & 1) == 0) )
          goto LABEL_9;
        if ( ++v9 != (char *)v58 )
          goto LABEL_8;
        if ( !v55 )
        {
          if ( v49 )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v48 < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
            __writecr8(v48);
          }
          return 0LL;
        }
        LODWORD(a4) = v66;
        if ( !v49 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v48 = CurrentIrql;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 1952);
          LockHandle.LockQueue.Next = 0LL;
          KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v8 + 1952));
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
          {
            v43 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v43->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v43);
          }
          __writecr8(CurrentIrql);
          a2 = v52;
          LODWORD(a4) = v66;
        }
        goto LABEL_5;
      }
    }
    v21 = *v59;
    v54 = *v59;
    if ( v62 == 16 )
      v22 = v21 & 0xF;
    else
      v22 = v21 % v62;
    v50 = v22;
    v23 = (_QWORD *)(v19 + 24 * v22);
    v24 = 0LL;
    if ( !v62 )
    {
LABEL_27:
      v13 = v57;
      goto LABEL_11;
    }
    v25 = v14 + v60 + 32 * v17;
    while ( (_QWORD *)*v23 == v23 )
    {
      v26 = v22 + 1;
      if ( (_DWORD)v22 + 1 == v62 )
        v23 = *(_QWORD **)(v25 + v16);
      else
        v23 += 3;
      LODWORD(v22) = 0;
      v24 = (unsigned int)(v24 + 1);
      if ( v26 != v62 )
        LODWORD(v22) = v26;
      v50 = v22;
      if ( (unsigned int)v24 >= v62 )
        goto LABEL_27;
    }
    if ( !v49 )
    {
      v49 = 1;
      v27 = KeGetCurrentIrql();
      v48 = v27;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v27 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 1952);
      v28 = KeGetCurrentPrcb();
      SchedulerAssist = v28->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v28->NestingLevel <= 1u )
        {
          v40 = SchedulerAssist[5];
          SchedulerAssist[5] = v40 + 1;
          if ( v40 == -1 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v8 + 1952);
      }
      else if ( _InterlockedExchange64((volatile __int64 *)(v8 + 1952), (__int64)&LockHandle) )
      {
        KxWaitForLockOwnerShip(&LockHandle);
      }
    }
    v30 = v59;
    a2 = v52;
    a4 = v66;
  }
  while ( v54 != *v59 || (_QWORD *)*v23 == v23 );
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v23[1] + 24LL), 0x3FuLL) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v39 = v48;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v48 < 2u )
    {
      v41 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v41->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v41);
      v39 = v48;
    }
    __writecr8(v39);
    a2 = v52;
    LODWORD(a4) = v66;
    v49 = 0;
    goto LABEL_5;
  }
  v31 = v23[1];
  v32 = *(_QWORD **)(v31 + 8);
  if ( *(_QWORD **)v31 != v23 || *v32 != v31 )
    goto LABEL_96;
  v33 = a7;
  v34 = v23[1];
  v23[1] = v32;
  *v32 = v23;
  if ( !v33 )
  {
    v34 = MiUnlinkNodeLargePageHelper(v8, v31, v63, v56, v7);
    if ( v34 )
      goto LABEL_41;
    v44 = (_QWORD *)v23[1];
    if ( (_QWORD *)*v44 == v23 )
    {
      *(_QWORD *)v31 = v23;
      *(_QWORD *)(v31 + 8) = v44;
      *v44 = v31;
      v23[1] = v31;
      goto LABEL_42;
    }
LABEL_96:
    __fastfail(3u);
  }
  v38 = (_QWORD *)*v23;
  if ( *(_QWORD **)(*v23 + 8LL) != v23 )
    goto LABEL_96;
  *(_QWORD *)v31 = v38;
  *(_QWORD *)(v31 + 8) = v23;
  v38[1] = v31;
  *v23 = v31;
  if ( (unsigned int)MiBeginPageAccessor(v33, v31, v24, a4) )
LABEL_41:
    *v30 = v50 + 1;
  else
    v34 = 0LL;
LABEL_42:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    goto LABEL_45;
  }
  _m_prefetchw(&LockHandle);
  Next = LockHandle.LockQueue.Next;
  if ( LockHandle.LockQueue.Next )
  {
LABEL_58:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
    goto LABEL_45;
  }
  if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                       0LL,
                                       (signed __int64)&LockHandle) != &LockHandle )
  {
    Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    goto LABEL_58;
  }
LABEL_45:
  v36 = KeGetCurrentPrcb();
  v37 = v36->SchedulerAssist;
  if ( v37 )
  {
    if ( v36->NestingLevel <= 1u )
    {
      v45 = v37[5] - 1;
      v37[5] = v45;
      if ( !v45 )
        KiRemoveSystemWorkPriorityKick(v36);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v48 < 2u )
  {
    v46 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v46->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v46);
  }
  __writecr8(v48);
  return v34;
}
