/*
 * XREFs of MiClearPteAccessed @ 0x14004D420
 * Callers:
 *     MiAgePteWorker @ 0x14004CF70 (MiAgePteWorker.c)
 *     MiCrcStillIntact @ 0x14013E6D0 (MiCrcStillIntact.c)
 *     MiResetAccessBitPte @ 0x140177CF0 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x1402C8BE0 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLogPageAccess @ 0x14004DA40 (MiLogPageAccess.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14005E2E0 (MiUnlockNestedPageTableWritePte.c)
 *     MiSetVaAgeList @ 0x1400C5760 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiCompressTbFlushList @ 0x140114FE0 (MiCompressTbFlushList.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     qsort @ 0x1401A0AD0 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiClearPteAccessed(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned __int64 v7; // r9
  __int64 v8; // r12
  int v11; // r13d
  int v12; // ebp
  int v13; // r14d
  unsigned __int64 v14; // rdi
  char v15; // cl
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebp
  unsigned __int64 v19; // r12
  __int64 v20; // r14
  unsigned int v21; // r8d
  __int64 v22; // r10
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  unsigned __int64 v26; // rdx
  char v27; // bl
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  size_t v32; // rcx
  char v33; // cl
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r9
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v39; // rcx
  unsigned __int8 v40; // bl
  struct _KPRCB *v41; // rcx
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v43; // rax
  char v44; // rdx^7
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v46; // [rsp+80h] [rbp+8h]
  int v48; // [rsp+90h] [rbp+18h] BYREF

  v7 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v46 = 0;
  v8 = a2;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = (__int64)(a3 << 25) >> 16;
  v15 = *(_BYTE *)(a1 + 184) & 7;
  if ( v15 && v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  if ( v15 )
  {
    if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) == 0
      || *(_WORD *)(a2 + 32) > 1u )
    {
      return 0LL;
    }
    v12 = 1;
    if ( !a4 )
      goto LABEL_50;
    if ( v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      LOBYTE(v7) = ((a3 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL;
      v46 = v7;
    }
  }
  if ( a4 && v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v13 = 1;
    MiLockPageTableInternal(a1, a3, 0LL, v7);
    v7 = v46;
  }
  if ( !v12 )
    goto LABEL_6;
  if ( (_DWORD)v7 )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v7 = v46;
  }
LABEL_50:
  v48 = 0;
  v11 = 1;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v48);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) );
    v7 = v46;
  }
  if ( (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(v8 + 40) & 0x200000000000000LL) == 0
    || (*(_BYTE *)(a1 + 184) & 7) != 0 && *(_WORD *)(v8 + 32) > 1u )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)v7 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
    }
    if ( v13 )
      MiUnlockPageTableInternal(a1);
    return 0LL;
  }
LABEL_6:
  if ( a4 )
  {
    if ( v13 )
    {
      v35 = MI_READ_PTE_LOCK_FREE(a3);
      MiUnlockNestedPageTableWritePte(a1, a3, v35 & 0xCFFFFFFFFFFFFFDFuLL, v36, LockHandle.LockQueue.Next);
      goto LABEL_10;
    }
    if ( MiPteInShadowRange(a3) )
    {
      if ( (unsigned int)MiPteHasShadow(v17) )
      {
        if ( !HIBYTE(word_140465BEC) && (v16 & 1) != 0 )
          v16 |= 0x8000000000000000uLL;
        *(_QWORD *)a3 = v16;
        MiWritePteShadow(a3, v16);
LABEL_10:
        v18 = 1;
        v19 = v14;
        v20 = 1LL;
        if ( *(_DWORD *)a4 != 1 )
        {
          v33 = *(_BYTE *)(a4 + 4);
          if ( (v33 & 8) == 0 && v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
            *(_BYTE *)(a4 + 4) = v33 | 8;
        }
        v21 = *(_DWORD *)(a4 + 12);
        if ( v21 )
        {
          if ( (*(_BYTE *)(a4 + 4) & 4) == 0 )
          {
            v22 = a4 + 8LL * (v21 - 1);
            v23 = *(_QWORD *)(v22 + 24);
            if ( (v23 & 0xC00) == 0 )
            {
              v7 = *(_QWORD *)(v22 + 24) & 0x3FFLL;
              if ( (v23 & 0xFFFFFFFFFFFFF000uLL) + ((v7 + 1) << 12) == v14 && v7 + 1 >= v7 && v7 + 1 <= 0x3FF )
              {
                ++*(_QWORD *)(a4 + 16);
                *(_QWORD *)(v22 + 24) = ((unsigned __int16)v23 ^ (unsigned __int16)(v23 + 1)) & 0x3FF ^ v23;
LABEL_18:
                v8 = a2;
                goto LABEL_19;
              }
            }
          }
          if ( (*(_BYTE *)(a4 + 4) & 4) == 0 )
          {
            v7 = a4 + 8LL * (v21 - 1);
            v29 = *(_QWORD *)(v7 + 24);
            if ( (v29 & 0xC00) == 0 && (v29 & 0xFFFFFFFFFFFFF000uLL) == v14 + 4096 )
            {
              v39 = *(_QWORD *)(v7 + 24) & 0x3FFLL;
              if ( v39 + 1 >= v39 && v39 + 1 <= 0x3FF )
              {
                ++*(_QWORD *)(a4 + 16);
                *(_QWORD *)(v7 + 24) = ((unsigned __int16)(v29 - 4096) ^ (unsigned __int16)(v29 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v29 - 4096);
                goto LABEL_18;
              }
            }
          }
        }
        if ( v21 < *(_DWORD *)(a4 + 8) )
        {
          while ( 1 )
          {
            v30 = (unsigned __int64)(v20 - 1) > 0x3FF ? 1024LL : v20;
            v31 = v19 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v30 - 1) & 0x3FF;
            v20 -= v30;
            v19 += v30 << 12;
            *(_QWORD *)(a4 + 8LL * (unsigned int)(*(_DWORD *)(a4 + 12))++ + 24) = v31;
            v32 = *(unsigned int *)(a4 + 12);
            *(_QWORD *)(a4 + 16) += v30;
            if ( (_DWORD)v32 == *(_DWORD *)(a4 + 8) && (*(_BYTE *)(a4 + 4) & 4) == 0 )
            {
              qsort((void *)(a4 + 24), v32, 8uLL, MiTbFlushSort);
              MiCompressTbFlushList(a4);
              v34 = *(unsigned int *)(a4 + 12);
              if ( (_DWORD)v34 == *(_DWORD *)(a4 + 8) )
                break;
            }
            if ( !v20 )
              goto LABEL_18;
          }
          v8 = a2;
          if ( v20 )
          {
            *(_BYTE *)(a4 + 5) = 1;
            *(_QWORD *)(a4 + 16) = v34;
          }
          goto LABEL_19;
        }
        *(_BYTE *)(a4 + 5) = 1;
        goto LABEL_18;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v16 & 1) != 0 )
      {
        v16 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a3 = v16;
    goto LABEL_10;
  }
  v18 = a6;
LABEL_19:
  if ( v11 == 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v46 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v40 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v41 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v41->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v41);
      }
      __writecr8(v40);
    }
  }
  if ( v18 )
  {
    if ( v14 < 0xFFFFF68000000000uLL || v14 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v24 = (v14 >> 9) & 0x7FFFFFFFF8LL;
      v25 = *(_QWORD *)(v24 - 0x98000000000LL);
      v26 = v24 - 0x98000000000LL;
      if ( (unsigned __int64)(v24 - 0x98000000000LL) >= 0xFFFFF6FB7DBED000uLL
        && v26 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v25 & 1) != 0
        && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
      {
        DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          v43 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v26 >> 3) & 0x1FF));
          v44 = HIBYTE(*(_QWORD *)(v24 - 0x98000000000LL));
          if ( (v43 & 0x20) == 0 )
            v44 = HIBYTE(*(_QWORD *)(v24 - 0x98000000000LL));
          HIBYTE(v25) = v44;
          if ( (v43 & 0x42) != 0 )
            HIBYTE(v25) = v44;
        }
      }
      v27 = HIBYTE(v25) & 0xF;
    }
    else
    {
      v27 = (*(_BYTE *)(48
                      * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
                      - 0x58000000000LL) >> 1) & 7;
    }
    if ( a5 && v27 != 7 )
      MiLogPageAccess(a1, a3);
    if ( !v27 )
    {
      LOBYTE(v7) = 1;
      MiSetVaAgeList(a1, v14, 1LL, v7);
    }
  }
  return 1LL;
}
