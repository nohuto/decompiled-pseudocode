/*
 * XREFs of SmpKeyedStoreEntryGet @ 0x140011FDC
 * Callers:
 *     SmStoreExistsForProcess @ 0x140011FA4 (SmStoreExistsForProcess.c)
 *     SmpKeyedStoreSetVaRanges @ 0x1400E4BF4 (SmpKeyedStoreSetVaRanges.c)
 *     SmpKeyedStoreReference @ 0x14014F794 (SmpKeyedStoreReference.c)
 *     SmpProcessQueryStoreStats @ 0x140306778 (SmpProcessQueryStoreStats.c)
 *     PspProcessDelete @ 0x140608590 (PspProcessDelete.c)
 *     SmpKeyedStoreCreate @ 0x14066C7B8 (SmpKeyedStoreCreate.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1406CCF80 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmSwapStore @ 0x1406D22D0 (SmSwapStore.c)
 *     SmStoreCompressionStart @ 0x1408AC960 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x1408AC9DC (SmStoreCompressionStop.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ?SmAllocWrapper@@YAPEAX_KPEAX@Z @ 0x14013BB80 (-SmAllocWrapper@@YAPEAX_KPEAX@Z.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall SmpKeyedStoreEntryGet(ULONG_PTR BugCheckParameter2, unsigned __int64 *a2, int a3, int a4)
{
  int v4; // r12d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int SessionId; // r15d
  __int64 v9; // r14
  unsigned int v10; // edx
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // rdi
  struct _KTHREAD *v15; // rdi
  unsigned __int8 v16; // r12
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  ULONG_PTR v25; // r15
  unsigned int v26; // eax
  __int64 v27; // rsi
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned int v30; // r8d
  _QWORD *v31; // rdx
  __int64 v32; // rax
  char *v33; // r8
  unsigned __int64 v34; // rcx
  unsigned int v35; // r9d
  __int64 v36; // r10
  __int64 v37; // r12
  _QWORD *v38; // r11
  unsigned __int64 v39; // rcx
  struct _PRIVILEGE_SET *v40; // rcx
  char v41; // cl
  int v42; // [rsp+38h] [rbp-39h] BYREF
  int v43; // [rsp+3Ch] [rbp-35h] BYREF
  unsigned int v44; // [rsp+40h] [rbp-31h]
  int v45; // [rsp+44h] [rbp-2Dh]
  unsigned __int64 v46; // [rsp+48h] [rbp-29h]
  ULONG_PTR v47; // [rsp+50h] [rbp-21h]
  _QWORD *v48; // [rsp+58h] [rbp-19h]
  _QWORD *v49; // [rsp+60h] [rbp-11h]
  unsigned __int64 v50; // [rsp+68h] [rbp-9h]
  unsigned __int64 v51; // [rsp+70h] [rbp-1h]
  unsigned __int64 v52; // [rsp+78h] [rbp+7h]
  __int64 v53; // [rsp+80h] [rbp+Fh]
  unsigned __int64 v54; // [rsp+88h] [rbp+17h]
  unsigned __int64 v55; // [rsp+90h] [rbp+1Fh]

  v4 = a3;
  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( a3 > 0 )
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    else
      ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
  }
  SessionId = -1;
  if ( !v4 )
  {
    v9 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( v9 && *(_QWORD *)(v9 + 8) == *a2 )
      goto LABEL_19;
    if ( *a2 == *(_QWORD *)(BugCheckParameter2 + 32) )
    {
      v9 = 0LL;
      goto LABEL_19;
    }
  }
  v10 = *(_DWORD *)(BugCheckParameter2 + 12);
  v11 = -1LL << (v10 & 0x1F);
  v46 = *a2;
  v12 = v46;
  v13 = v11 & v46;
  v51 = (v11 & v46) >> 16;
  v50 = (v11 & v46) >> 8;
  v44 = v10 >> 5;
  if ( v10 >= 0x20 )
  {
    v53 = v11 & v46;
    v9 = *(_QWORD *)(BugCheckParameter2 + 16)
       + 8
       * ((((v11 & v46) >> 56)
         + 37
         * ((unsigned __int8)((v11 & v46) >> 48)
          + 37
          * ((unsigned __int8)((unsigned __int16)((v11 & v46) >> 32) >> 8)
           + 37
           * ((unsigned __int8)((v11 & v46) >> 32)
            + 37
            * ((((unsigned int)v11 & (unsigned int)v46) >> 24)
             + 37 * ((unsigned __int8)v51 + 37 * ((unsigned __int8)v50 + 37 * ((unsigned __int8)v13 + 11623883)))))))) & (v44 - 1));
    while ( 1 )
    {
      v9 = *(_QWORD *)v9;
      if ( (v9 & 1) != 0 )
        break;
      if ( v13 == (v11 & *(_QWORD *)(v9 + 8)) )
        goto LABEL_14;
    }
    v9 = 0LL;
LABEL_14:
    if ( v9 )
    {
      if ( v4 == 2 )
      {
        v48 = (_QWORD *)v9;
        v30 = *(_DWORD *)(BugCheckParameter2 + 12);
        v47 = BugCheckParameter2 + 8;
        v54 = *(_QWORD *)(v9 + 8) & (-1LL << (v30 & 0x1F));
        v31 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16)
                       + 8
                       * ((HIBYTE(v54)
                         + 37
                         * (BYTE6(v54)
                          + 37
                          * (BYTE5(v54)
                           + 37
                           * (BYTE4(v54)
                            + 37
                            * (BYTE3(v54)
                             + 37 * (BYTE2(v54) + 37 * (37 * ((unsigned __int8)v54 + 11623883) + BYTE1(v54)))))))) & ((v30 >> 5) - 1)));
        v32 = *(_QWORD *)v9;
        v49 = v31;
        if ( (v32 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          v31 = v49;
        while ( (*v31 & 1) == 0 )
        {
          if ( *v31 == v9 )
          {
            *v31 = *(_QWORD *)v9;
            --*(_DWORD *)(BugCheckParameter2 + 8);
            *(_QWORD *)v9 |= 0x8000000000000002uLL;
            v48 = v31;
            break;
          }
          v31 = (_QWORD *)*v31;
        }
        if ( *(_QWORD *)(BugCheckParameter2 + 24) == v9 )
          *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
      }
      else
      {
        *(_QWORD *)(BugCheckParameter2 + 24) = v9;
      }
      goto LABEL_19;
    }
    v12 = v46;
  }
  if ( v4 != 1 )
  {
    *(_QWORD *)(BugCheckParameter2 + 32) = v12;
LABEL_18:
    v9 = 0LL;
    goto LABEL_19;
  }
  v25 = BugCheckParameter2 + 8;
  v43 = 1414032755;
  v26 = *(_DWORD *)(BugCheckParameter2 + 12);
  v9 = (__int64)(a2 - 1);
  v27 = 2 * (v26 >> 5);
  if ( *(_DWORD *)(BugCheckParameter2 + 8) >= (unsigned int)v27 )
  {
    if ( (unsigned int)v27 < 4 )
      v27 = 4LL;
    v33 = (char *)SmAllocWrapper(8LL * (unsigned int)v27, &v43);
    if ( v33 )
    {
      if ( (((_DWORD)v27 - 1) & (unsigned int)v27) != 0 )
      {
        v41 = -1;
        do
        {
          ++v41;
          LODWORD(v27) = (unsigned int)v27 >> 1;
        }
        while ( (_DWORD)v27 );
        v27 = (unsigned int)(1 << v41);
      }
      if ( (unsigned int)v27 > 0x4000000 )
        v27 = 0x4000000LL;
      v34 = (unsigned int)v27;
      if ( v33 > &v33[8 * v27] )
        v34 = 0LL;
      if ( v34 )
        memset64(v33, v25 | 1, v34);
      v35 = 0;
      v36 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
      if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v37 = *(_QWORD *)(v25 + 8);
          while ( 1 )
          {
            v38 = *(_QWORD **)(v37 + 8LL * v35);
            if ( ((unsigned __int8)v38 & 1) != 0 )
              break;
            *(_QWORD *)(v37 + 8LL * v35) = *v38;
            v55 = v36 & v38[1];
            v39 = (HIBYTE(v55)
                 + 37
                 * (BYTE6(v55)
                  + 37
                  * (BYTE5(v55)
                   + 37
                   * (BYTE4(v55)
                    + 37 * (BYTE3(v55) + 37 * (BYTE2(v55) + 37 * (37 * ((unsigned __int8)v55 + 11623883) + BYTE1(v55)))))))) & (unsigned int)(v27 - 1);
            *v38 = *(_QWORD *)&v33[8 * v39];
            *(_QWORD *)&v33[8 * v39] = v38;
          }
          v25 = BugCheckParameter2 + 8;
          ++v35;
        }
        while ( v35 < *(_DWORD *)(BugCheckParameter2 + 12) >> 5 );
        v4 = a3;
      }
      v40 = *(struct _PRIVILEGE_SET **)(v25 + 8);
      v26 = (32 * v27) | *(_DWORD *)(v25 + 4) & 0x1F;
      *(_QWORD *)(v25 + 8) = v33;
      *(_DWORD *)(v25 + 4) = v26;
      if ( v40 )
      {
        CmSiFreeMemory(v40);
        v26 = *(_DWORD *)(BugCheckParameter2 + 12);
      }
    }
    else
    {
      v26 = *(_DWORD *)(BugCheckParameter2 + 12);
      if ( v26 < 0x20 )
      {
        SessionId = -1;
        goto LABEL_18;
      }
    }
  }
  v52 = *a2 & (-1LL << (v26 & 0x1F));
  v28 = *(_QWORD *)(v25 + 8);
  v29 = (HIBYTE(v52)
       + 37
       * (BYTE6(v52)
        + 37
        * (BYTE5(v52)
         + 37
         * (BYTE4(v52)
          + 37 * (BYTE3(v52) + 37 * (BYTE2(v52) + 37 * (BYTE1(v52) + 37 * ((unsigned __int8)v52 + 11623883)))))))) & ((v26 >> 5) - 1);
  *(_QWORD *)v9 = *(_QWORD *)(v28 + 8 * v29);
  *(_QWORD *)(v28 + 8 * v29) = v9;
  ++*(_DWORD *)v25;
  if ( *(_QWORD *)(BugCheckParameter2 + 32) == *a2 )
    *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
  SessionId = -1;
LABEL_19:
  if ( !a4 )
  {
    if ( v4 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
      v42 = 0;
      v15 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
        SessionId = MmGetSessionIdEx(v15->ApcState.Process);
      --v15->SpecialApcDisable;
      v16 = ++v15->AbAllocationRegionCount;
      LODWORD(v17) = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v18 = !_BitScanReverse((unsigned int *)&v19, v17);
        v45 = v19;
        if ( v18 )
          break;
        v20 = 1 << v19;
        v21 = v19;
        v22 = &v15->LockEntries[v21];
        v17 = ~v20 & (unsigned int)v17;
        if ( (v22->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v22->LockState.0 & 1) == 0
          && (*(_QWORD *)&v22->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
          && v22->LockState.SessionId == SessionId )
        {
          v22->AcquiredByte &= ~1u;
          if ( v22->LockState.0 )
          {
            if ( v22 )
            {
              v22->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v22->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&v15->LockEntries[v21].TreeNode, v17);
              v42 = 0;
              v42 = v22->BoostBitmap.AllFields & 0x1FFFF;
              v22->BoostBitmap.AllFields &= 0xFFFE0000;
              v22->ThreadLocalFlags &= ~1u;
              v22->LockState.0 = 0LL;
              v23 = ((char *)v22 - (char *)v15 - 800) / 96;
              if ( v16 == 1 )
                v15->AbEntrySummary |= 1 << v23;
              else
                _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v23);
              goto LABEL_45;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v15, BugCheckParameter2, SessionId, 0LL);
LABEL_45:
      --v15->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v15, BugCheckParameter2, &v42);
      v18 = v15->SpecialApcDisable++ == -1;
      if ( v18 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
        KiCheckForKernelApcDelivery(v24);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
    }
    KeLeaveCriticalRegion();
  }
  return v9;
}
