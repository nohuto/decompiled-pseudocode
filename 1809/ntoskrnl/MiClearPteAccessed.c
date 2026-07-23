/*
 * XREFs of MiClearPteAccessed @ 0x14006B770
 * Callers:
 *     MiAgePteWorker @ 0x14006B2B0 (MiAgePteWorker.c)
 *     MiCrcStillIntact @ 0x140082C44 (MiCrcStillIntact.c)
 *     MiResetAccessBitPte @ 0x14016E930 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x1402B3970 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MiSetVaAgeList @ 0x14003E2D0 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogPageAccess @ 0x14006BDA0 (MiLogPageAccess.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140098414 (MiUnlockNestedPageTableWritePte.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiCompressTbFlushList @ 0x140113B10 (MiCompressTbFlushList.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiClearPteAccessed(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // r9
  __int64 v8; // r15
  int v11; // r12d
  int v12; // ebp
  int v13; // r14d
  unsigned __int64 v14; // rdi
  char v15; // cl
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // ebp
  unsigned __int64 v21; // r15
  __int64 v22; // r14
  unsigned int v23; // r8d
  __int64 v24; // r10
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rbx
  unsigned __int64 v29; // rdx
  char v30; // bl
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  size_t v36; // rcx
  char v37; // cl
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v42; // r9
  __int64 v43; // rax
  unsigned __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // r9
  unsigned __int64 v48; // rcx
  unsigned __int8 v49; // bl
  struct _KPRCB *v50; // rcx
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  char v53; // rdx^7
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  int v55; // [rsp+80h] [rbp+8h]
  int v57; // [rsp+90h] [rbp+18h] BYREF

  v7 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v55 = 0;
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
      goto LABEL_54;
    if ( v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      LOBYTE(v7) = ((a3 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL;
      v55 = v7;
    }
  }
  if ( a4 && v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v13 = 1;
    MiLockPageTableInternal(a1, a3, 0LL, v7);
    LODWORD(v7) = v55;
  }
  if ( !v12 )
    goto LABEL_6;
  if ( (_DWORD)v7 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
    LODWORD(v7) = v55;
  }
LABEL_54:
  v57 = 0;
  v11 = 1;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v57);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) );
    LODWORD(v7) = v55;
  }
  if ( (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(v8 + 40) & 0x200000000000000LL) == 0
    || (*(_BYTE *)(a1 + 184) & 7) != 0 && *(_WORD *)(v8 + 32) > 1u )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)v7 )
    {
      KxReleaseQueuedSpinLock(&LockHandle);
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
      MiUnlockPageTableInternal(a1, a3);
    return 0LL;
  }
LABEL_6:
  if ( a4 )
  {
    if ( v13 )
    {
      v38 = MI_READ_PTE_LOCK_FREE(a3);
      MiUnlockNestedPageTableWritePte(a1, a3, v38 & 0xCFFFFFFFFFFFFFDFuLL);
      goto LABEL_12;
    }
    v16 = *(_QWORD *)a3;
    v17 = *(_QWORD *)a3;
    if ( a3 >= 0xFFFFF6FB7DBED000uLL
      && a3 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v17 & 1) != 0
      && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
    {
      v42 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v42 )
      {
        v17 |= 0x20uLL;
        v43 = *(_QWORD *)(v42 + 8 * ((a3 >> 3) & 0x1FF));
        if ( (v43 & 0x20) == 0 )
          v17 = *(_QWORD *)a3;
        if ( (v43 & 0x42) != 0 )
          v17 |= 0x42uLL;
      }
    }
    if ( a3 >= 0xFFFFF6FB7DBED000uLL
      && a3 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v16 & 1) != 0
      && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
    {
      v44 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v44 )
      {
        v45 = *(_QWORD *)(v44 + 8 * ((a3 >> 3) & 0x1FF));
        v46 = v16 | 0x20;
        if ( (v45 & 0x20) == 0 )
          v46 = *(_QWORD *)a3;
        v16 = v46;
        if ( (v45 & 0x42) != 0 )
          v16 = v46 | 0x42;
      }
    }
    v18 = v16 & 0xF00000000000000LL | v17 & 0xF0FFFFFFFFFFFFDFuLL;
    v19 = v18 ^ (v18 ^ v16) & 0x7000000000000000LL;
    if ( a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(v18, v19) )
      {
        if ( !HIBYTE(word_14043B26C) && (v19 & 1) != 0 )
          v19 |= 0x8000000000000000uLL;
        *(_QWORD *)a3 = v19;
        MiWritePteShadow(a3);
LABEL_12:
        v20 = 1;
        v21 = v14;
        v22 = 1LL;
        if ( *(_DWORD *)a4 != 1 )
        {
          v37 = *(_BYTE *)(a4 + 4);
          if ( (v37 & 8) == 0 && v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
            *(_BYTE *)(a4 + 4) = v37 | 8;
        }
        v23 = *(_DWORD *)(a4 + 12);
        if ( v23 )
        {
          if ( (*(_BYTE *)(a4 + 4) & 4) == 0 )
          {
            v24 = a4 + 8LL * (v23 - 1);
            v25 = *(_QWORD *)(v24 + 24);
            if ( (v25 & 0xC00) == 0 )
            {
              v26 = *(_QWORD *)(v24 + 24) & 0x3FFLL;
              if ( (v25 & 0xFFFFFFFFFFFFF000uLL) + ((v26 + 1) << 12) == v14 && v26 + 1 >= v26 && v26 + 1 <= 0x3FF )
              {
                ++*(_QWORD *)(a4 + 16);
                *(_QWORD *)(v24 + 24) = ((unsigned __int16)v25 ^ (unsigned __int16)(v25 + 1)) & 0x3FF ^ v25;
LABEL_20:
                v8 = a2;
                goto LABEL_21;
              }
            }
          }
          if ( (*(_BYTE *)(a4 + 4) & 4) == 0 )
          {
            v32 = a4 + 8LL * (v23 - 1);
            v33 = *(_QWORD *)(v32 + 24);
            if ( (v33 & 0xC00) == 0 && (v33 & 0xFFFFFFFFFFFFF000uLL) == v14 + 4096 )
            {
              v48 = *(_QWORD *)(v32 + 24) & 0x3FFLL;
              if ( v48 + 1 >= v48 && v48 + 1 <= 0x3FF )
              {
                ++*(_QWORD *)(a4 + 16);
                *(_QWORD *)(v32 + 24) = ((unsigned __int16)(v33 - 4096) ^ (unsigned __int16)(v33 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v33 - 4096);
                goto LABEL_20;
              }
            }
          }
        }
        if ( v23 < *(_DWORD *)(a4 + 8) )
        {
          while ( 1 )
          {
            v34 = (unsigned __int64)(v22 - 1) > 0x3FF ? 1024LL : v22;
            v35 = v21 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v34 - 1) & 0x3FF;
            v22 -= v34;
            v21 += v34 << 12;
            *(_QWORD *)(a4 + 8LL * (unsigned int)(*(_DWORD *)(a4 + 12))++ + 24) = v35;
            v36 = *(unsigned int *)(a4 + 12);
            *(_QWORD *)(a4 + 16) += v34;
            if ( (_DWORD)v36 == *(_DWORD *)(a4 + 8) && (*(_BYTE *)(a4 + 4) & 4) == 0 )
            {
              qsort((void *)(a4 + 24), v36, 8uLL, MiTbFlushSort);
              MiCompressTbFlushList(a4);
              v39 = *(unsigned int *)(a4 + 12);
              if ( (_DWORD)v39 == *(_DWORD *)(a4 + 8) )
                break;
            }
            if ( !v22 )
              goto LABEL_20;
          }
          v8 = a2;
          if ( v22 )
          {
            *(_BYTE *)(a4 + 5) = 1;
            *(_QWORD *)(a4 + 16) = v39;
          }
          goto LABEL_21;
        }
        *(_BYTE *)(a4 + 5) = 1;
        goto LABEL_20;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v19 & 1) != 0 )
      {
        v19 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a3 = v19;
    goto LABEL_12;
  }
  v20 = a6;
LABEL_21:
  if ( v11 == 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v55 )
    {
      KxReleaseQueuedSpinLock(&LockHandle);
      v49 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v50 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v50->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v50);
      }
      __writecr8(v49);
    }
  }
  if ( v20 )
  {
    if ( v14 < 0xFFFFF68000000000uLL || v14 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v27 = (v14 >> 9) & 0x7FFFFFFFF8LL;
      v28 = *(_QWORD *)(v27 - 0x98000000000LL);
      v29 = v27 - 0x98000000000LL;
      if ( (unsigned __int64)(v27 - 0x98000000000LL) >= 0xFFFFF6FB7DBED000uLL
        && v29 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v28 & 1) != 0
        && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
      {
        v51 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v51 )
        {
          v52 = *(_QWORD *)(v51 + 8 * ((v29 >> 3) & 0x1FF));
          v53 = HIBYTE(*(_QWORD *)(v27 - 0x98000000000LL));
          if ( (v52 & 0x20) == 0 )
            v53 = HIBYTE(*(_QWORD *)(v27 - 0x98000000000LL));
          HIBYTE(v28) = v53;
          if ( (v52 & 0x42) != 0 )
            HIBYTE(v28) = v53;
        }
      }
      v30 = HIBYTE(v28) & 0xF;
    }
    else
    {
      v30 = (*(_BYTE *)(48
                      * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
                      - 0x58000000000LL) >> 1) & 7;
    }
    if ( a5 && v30 != 7 )
      MiLogPageAccess(a1, a3);
    if ( !v30 )
      MiSetVaAgeList(a1, v14, 1u, 1u);
  }
  return 1LL;
}
