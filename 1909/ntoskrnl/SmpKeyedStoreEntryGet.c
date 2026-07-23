/*
 * XREFs of SmpKeyedStoreEntryGet @ 0x14008C23C
 * Callers:
 *     SmStoreExistsForProcess @ 0x14008C204 (SmStoreExistsForProcess.c)
 *     SmpKeyedStoreSetVaRanges @ 0x1400D8CDC (SmpKeyedStoreSetVaRanges.c)
 *     SmpKeyedStoreReference @ 0x14014D29C (SmpKeyedStoreReference.c)
 *     SmpProcessQueryStoreStats @ 0x1403239CC (SmpProcessQueryStoreStats.c)
 *     SmpKeyedStoreCreate @ 0x14067305C (SmpKeyedStoreCreate.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1406ECCE4 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmSwapStore @ 0x1406F4EB0 (SmSwapStore.c)
 *     SmStoreCompressionStop @ 0x1406F7488 (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x1406F756C (SmStoreCompressionStart.c)
 *     SmProcessDeleteNotification @ 0x1408E7998 (SmProcessDeleteNotification.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     ?SmAllocWrapper@@YAPEAX_KPEAX@Z @ 0x14013DAE0 (-SmAllocWrapper@@YAPEAX_KPEAX@Z.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall SmpKeyedStoreEntryGet(ULONG_PTR BugCheckParameter2, __int64 *a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int SessionId; // r15d
  __int64 v9; // r14
  __int64 v10; // r10
  __int64 v11; // r8
  __int64 v12; // rdi
  int v13; // r9d
  struct _KTHREAD *v15; // rdi
  unsigned __int8 v16; // r12
  unsigned int v17; // edx
  bool v18; // zf
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rsi
  __int64 v23; // rdx
  ULONG_PTR v24; // r15
  unsigned int v25; // esi
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // edi
  _QWORD *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rsi
  char *v33; // r8
  char i; // cl
  unsigned __int64 v35; // rcx
  unsigned int v36; // edi
  __int64 v37; // r10
  __int64 v38; // r15
  _QWORD *v39; // r9
  __int64 v40; // rdx
  struct _PRIVILEGE_SET *v41; // rcx
  __int64 v42; // [rsp+38h] [rbp-48h]
  __int64 v43; // [rsp+40h] [rbp-40h]
  _DWORD v44[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v45; // [rsp+50h] [rbp-30h]
  ULONG_PTR v46; // [rsp+58h] [rbp-28h]
  _QWORD *v47; // [rsp+60h] [rbp-20h]
  _QWORD *v48; // [rsp+68h] [rbp-18h]
  __int64 v49; // [rsp+70h] [rbp-10h]
  int v50; // [rsp+D0h] [rbp+50h] BYREF
  int v51; // [rsp+D8h] [rbp+58h]

  v51 = a4;
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
  if ( !a3 )
  {
    v9 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( v9 && *(_QWORD *)(v9 + 8) == *a2 )
      goto LABEL_17;
    if ( *a2 == *(_QWORD *)(BugCheckParameter2 + 32) )
    {
      v9 = 0LL;
      goto LABEL_17;
    }
  }
  v10 = *a2;
  v11 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
  v12 = v11 & *a2;
  v13 = *(_DWORD *)(BugCheckParameter2 + 12) >> 5;
  if ( *(_DWORD *)(BugCheckParameter2 + 12) < 0x20u )
    goto LABEL_15;
  v49 = v11 & *a2;
  v9 = *(_QWORD *)(BugCheckParameter2 + 16)
     + 8LL
     * ((37
       * (BYTE6(v12)
        + 37
        * (BYTE5(v12)
         + 37
         * (BYTE4(v12)
          + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 11623883)))))))
       + HIBYTE(v12)) & (unsigned int)(v13 - 1));
  while ( 1 )
  {
    v9 = *(_QWORD *)v9;
    if ( (v9 & 1) != 0 )
      break;
    if ( v12 == (v11 & *(_QWORD *)(v9 + 8)) )
      goto LABEL_14;
  }
  v9 = 0LL;
LABEL_14:
  if ( v9 )
  {
    if ( a3 == 2 )
    {
      v47 = (_QWORD *)v9;
      v29 = *(_DWORD *)(BugCheckParameter2 + 12) >> 5;
      v45 = *(_QWORD *)(v9 + 8) & (-1LL << (*(_DWORD *)(BugCheckParameter2 + 12) & 0x1F));
      v46 = BugCheckParameter2 + 8;
      v30 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16)
                     + 8LL
                     * ((37
                       * (BYTE6(v45)
                        + 37
                        * (BYTE5(v45)
                         + 37
                         * (BYTE4(v45)
                          + 37
                          * (BYTE3(v45) + 37 * (BYTE2(v45) + 37 * (BYTE1(v45) + 37 * ((unsigned __int8)v45 + 11623883)))))))
                       + HIBYTE(v45)) & (unsigned int)(v29 - 1)));
      v31 = *(_QWORD *)v9;
      v48 = v30;
      if ( (v31 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v30 = v48;
      while ( (*v30 & 1) == 0 )
      {
        if ( *v30 == v9 )
        {
          *v30 = *(_QWORD *)v9;
          --*(_DWORD *)(BugCheckParameter2 + 8);
          *(_QWORD *)v9 |= 0x8000000000000002uLL;
          v47 = v30;
          break;
        }
        v30 = (_QWORD *)*v30;
      }
      if ( *(_QWORD *)(BugCheckParameter2 + 24) == v9 )
        *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 24) = v9;
    }
  }
  else
  {
LABEL_15:
    if ( a3 != 1 )
    {
      *(_QWORD *)(BugCheckParameter2 + 32) = v10;
      v9 = 0LL;
      goto LABEL_17;
    }
    v24 = BugCheckParameter2 + 8;
    v50 = 1414032755;
    v25 = *(_DWORD *)(BugCheckParameter2 + 12);
    v9 = (__int64)(a2 - 1);
    v26 = 2 * (v25 >> 5);
    if ( *(_DWORD *)(BugCheckParameter2 + 8) >= v26 )
    {
      v32 = v26;
      if ( v26 < 4 )
        v32 = 4LL;
      v33 = (char *)SmAllocWrapper(8LL * (unsigned int)v32, &v50);
      if ( v33 )
      {
        if ( (((_DWORD)v32 - 1) & (unsigned int)v32) != 0 )
        {
          for ( i = -1; (_DWORD)v32; LODWORD(v32) = (unsigned int)v32 >> 1 )
            ++i;
          v32 = (unsigned int)(1 << i);
        }
        if ( (unsigned int)v32 > 0x4000000 )
          v32 = 0x4000000LL;
        v35 = (unsigned int)v32;
        if ( v33 > &v33[8 * v32] )
          v35 = 0LL;
        if ( v35 )
          memset64(v33, v24 | 1, v35);
        v36 = 0;
        v37 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
        if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v38 = *(_QWORD *)(v24 + 8);
            while ( 1 )
            {
              v39 = *(_QWORD **)(v38 + 8LL * v36);
              if ( ((unsigned __int8)v39 & 1) != 0 )
                break;
              *(_QWORD *)(v38 + 8LL * v36) = *v39;
              v43 = v37 & v39[1];
              v40 = (37
                   * (BYTE6(v43)
                    + 37
                    * (BYTE5(v43)
                     + 37
                     * (BYTE4(v43)
                      + 37
                      * (BYTE3(v43) + 37 * (BYTE2(v43) + 37 * (BYTE1(v43) + 37 * ((unsigned __int8)v43 + 11623883)))))))
                   + HIBYTE(v43)) & (unsigned int)(v32 - 1);
              *v39 = *(_QWORD *)&v33[8 * v40];
              *(_QWORD *)&v33[8 * v40] = v39;
            }
            v24 = BugCheckParameter2 + 8;
            ++v36;
          }
          while ( v36 < *(_DWORD *)(BugCheckParameter2 + 12) >> 5 );
        }
        v41 = *(struct _PRIVILEGE_SET **)(v24 + 8);
        v25 = *(_DWORD *)(v24 + 4) & 0x1F | (32 * v32);
        *(_QWORD *)(v24 + 8) = v33;
        *(_DWORD *)(v24 + 4) = v25;
        if ( v41 )
        {
          CmSiFreeMemory(v41);
          v25 = *(_DWORD *)(BugCheckParameter2 + 12);
        }
      }
      else
      {
        v25 = *(_DWORD *)(BugCheckParameter2 + 12);
        if ( v25 < 0x20 )
        {
          v9 = 0LL;
          SessionId = -1;
          goto LABEL_17;
        }
      }
    }
    v42 = *a2 & (-1LL << (v25 & 0x1F));
    v27 = *(_QWORD *)(v24 + 8);
    v28 = (37
         * (BYTE6(v42)
          + 37
          * (BYTE5(v42)
           + 37
           * (BYTE4(v42)
            + 37 * (BYTE3(v42) + 37 * (BYTE2(v42) + 37 * (BYTE1(v42) + 37 * ((unsigned __int8)v42 + 11623883)))))))
         + HIBYTE(v42)) & ((v25 >> 5) - 1);
    *(_QWORD *)v9 = *(_QWORD *)(v27 + 8 * v28);
    *(_QWORD *)(v27 + 8 * v28) = v9;
    ++*(_DWORD *)v24;
    SessionId = -1;
    if ( *(_QWORD *)(BugCheckParameter2 + 32) == *a2 )
      *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
  }
LABEL_17:
  if ( !v51 )
  {
    if ( a3 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
      v44[0] = 0;
      v15 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v15->ApcState.Process);
      --v15->SpecialApcDisable;
      v16 = ++v15->AbAllocationRegionCount;
      v17 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v18 = !_BitScanReverse((unsigned int *)&v19, v17);
        v44[1] = v19;
        if ( v18 )
          break;
        v20 = 1 << v19;
        v21 = v19;
        v22 = &v15->LockEntries[v21];
        v17 &= ~v20;
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
                KiAbEntryRemoveFromTree(&v15->LockEntries[v21].TreeNode);
              v44[0] = v22->BoostBitmap.AllFields & 0x1FFFF;
              v22->BoostBitmap.AllFields &= 0xFFFE0000;
              v22->ThreadLocalFlags &= ~1u;
              v22->LockState.0 = 0LL;
              v23 = ((char *)v22 - (char *)v15 - 800) / 96;
              if ( v16 == 1 )
                v15->AbEntrySummary |= 1 << v23;
              else
                _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v23);
              goto LABEL_43;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v15, BugCheckParameter2, SessionId, 0LL);
LABEL_43:
      --v15->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v15, BugCheckParameter2, v44);
      v18 = v15->SpecialApcDisable++ == -1;
      if ( v18 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
        KiCheckForKernelApcDelivery();
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
