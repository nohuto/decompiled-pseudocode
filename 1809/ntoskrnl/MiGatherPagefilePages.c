/*
 * XREFs of MiGatherPagefilePages @ 0x14014F0E0
 * Callers:
 *     MiModifiedPageWriter @ 0x140188880 (MiModifiedPageWriter.c)
 * Callees:
 *     MiWriteCompletePfn @ 0x14001E770 (MiWriteCompletePfn.c)
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiReleaseWriteInProgressCharges @ 0x140022CC4 (MiReleaseWriteInProgressCharges.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x140124644 (MiInvalidatePageFileBitmapsCache.c)
 *     MiPageFileLargestBitmapsRun @ 0x140124908 (MiPageFileLargestBitmapsRun.c)
 *     IoAsynchronousPageWrite @ 0x1401350E4 (IoAsynchronousPageWrite.c)
 *     MiStoreWriteModifiedPages @ 0x14014CCA0 (MiStoreWriteModifiedPages.c)
 *     MiUpdatePfnBackingStore @ 0x14014F6B8 (MiUpdatePfnBackingStore.c)
 *     MiUpdatePagefilePeakUsage @ 0x14014F778 (MiUpdatePagefilePeakUsage.c)
 *     MI_PAGEFILE_WRITE @ 0x14014FA90 (MI_PAGEFILE_WRITE.c)
 *     MiMapPageFileHash @ 0x14014FDD8 (MiMapPageFileHash.c)
 *     MiBuildReservationCluster @ 0x1401501BC (MiBuildReservationCluster.c)
 *     MiSetPageFileAllocationBits @ 0x140150938 (MiSetPageFileAllocationBits.c)
 *     MiFindPageFileWriteCluster @ 0x140150D80 (MiFindPageFileWriteCluster.c)
 *     MiFillNoReservationCluster @ 0x140150E48 (MiFillNoReservationCluster.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPageFileNoFreeSpace @ 0x1402B8800 (MiPageFileNoFreeSpace.c)
 */

__int64 __fastcall MiGatherPagefilePages(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // r8
  struct _KTHREAD *CurrentThread; // r13
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // r14
  __int64 v8; // rax
  __int16 v9; // cx
  unsigned __int16 v10; // dx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r12
  __int16 v13; // dx
  unsigned int v14; // edi
  unsigned int v15; // eax
  unsigned int v16; // r13d
  unsigned int v17; // r12d
  unsigned int v18; // eax
  unsigned int v19; // edi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned int v22; // r10d
  unsigned int v23; // esi
  _QWORD *v24; // r14
  unsigned int v25; // r8d
  unsigned __int8 v26; // cl
  _QWORD *v27; // r14
  unsigned int v28; // r13d
  __int64 v29; // r14
  int v30; // edi
  unsigned int v31; // edi
  int v32; // ecx
  unsigned __int64 v33; // rax
  int v34; // eax
  unsigned __int64 v35; // rcx
  __int64 result; // rax
  unsigned __int8 OldIrql; // di
  KIRQL v38; // r13
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // rcx
  __int64 v41; // r14
  __int64 *v42; // rax
  struct _KPRCB *v43; // rcx
  unsigned __int64 v44; // rsi
  _QWORD *v45; // r12
  __int64 v46; // rdi
  unsigned __int8 v47; // r13
  struct _KPRCB *v48; // rcx
  int v49; // eax
  NTSTATUS v50; // eax
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *v52; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v54; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v55; // [rsp+64h] [rbp-45h] BYREF
  unsigned int v56; // [rsp+68h] [rbp-41h]
  struct _KTHREAD *v57; // [rsp+70h] [rbp-39h]
  _QWORD *v58; // [rsp+78h] [rbp-31h]
  unsigned __int64 v59; // [rsp+80h] [rbp-29h]
  __int64 v60; // [rsp+88h] [rbp-21h]
  __int64 v61; // [rsp+98h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int64 v64; // [rsp+118h] [rbp+6Fh]
  unsigned __int8 v65; // [rsp+118h] [rbp+6Fh]
  unsigned int v66; // [rsp+118h] [rbp+6Fh]
  int v67; // [rsp+118h] [rbp+6Fh]
  unsigned int v68; // [rsp+120h] [rbp+77h] BYREF
  unsigned int v69; // [rsp+128h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 144);
  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v5 = 0;
  v61 = v1;
  v57 = CurrentThread;
  v6 = 1LL;
  v7 = *(_QWORD *)(v1 + 256);
  v60 = v7;
  if ( !*(_QWORD *)(v1 + 24) )
    goto LABEL_72;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_DWORD *)(a1 + 216) = 131120;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  v8 = a1 + 256;
  v9 = *(_WORD *)(v1 + 204);
  v58 = (_QWORD *)v8;
  v10 = *(_WORD *)(v1 + 204);
  if ( *(_DWORD *)(v7 + 1144) )
    v5 = 4;
  v11 = *(_QWORD *)(v7 + 40LL * (v9 & 0xF) + 2752);
  if ( !_bittest16((const __int16 *)&v10, 4u)
    && (v5 & 4) != 0
    && (v12 = *(_QWORD *)(v7 + 40LL * *(unsigned int *)(v7 + 1140) + 2752)) != 0 )
  {
    v5 |= 2u;
  }
  else
  {
    if ( *(_DWORD *)(v7 + 1136) )
      goto LABEL_68;
    v12 = *(_QWORD *)(v7 + 2688);
  }
  if ( v11 )
  {
    v13 = v10 >> 4;
    goto LABEL_10;
  }
  if ( !v12 || (v13 = v10 >> 4, (v13 & 1) != 0) )
  {
LABEL_68:
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 232), &LockHandle);
    *(_BYTE *)(v1 + 206) |= 1u;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    *(_QWORD *)v4 = 2575857425LL;
    goto LABEL_54;
  }
LABEL_10:
  if ( (v5 & 2) == 0
    && v12
    && (v13 & 1) == 0
    && (!v11
     || (*(_BYTE *)(v1 + 207) & 1) != 0
     || (unsigned int)MiPageFileLargestBitmapsRun(v1) >= *(_DWORD *)(v1 + 136) >> 2
     && (v12 >= (unsigned __int64)(unsigned int)dword_14054118C >> 2 || v12 >= v11)) )
  {
    v5 |= 2u;
  }
  v14 = dword_14054118C;
  v68 = dword_14054118C;
  if ( (v5 & 2) != 0 )
  {
    if ( v12 < (unsigned int)dword_14054118C )
      v14 = v12;
    v68 = v14;
  }
  if ( *(_BYTE *)(v7 + 984) )
  {
    v67 = 0;
    v38 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 980));
    if ( *(_BYTE *)(v7 + 986) )
    {
      *(_BYTE *)(v7 + 986) = 0;
      *(_BYTE *)(v7 + 984) = 0;
      v67 = 1;
    }
    else
    {
      v39 = *(_BYTE *)(v7 + 984);
      if ( v39 )
      {
        v14 = v39;
        v68 = v39;
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 980));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v38 < 2u )
    {
      v40 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v40->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v40);
      v14 = v68;
    }
    __writecr8(v38);
    if ( v67 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    CurrentThread = v57;
  }
  if ( (*(_DWORD *)(v4 + 40) & 0x1Cu) < 8 )
  {
    if ( v14 > 0x100 )
      v14 = 256;
    v68 = v14;
  }
  v5 |= 1u;
  --CurrentThread->KernelApcDisable;
  if ( (v5 & 2) != 0 )
  {
    v54 = 0;
    MiFindPageFileWriteCluster(v1, &v54, &v68, 0LL);
    v2 = v68;
    if ( v68 )
    {
      v18 = MiFillNoReservationCluster(v7, v58);
      v17 = v54;
      v16 = v18;
      v69 = v18;
      goto LABEL_26;
    }
LABEL_72:
    MiPageFileNoFreeSpace(v1, v4, v2, v6);
    goto LABEL_54;
  }
  v69 = v14;
  v15 = MiBuildReservationCluster(v58, v1, &v69, &v55);
  v16 = v69;
  v17 = v15;
  v54 = v15;
  v18 = v55;
LABEL_26:
  if ( v16 )
  {
    v68 = v16;
    v56 = v18 - 1;
    v55 = v18 - 1;
    v19 = v16;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 232), &LockHandle);
    if ( (v5 & 2) != 0 )
    {
      MiFindPageFileWriteCluster(v1, &v54, &v68, 1LL);
      v19 = v68;
      v17 = v54;
    }
    else
    {
      MiSetPageFileAllocationBits(v1, v17, v16);
      v20 = v16;
      v21 = 0LL;
      v22 = -1;
      v64 = 0LL;
      if ( v58 > &v58[v16] )
        v20 = 0LL;
      v59 = v20;
      if ( v20 )
      {
        v23 = v17;
        v24 = v58;
        do
        {
          v25 = v22;
          if ( *v24 != qword_14043BE88
            || (v21 = v64, v20 = v59, _bittest64(*(const signed __int64 **)(*(_QWORD *)(v1 + 112) + 32LL), v23)) )
          {
            if ( v22 != -1 )
            {
              MiInvalidatePageFileBitmapsCache(v1, v22, v23 - v22, 0LL);
              v21 = v64;
              v20 = v59;
              v22 = -1;
            }
          }
          else
          {
            v22 = v23;
            if ( v25 != -1 )
              v22 = v25;
          }
          ++v21;
          ++v23;
          ++v24;
          v64 = v21;
        }
        while ( v21 < v20 );
        v4 = a1;
        v16 = v69;
      }
    }
    if ( (v5 & 2) == 0 )
      *(_DWORD *)(v1 + 136) = v19 + *(_DWORD *)(v1 + 136) - (*(_DWORD *)(v1 + 136) >> 2);
    MiUpdatePagefilePeakUsage(v1);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v26 = LockHandle.OldIrql;
    v65 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v43 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v43->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v43);
      v19 = v68;
      v17 = v54;
      v16 = v69;
      v26 = v65;
      v56 = v55;
    }
    __writecr8(v26);
    KiLeaveCriticalRegionUnsafe((__int64)v57);
    v5 &= ~1u;
    if ( v19 != v16 )
    {
      v44 = (unsigned __int64)&v58[v16];
      v45 = &v58[v19];
      do
      {
        v46 = 48LL * *v45 - 0x58000000000LL;
        v47 = MiLockPageInline(v46);
        MiWriteCompletePfn(v46, 1);
        _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v47 < 2u )
        {
          v48 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v48->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v48);
        }
        __writecr8(v47);
        ++v45;
      }
      while ( (unsigned __int64)v45 < v44 );
      v19 = v68;
      v56 = v68 - v69 + v55;
      v55 = v56;
      MiReleaseWriteInProgressCharges(v60, v69 - v68, 0);
      v17 = v54;
      v4 = a1;
      v1 = v61;
    }
    v27 = v58;
    *(_DWORD *)(v4 + 248) = v19 << 12;
    *(_DWORD *)(v4 + 136) = v19 << 12;
    *(_DWORD *)(v4 + 140) = v56;
    v69 = v19;
    v28 = 0;
    v66 = v17;
    do
    {
      if ( *v27 != qword_14043BE88 )
        MiUpdatePfnBackingStore(48LL * *v27 - 0x58000000000LL, v1, v17, 0LL);
      ++v27;
      ++v28;
      ++v17;
    }
    while ( v28 < v19 );
    v29 = v60;
    v54 = v17;
    *(_WORD *)(a1 + 216) = 8 * (dword_14054118C + 6);
    *(_DWORD *)(a1 + 40) &= ~2u;
    v30 = *(_DWORD *)(a1 + 40) >> 2;
    *(_QWORD *)(a1 + 184) = MEMORY[0xFFFFF78000000014];
    v31 = v30 & 7;
    v32 = *(_DWORD *)(v29 + 844);
    v33 = *(_QWORD *)(v29 + 7296);
    v68 = v28;
    if ( v32 )
    {
      if ( v33 >= 0x420 )
      {
        v49 = 0;
      }
      else
      {
        v31 = 4;
        v49 = v32 - 1;
      }
      *(_DWORD *)(v29 + 844) = v49;
      goto LABEL_48;
    }
    if ( v33 < 0xA0 )
    {
      *(_DWORD *)(v29 + 844) = 32;
    }
    else
    {
      if ( v33 >= 0x120 )
      {
LABEL_48:
        CurrentThread = v57;
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 40) & 0xFFFFFFE3 | (4 * v31);
        if ( v31 < 2 )
        {
          --CurrentThread->SpecialApcDisable;
          ++*(_DWORD *)(v29 + 676);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
        MI_PAGEFILE_WRITE(a1, a1 + 184, v31, ((v5 >> 1) & 1) == 0, -1);
        v34 = *(_DWORD *)(v29 + 832);
        v35 = *(_QWORD *)(v29 + 824);
        if ( v34 == 512 )
        {
          v35 -= v35 >> 9;
          *(_QWORD *)(v29 + 824) = v35;
        }
        else
        {
          *(_DWORD *)(v29 + 832) = v34 + 1;
        }
        *(_QWORD *)(v29 + 824) = v35 + v69;
        *(_DWORD *)(a1 + 40) &= ~0x20u;
        *(_QWORD *)(a1 + 176) = (unsigned __int64)v66 << 12;
        if ( v5 < 4 || (int)MiStoreWriteModifiedPages(a1) < 0 )
        {
          __incgsdword(0x2EACu);
          __addgsdword(0x2EA8u, v69);
          MiMapPageFileHash(v1, a1 + 208, 0LL, v66, v69);
          v50 = IoAsynchronousPageWrite(
                  *(struct _FILE_OBJECT **)(v1 + 56),
                  (struct _MDL *)(a1 + 208),
                  (LARGE_INTEGER *)(a1 + 176),
                  (void (__fastcall *)(void *, struct _IO_STATUS_BLOCK *, _QWORD))MiWriteComplete,
                  (void *)a1,
                  v31,
                  *(_DWORD *)(v1 + 200),
                  0,
                  0LL,
                  (struct _IO_STATUS_BLOCK *)(a1 + 16),
                  (IRP **)(a1 + 32));
          if ( (v50 & 0xC0000000) == 0xC0000000 )
          {
            *(_DWORD *)(a1 + 16) = v50;
            *(_QWORD *)(a1 + 24) = 0LL;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(1uLL);
            MiWriteComplete(a1, (int *)(a1 + 16), 0);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
            {
              v52 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v52->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v52);
            }
            __writecr8(CurrentIrql);
          }
        }
        goto LABEL_54;
      }
      *(_DWORD *)(v29 + 844) = 8;
    }
    v31 = 4;
    goto LABEL_48;
  }
  CurrentThread = v57;
  --v57->SpecialApcDisable;
  v41 = v7 + 888;
  v42 = *(__int64 **)(v41 + 8);
  if ( *v42 != v41 )
    __fastfail(3u);
  *(_QWORD *)v4 = v41;
  *(_QWORD *)(v4 + 8) = v42;
  *v42 = v4;
  *(_QWORD *)(v41 + 8) = v4;
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_54:
  result = 1LL;
  if ( (v5 & 1) != 0 )
    return (__int64)KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return result;
}
