/*
 * XREFs of MiGatherPagefilePages @ 0x14014A9AC
 * Callers:
 *     MiModifiedPageWriter @ 0x1401924B0 (MiModifiedPageWriter.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400447B0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiWriteComplete @ 0x1400DDB90 (MiWriteComplete.c)
 *     MiWriteCompletePfn @ 0x1400DE110 (MiWriteCompletePfn.c)
 *     MiReleaseWriteInProgressCharges @ 0x1400DFA84 (MiReleaseWriteInProgressCharges.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1400F11C8 (MiInvalidatePageFileBitmapsCache.c)
 *     MiPageFileLargestBitmapsRun @ 0x1400F1450 (MiPageFileLargestBitmapsRun.c)
 *     ExReleaseSpinLockExclusive @ 0x14010A2A0 (ExReleaseSpinLockExclusive.c)
 *     MiStoreWriteModifiedPages @ 0x140149FC8 (MiStoreWriteModifiedPages.c)
 *     MiUpdatePfnBackingStore @ 0x14014AF94 (MiUpdatePfnBackingStore.c)
 *     MiUpdatePagefilePeakUsage @ 0x14014B054 (MiUpdatePagefilePeakUsage.c)
 *     MI_PAGEFILE_WRITE @ 0x14014CE08 (MI_PAGEFILE_WRITE.c)
 *     MiMapPageFileHash @ 0x14014D0CC (MiMapPageFileHash.c)
 *     MiSetPageFileAllocationBits @ 0x14014D480 (MiSetPageFileAllocationBits.c)
 *     MiFindPageFileWriteCluster @ 0x14014D6C0 (MiFindPageFileWriteCluster.c)
 *     MiFillNoReservationCluster @ 0x14014D9A4 (MiFillNoReservationCluster.c)
 *     MiBuildReservationCluster @ 0x140162FB0 (MiBuildReservationCluster.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiAsynchronousPageWrite @ 0x1402C1300 (MiAsynchronousPageWrite.c)
 *     MiPageFileNoFreeSpace @ 0x1402CE9A4 (MiPageFileNoFreeSpace.c)
 *     MiLockPage @ 0x1402D8FA4 (MiLockPage.c)
 *     MiUnlockPage @ 0x1402D8FF8 (MiUnlockPage.c)
 */

__int64 __fastcall MiGatherPagefilePages(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r8
  __int64 v3; // r14
  unsigned int v4; // ebx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v6; // r9
  __int64 v7; // r15
  __int64 v8; // rax
  __int16 v9; // cx
  unsigned __int16 v10; // dx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  __int16 v13; // dx
  unsigned int v14; // edi
  int v15; // esi
  unsigned int v16; // eax
  unsigned int v17; // r12d
  unsigned int v18; // esi
  unsigned int v19; // eax
  unsigned int v20; // edi
  _QWORD *v21; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // rdx
  unsigned int v24; // r10d
  unsigned __int64 v25; // r14
  unsigned int v26; // r8d
  unsigned int v27; // esi
  _QWORD *v28; // r15
  unsigned int v29; // r12d
  unsigned int v30; // esi
  __int64 v31; // r15
  int v32; // edi
  unsigned int v33; // edi
  int v34; // ecx
  unsigned __int64 v35; // rax
  int v36; // eax
  unsigned __int64 v37; // rcx
  __int64 result; // rax
  int v39; // eax
  KIRQL v40; // dl
  unsigned __int8 v41; // al
  __int64 v42; // r15
  __int64 *v43; // rax
  unsigned __int64 v44; // r15
  _QWORD *v45; // r14
  ULONG_PTR v46; // rsi
  char v47; // di
  __int64 v48; // rdx
  int v49; // eax
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v52; // [rsp+60h] [rbp-39h]
  unsigned int v53; // [rsp+60h] [rbp-39h]
  unsigned int v54; // [rsp+64h] [rbp-35h] BYREF
  _QWORD *v55; // [rsp+68h] [rbp-31h]
  unsigned __int64 v56; // [rsp+70h] [rbp-29h]
  struct _KTHREAD *v57; // [rsp+78h] [rbp-21h]
  __int64 v58; // [rsp+80h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-11h] BYREF
  __int64 v60; // [rsp+A8h] [rbp+Fh]
  _QWORD *v62; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned int v63; // [rsp+110h] [rbp+77h] BYREF
  unsigned int v64; // [rsp+118h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 144);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  v3 = a1;
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  v6 = 1LL;
  v7 = *(_QWORD *)(v1 + 256);
  v58 = v7;
  v60 = v1;
  v57 = CurrentThread;
  if ( !*(_QWORD *)(v1 + 24) )
    goto LABEL_68;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_DWORD *)(a1 + 216) = 131120;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  v8 = a1 + 256;
  v9 = *(_WORD *)(v1 + 204);
  v55 = (_QWORD *)v8;
  v10 = *(_WORD *)(v1 + 204);
  if ( *(_DWORD *)(v7 + 1144) )
    v4 = 4;
  v11 = *(_QWORD *)(v7 + 40LL * (v9 & 0xF) + 2752);
  if ( !_bittest16((const __int16 *)&v10, 4u)
    && (v4 & 4) != 0
    && (v12 = *(_QWORD *)(v7 + 40LL * *(unsigned int *)(v7 + 1140) + 2752)) != 0 )
  {
    v4 |= 2u;
  }
  else
  {
    if ( *(_DWORD *)(v7 + 1136) )
      goto LABEL_65;
    v12 = *(_QWORD *)(v7 + 2688);
  }
  if ( v11 )
  {
    v13 = v10 >> 4;
    goto LABEL_10;
  }
  if ( !v12 || (v13 = v10 >> 4, (v13 & 1) != 0) )
  {
LABEL_65:
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 232), &LockHandle);
    *(_BYTE *)(v1 + 206) |= 1u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *(_QWORD *)v3 = 2575857425LL;
    goto LABEL_51;
  }
LABEL_10:
  if ( (v4 & 2) == 0
    && v12
    && (v13 & 1) == 0
    && (!v11
     || (*(_BYTE *)(v1 + 207) & 1) != 0
     || (unsigned int)MiPageFileLargestBitmapsRun(v1) >= *(_DWORD *)(v1 + 136) >> 2
     && (v12 >= (unsigned __int64)(unsigned int)dword_14057119C >> 2 || v12 >= v11)) )
  {
    v4 |= 2u;
  }
  v14 = dword_14057119C;
  LODWORD(v62) = dword_14057119C;
  if ( (v4 & 2) != 0 )
  {
    if ( v12 < (unsigned int)dword_14057119C )
      v14 = v12;
    LODWORD(v62) = v14;
  }
  v15 = 0;
  if ( *(_BYTE *)(v7 + 992) )
  {
    v40 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 988));
    if ( *(_BYTE *)(v7 + 994) )
    {
      *(_BYTE *)(v7 + 994) = 0;
      v15 = 1;
      *(_BYTE *)(v7 + 992) = 0;
    }
    else
    {
      v41 = *(_BYTE *)(v7 + 992);
      if ( v41 )
      {
        v14 = v41;
        LODWORD(v62) = v41;
      }
    }
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 988), v40);
    if ( v15 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
  }
  if ( (*(_DWORD *)(v3 + 40) & 0x1Cu) < 8 )
  {
    if ( v14 > 0x100 )
      v14 = 256;
    LODWORD(v62) = v14;
  }
  v4 |= 1u;
  --CurrentThread->KernelApcDisable;
  if ( (v4 & 2) == 0 )
  {
    v64 = v14;
    v16 = MiBuildReservationCluster(v55, v1, &v64, &v54);
    v17 = v64;
    v18 = v16;
    v63 = v16;
    v19 = v54;
    goto LABEL_23;
  }
  v63 = 0;
  MiFindPageFileWriteCluster(v1, &v63, &v62, 0LL);
  v2 = (unsigned int)v62;
  if ( !(_DWORD)v62 )
  {
LABEL_68:
    MiPageFileNoFreeSpace(v1, v3, v2, v6);
    goto LABEL_51;
  }
  v19 = MiFillNoReservationCluster(v7, v55);
  v18 = v63;
  v17 = v19;
LABEL_23:
  if ( v17 )
  {
    v64 = v17;
    v52 = v19 - 1;
    v54 = v19 - 1;
    v20 = v17;
    LODWORD(v62) = v17;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 232), &LockHandle);
    if ( (v4 & 2) != 0 )
    {
      MiFindPageFileWriteCluster(v1, &v63, &v62, 1LL);
      v20 = (unsigned int)v62;
      v64 = (unsigned int)v62;
    }
    else
    {
      MiSetPageFileAllocationBits(v1, v18, v17);
      v21 = v55;
      v22 = v17;
      v23 = 0LL;
      v62 = v55;
      v24 = -1;
      v56 = 0LL;
      if ( v55 > &v55[v17] )
        v22 = 0LL;
      if ( v22 )
      {
        v25 = (unsigned int)v22;
        do
        {
          v26 = v24;
          if ( *v21 != qword_140466848
            || (v21 = v62, v23 = v56, _bittest64(*(const signed __int64 **)(*(_QWORD *)(v1 + 112) + 32LL), v18)) )
          {
            if ( v24 != -1 )
            {
              MiInvalidatePageFileBitmapsCache(v1, v24, v18 - v24, 0LL);
              v21 = v62;
              v23 = v56;
              v24 = -1;
            }
          }
          else
          {
            v24 = v18;
            if ( v26 != -1 )
              v24 = v26;
          }
          ++v21;
          ++v23;
          ++v18;
          v62 = v21;
          v56 = v23;
        }
        while ( v23 < v25 );
        v3 = a1;
      }
    }
    if ( (v4 & 2) == 0 )
      *(_DWORD *)(v1 + 136) = v20 + *(_DWORD *)(v1 + 136) - (*(_DWORD *)(v1 + 136) >> 2);
    MiUpdatePagefilePeakUsage(v1);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeLeaveCriticalRegionThread((__int64)v57);
    v4 &= ~1u;
    if ( v20 == v17 )
    {
      v27 = v52;
    }
    else
    {
      v62 = &v55[v17];
      v44 = (unsigned __int64)v62;
      v45 = &v55[v20];
      do
      {
        v46 = 48LL * *v45 - 0x58000000000LL;
        v47 = MiLockPage(v46);
        MiWriteCompletePfn(v46, 1);
        LOBYTE(v48) = v47;
        MiUnlockPage(v46, v48);
        ++v45;
      }
      while ( (unsigned __int64)v45 < v44 );
      v20 = v64;
      v27 = v64 - v17 + v52;
      v54 = v27;
      MiReleaseWriteInProgressCharges(v58, v17 - v64, 0);
      v3 = a1;
      v1 = v60;
    }
    v28 = v55;
    *(_DWORD *)(v3 + 248) = v20 << 12;
    *(_DWORD *)(v3 + 136) = v20 << 12;
    *(_DWORD *)(v3 + 140) = v27;
    v29 = 0;
    v30 = v63;
    v64 = v20;
    v53 = v63;
    do
    {
      if ( *v28 != qword_140466848 )
        MiUpdatePfnBackingStore(48LL * *v28 - 0x58000000000LL, v1, v30, 0LL);
      ++v28;
      ++v29;
      ++v30;
    }
    while ( v29 < v20 );
    v31 = v58;
    v63 = v30;
    *(_WORD *)(a1 + 216) = 8 * (dword_14057119C + 6);
    *(_DWORD *)(a1 + 40) &= ~2u;
    v32 = *(_DWORD *)(a1 + 40) >> 2;
    *(_QWORD *)(a1 + 184) = MEMORY[0xFFFFF78000000014];
    v33 = v32 & 7;
    v34 = *(_DWORD *)(v31 + 852);
    v35 = *(_QWORD *)(v31 + 8064);
    LODWORD(v62) = v29;
    if ( v34 )
    {
      if ( v35 >= 0x420 )
      {
        v49 = 0;
      }
      else
      {
        v33 = 4;
        v49 = v34 - 1;
      }
      *(_DWORD *)(v31 + 852) = v49;
      goto LABEL_45;
    }
    if ( v35 < 0xA0 )
    {
      *(_DWORD *)(v31 + 852) = 32;
    }
    else
    {
      if ( v35 >= 0x120 )
      {
LABEL_45:
        CurrentThread = v57;
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 40) & 0xFFFFFFE3 | (4 * v33);
        if ( v33 < 2 )
        {
          --CurrentThread->SpecialApcDisable;
          ++*(_DWORD *)(v31 + 684);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
        MI_PAGEFILE_WRITE(a1, a1 + 184, v33, ((v4 >> 1) & 1) == 0, -1);
        v36 = *(_DWORD *)(v31 + 840);
        v37 = *(_QWORD *)(v31 + 832);
        if ( v36 == 512 )
          v37 -= v37 >> 9;
        else
          *(_DWORD *)(v31 + 840) = v36 + 1;
        *(_QWORD *)(v31 + 832) = v37 + v64;
        *(_DWORD *)(a1 + 40) &= ~0x20u;
        *(_QWORD *)(a1 + 176) = (unsigned __int64)v53 << 12;
        if ( v4 < 4 || (int)MiStoreWriteModifiedPages(a1) < 0 )
        {
          __incgsdword(0x2EACu);
          __addgsdword(0x2EA8u, v64);
          MiMapPageFileHash(v1, a1 + 208, 0LL, v53, v64);
          v39 = MiAsynchronousPageWrite(
                  *(_QWORD *)(v1 + 56),
                  (int)a1 + 208,
                  (int)a1 + 176,
                  (unsigned int)MiWriteComplete,
                  a1,
                  v33,
                  *(_DWORD *)(v1 + 200),
                  0,
                  0LL,
                  a1 + 16,
                  a1 + 32);
          if ( (v39 & 0xC0000000) == 0xC0000000 )
          {
            *(_DWORD *)(a1 + 16) = v39;
            *(_QWORD *)(a1 + 24) = 0LL;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(1uLL);
            MiWriteComplete(a1, (unsigned int *)(a1 + 16), 0);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
            __writecr8(CurrentIrql);
          }
        }
        goto LABEL_51;
      }
      *(_DWORD *)(v31 + 852) = 8;
    }
    v33 = 4;
    goto LABEL_45;
  }
  CurrentThread = v57;
  --v57->SpecialApcDisable;
  v42 = v7 + 896;
  v43 = *(__int64 **)(v42 + 8);
  if ( *v43 != v42 )
    __fastfail(3u);
  *(_QWORD *)v3 = v42;
  *(_QWORD *)(v3 + 8) = v43;
  *v43 = v3;
  *(_QWORD *)(v42 + 8) = v3;
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_51:
  result = 1LL;
  if ( (v4 & 1) != 0 )
    return (__int64)KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return result;
}
