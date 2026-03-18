/*
 * XREFs of MiSetVaAgeList @ 0x1400A55E0
 * Callers:
 *     MiUnlockWsle @ 0x14001FE74 (MiUnlockWsle.c)
 *     MiAgePteWorker @ 0x14004D010 (MiAgePteWorker.c)
 *     MiClearPteAccessed @ 0x14004D4C0 (MiClearPteAccessed.c)
 *     MiTrimWorkingSetBuildup @ 0x140089DE8 (MiTrimWorkingSetBuildup.c)
 *     MiActOnPte @ 0x1400BE5C0 (MiActOnPte.c)
 *     NtLockVirtualMemory @ 0x1400CB120 (NtLockVirtualMemory.c)
 *     MiUpdateWsleAge @ 0x14012B4C8 (MiUpdateWsleAge.c)
 *     MiResetAccessBitPte @ 0x1401783E0 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x1402C8940 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1400464C0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCountWslesInPageTable @ 0x1400F2590 (MiCountWslesInPageTable.c)
 *     MiVolunteerForTrimFirst @ 0x14012DCC8 (MiVolunteerForTrimFirst.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiSetVaAgeList(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  char v7; // di
  unsigned __int64 v8; // r14
  char v9; // al
  int v10; // r12d
  unsigned __int64 *v11; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rcx
  _BYTE *v16; // rbx
  unsigned __int8 v17; // r9
  BOOL v18; // r10d
  unsigned __int64 v19; // r8
  __int64 v20; // rcx
  __int64 *v21; // rdx
  __int64 v22; // r8
  unsigned __int8 v23; // al
  unsigned __int8 v24; // r9
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  unsigned __int64 v27; // r8
  __int64 v28; // rcx
  unsigned __int64 *v29; // rdx
  unsigned __int64 v30; // r8
  unsigned __int8 v31; // al
  __int64 Next; // rax
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  unsigned __int64 v35; // r8
  __int64 v36; // rcx
  unsigned __int64 *v37; // rbx
  char v39; // cl
  int v40; // r8d
  unsigned __int64 v41; // rax
  __int64 v42; // r9
  int v43; // eax
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v45; // rax
  __int64 v46; // r8
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r8
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // r8
  int v53; // eax
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r8
  unsigned int v57; // [rsp+24h] [rbp-94h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-90h] BYREF
  __int64 v59; // [rsp+40h] [rbp-78h] BYREF
  __int64 v60; // [rsp+48h] [rbp-70h] BYREF
  __int64 v61; // [rsp+50h] [rbp-68h] BYREF
  _DWORD v62[8]; // [rsp+58h] [rbp-60h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]

  v57 = a3;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v7 = 0;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v9 = *(_BYTE *)(a1 + 184);
    v10 = 1;
  }
  else
  {
    v9 = *(_BYTE *)(a1 + 184);
    v10 = 0;
  }
  if ( (v9 & 7) == 2 )
    v11 = (unsigned __int64 *)&unk_140466F40;
  else
    v11 = (unsigned __int64 *)(a1 + 256);
  LockHandle.LockQueue.Lock = v11;
  LockHandle.LockQueue.Next = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v43 = SchedulerAssist[5];
      SchedulerAssist[5] = v43 + 1;
      if ( v43 == -1 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        a3 = v57;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v11);
    goto LABEL_78;
  }
  v14 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v11, (__int64)&LockHandle);
  if ( v14 )
  {
    KxWaitForLockOwnerShip((__int64)&LockHandle, v14);
LABEL_78:
    a3 = v57;
  }
  if ( a4 == 8 && *(_QWORD *)(a1 + 112) < *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 6LL + (unsigned __int64)a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    return 0LL;
  }
  if ( a3 )
  {
    do
    {
      if ( v10 )
      {
        v15 = *(_QWORD *)v8;
        v16 = 0LL;
        if ( v8 >= 0xFFFFF6FB7DBED000uLL
          && v8 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v15 & 1) != 0
          && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
        {
          DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( DeepFreezeStartTime )
          {
            v45 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v8 >> 3) & 0x1FF));
            v46 = v15 | 0x20;
            if ( (v45 & 0x20) == 0 )
              v46 = *(_QWORD *)v8;
            v15 = v46;
            if ( (v45 & 0x42) != 0 )
              v15 = v46 | 0x42;
          }
        }
        v7 = HIBYTE(v15) & 0xF | (16 * ((v15 >> 60) & 7));
        v17 = HIBYTE(v15) & 0xF;
        v18 = (HIBYTE(v15) & 0xF) == 8;
      }
      else
      {
        v41 = MI_READ_PTE_LOCK_FREE(v8);
        v16 = (_BYTE *)(v42 + 48 * ((v41 >> 12) & 0xFFFFFFFFFLL));
        v17 = (*v16 >> 1) & 7;
      }
      if ( v17 == 8 )
        --*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      if ( !v18 )
      {
        if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v19 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          v20 = *(_QWORD *)v19;
          if ( v19 >= 0xFFFFF6FB7DBED000uLL
            && v19 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v20 & 1) != 0
            && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
          {
            v47 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
            if ( v47 )
            {
              v48 = *(_QWORD *)(v47 + 8 * ((v19 >> 3) & 0x1FF));
              v49 = v20 | 0x20;
              if ( (v48 & 0x20) == 0 )
                v49 = v20;
              v20 = v49;
              if ( (v48 & 0x42) != 0 )
                v20 = v49 | 0x42;
            }
          }
          v59 = v20;
          v21 = (__int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v59) >> 12) & 0xFFFFFFFFFLL)
                          - 0x58000000000LL);
          v22 = *v21;
          v23 = ((unsigned __int64)*v21 >> 14) & 7;
          if ( (((unsigned __int64)*v21 >> 4) & 0x3FF) != 0 )
          {
            if ( v17 == v23 )
            {
              *v21 = v22 ^ ((unsigned __int16)v22 ^ (unsigned __int16)(16 * ((((unsigned __int64)*v21 >> 4) & 0x3FF) - 1))) & 0x3FF0;
            }
            else if ( v17 > v23 )
            {
              *v21 = v22 ^ ((unsigned int)v22 ^ (v17 << 14)) & 0x1C000 | 0x3FF0;
            }
          }
        }
        --*(_QWORD *)(a1 + 8LL * v17 + 40);
        if ( v17 == 7 )
          MiVolunteerForTrimFirst(a1, -1LL);
      }
      v24 = a4;
      if ( (unsigned __int8)(a4 - 1) <= 5u
        && (MI_READ_PTE_LOCK_FREE(v8) & 0x20) != 0
        && (a2 > 0x7FFFFFFEFFFFLL || (*(_BYTE *)(a1 + 184) & 7) != 0 || !*(_QWORD *)(a1 + 624)) )
      {
        v24 = 0;
      }
      if ( v16 )
      {
        *(_QWORD *)v16 ^= ((unsigned __int8)*(_QWORD *)v16 ^ (unsigned __int8)(2 * v24)) & 0xE;
      }
      else
      {
        v7 ^= (v7 ^ v24) & 0xF;
        v25 = *(_QWORD *)v8;
        do
        {
          v26 = v25;
          v25 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)v8,
                  ((unsigned __int64)(v7 & 0x7F) << 56) | v25 & 0x80FFFFFFFFFFFFFFuLL,
                  v25);
        }
        while ( v26 != v25 );
      }
      if ( v24 >= 8u )
      {
        if ( v24 == 8 )
          ++*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      }
      else if ( v10 || (*(_BYTE *)(a1 + 184) & 7) == 0 )
      {
        if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v27 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          v28 = *(_QWORD *)v27;
          if ( v27 >= 0xFFFFF6FB7DBED000uLL
            && v27 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v28 & 1) != 0
            && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
          {
            v50 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
            if ( v50 )
            {
              v51 = *(_QWORD *)(v50 + 8 * ((v27 >> 3) & 0x1FF));
              v52 = v28 | 0x20;
              if ( (v51 & 0x20) == 0 )
                v52 = v28;
              v28 = v52;
              if ( (v51 & 0x42) != 0 )
                v28 = v52 | 0x42;
            }
          }
          v60 = v28;
          v29 = (unsigned __int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v60) >> 12) & 0xFFFFFFFFFLL)
                                   - 0x58000000000LL);
          v30 = *v29;
          v31 = (*v29 >> 14) & 7;
          if ( ((*v29 >> 4) & 0x3FF) != 0 )
          {
            if ( v24 == v31 )
            {
              *v29 = v30 ^ ((unsigned __int16)v30 ^ (unsigned __int16)(16 * (((*v29 >> 4) & 0x3FF) + 1))) & 0x3FF0;
            }
            else if ( v24 > v31 )
            {
              *v29 = v30 & 0xFFFFFFFFFFFE001FuLL | ((unsigned __int64)(v24 & 7) << 14) | 0x10;
            }
          }
        }
        ++*(_QWORD *)(a1 + 8LL * v24 + 40);
        if ( v24 == 7 )
          MiVolunteerForTrimFirst(a1, 1LL);
      }
      --v57;
    }
    while ( v57 );
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
  }
  else
  {
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_43;
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
  }
LABEL_43:
  v33 = KeGetCurrentPrcb();
  v34 = v33->SchedulerAssist;
  if ( v34 )
  {
    if ( v33->NestingLevel <= 1u )
    {
      v53 = v34[5] - 1;
      v34[5] = v53;
      if ( !v53 )
        KiRemoveSystemWorkPriorityKick(v33);
    }
  }
  if ( v10 )
  {
    v35 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v36 = *(_QWORD *)v35;
    if ( v35 >= 0xFFFFF6FB7DBED000uLL
      && v35 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v36 & 1) != 0
      && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
    {
      v54 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v54 )
      {
        v55 = *(_QWORD *)(v54 + 8 * ((v35 >> 3) & 0x1FF));
        v56 = v36 | 0x20;
        if ( (v55 & 0x20) == 0 )
          v56 = v36;
        v36 = v56;
        if ( (v55 & 0x42) != 0 )
          v36 = v56 | 0x42;
      }
    }
    v61 = v36;
    v37 = (unsigned __int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v61) >> 12) & 0xFFFFFFFFFLL)
                             - 0x58000000000LL);
    if ( ((*(_DWORD *)v37 >> 4) & 0x3FF) == 0 )
    {
      MiCountWslesInPageTable(0xFFFFFFFFFLL, a2, v62);
      v39 = 8;
      while ( 1 )
      {
        v40 = v62[(unsigned __int8)--v39];
        if ( v40 )
          break;
        if ( !v39 )
          return 1LL;
      }
      *v37 = *v37 & 0xFFFFFFFFFFFE000FuLL | (16 * (v40 & 0x3FF | ((unsigned __int64)(v39 & 7) << 10)));
    }
  }
  return 1LL;
}
