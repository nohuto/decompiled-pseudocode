/*
 * XREFs of ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011E350
 * Callers:
 *     ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011E330 (-SmStWorkerThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCFC0 (KeSetActualBasePriorityThread.c)
 *     IoSetThreadHardErrorMode @ 0x1400EEDD0 (IoSetThreadHardErrorMode.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011E2AC (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011EBE8 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmSetThreadPagePriority @ 0x14011EC7C (SmSetThreadPagePriority.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14014544C (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401489BC (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14014C7BC (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x140153CA4 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1403066A0 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorker(__int64 *a1)
{
  __int64 v1; // rdi
  int v3; // r12d
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // ebx
  struct _KTHREAD *v9; // rbx
  unsigned __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  _DWORD *v18; // r15
  NTSTATUS v19; // eax
  NTSTATUS v20; // ecx
  __int64 v21; // rax
  int v22; // eax
  struct _KTHREAD *v23; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v25; // r13
  struct _KTHREAD *v26; // rbx
  __int64 result; // rax
  struct _KTHREAD *v28; // rbx
  __int64 v29; // rdx
  unsigned __int8 v30; // r15
  unsigned int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 UnbiasedInterruptTime; // rax
  struct _KTHREAD *v37; // rbx
  __int64 v38; // rdx
  unsigned __int8 v39; // r15
  unsigned int v40; // r8d
  __int64 v41; // rcx
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  _DWORD v45[4]; // [rsp+40h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-28h] BYREF
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-20h] BYREF
  PVOID Object[3]; // [rsp+60h] [rbp-18h] BYREF
  int v49; // [rsp+C0h] [rbp+48h] BYREF
  int v50; // [rsp+C8h] [rbp+50h] BYREF
  int v51; // [rsp+D0h] [rbp+58h] BYREF
  int v52; // [rsp+D8h] [rbp+60h] BYREF

  v1 = *a1;
  v3 = 0;
  IoSetThreadHardErrorMode(0);
  CurrentThread = KeGetCurrentThread();
  v5 = *(unsigned __int8 *)(v1 + 6022);
  if ( (_DWORD)v5 == 4 )
    v6 = *(unsigned int *)(v1 + 6712);
  else
    v6 = (unsigned int)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition[v5];
  KeSetActualBasePriorityThread((__int64)CurrentThread, v6, v4);
  v7 = 0;
  v8 = 0;
  if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
  {
    SmSetThreadPagePriority(&CurrentThread, 0LL);
    v9 = KeGetCurrentThread();
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, 0x1AuLL, 1024LL) )
    {
      --v9->SpecialApcDisable;
      LOBYTE(v9[1].Queue) |= 4u;
    }
    else
    {
      v3 = -1073741670;
    }
    v7 = v3;
    v8 = v3;
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
    v3 = v3 >= 0;
  }
  *((_DWORD *)a1 + 8) = v7;
  KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v8 >= 0 )
  {
    Object[0] = (PVOID)(v1 + 6128);
    v10 = v1 + 6584;
    Object[1] = (PVOID)(v1 + 6152);
    while ( 1 )
    {
      while ( 1 )
      {
        v19 = KeWaitForMultipleObjects(
                2u,
                Object,
                WaitAny,
                Executive,
                0,
                0,
                (PLARGE_INTEGER)(v10 & -(__int64)(*(_QWORD *)v10 != 0LL)),
                0LL);
        v51 = v19;
        v20 = v19;
        if ( v19 >= 2 )
          break;
LABEL_28:
        if ( v20 )
        {
          if ( v20 == 1 )
            goto LABEL_43;
LABEL_26:
          v10 = v1 + 6584;
        }
        else
        {
          KeResetEvent((PRKEVENT)Object[0]);
          v21 = SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, v45);
          v10 = v1 + 6584;
          v18 = (_DWORD *)v21;
          if ( v21 )
          {
            while ( 1 )
            {
              SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
              LOBYTE(v17) = *(_BYTE *)(v1 + 6021);
              if ( (v17 & 1) == 0 || v45[0] )
              {
                if ( (v17 & 2) == 0 || (*v18 & 7) != 0 )
                  v22 = ST_STORE<SM_TRAITS>::StWorkItemProcess(v1, v18);
                else
                  v22 = -1073741058;
                v51 = v22;
                if ( v22 != 259 )
                {
                  if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
                  {
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 6024));
                    v50 = 0;
                    v23 = KeGetCurrentThread();
                    if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
                      SessionId = (unsigned int)MmGetSessionIdEx((__int64)v23->ApcState.Process);
                    else
                      SessionId = 0xFFFFFFFFLL;
                    --v23->SpecialApcDisable;
                    v25 = ++v23->AbAllocationRegionCount;
                    v14 = ((char)v23->AbEntrySummary | (char)v23->AbOrphanedEntrySummary) ^ 0x3F;
                    while ( 1 )
                    {
                      v11 = !_BitScanReverse((unsigned int *)&v12, v14);
                      v45[2] = v12;
                      if ( v11 )
                        break;
                      v13 = (__int64)&v23->LockEntries[v12];
                      v14 &= ~(1 << v12);
                      if ( (*(_BYTE *)(v13 + 26) & 1) != 0
                        && (*(_DWORD *)(v13 + 32) & 1) == 0
                        && (*(_QWORD *)(v13 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
                        && *(_DWORD *)(v13 + 40) == (_DWORD)SessionId )
                      {
                        *(_BYTE *)(v13 + 26) &= ~1u;
                        if ( *(_QWORD *)(v13 + 32) )
                        {
                          if ( v13 )
                          {
                            *(_BYTE *)(v13 + 32) |= 2u;
                            if ( *(__int64 *)(v13 + 32) < 0 )
                              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v13, SessionId);
                            v50 = 0;
                            v50 = *(_DWORD *)(v13 + 88) & 0x1FFFF;
                            *(_DWORD *)(v13 + 88) &= 0xFFFE0000;
                            *(_BYTE *)(v13 + 25) &= ~1u;
                            *(_QWORD *)(v13 + 32) = 0LL;
                            v15 = (v13 - (__int64)v23 - 800) / 96;
                            if ( v25 == 1 )
                              v23->AbEntrySummary |= 1 << v15;
                            else
                              _InterlockedOr8((volatile signed __int8 *)&v23->AbOrphanedEntrySummary, 1 << v15);
                            goto LABEL_20;
                          }
                          break;
                        }
                      }
                    }
                    if ( (*((_DWORD *)&v23->0 + 1) & 0x10000) == 0 )
                      KeBugCheckEx(0x162u, (ULONG_PTR)v23, v1 + 6024, (unsigned int)SessionId, 0LL);
LABEL_20:
                    --v23->AbAllocationRegionCount;
                    KiAbThreadRemoveBoosts((ULONG_PTR)v23, v1 + 6024, (__int64)&v50);
                    v11 = v23->SpecialApcDisable++ == -1;
                    if ( v11 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v23->ApcState.ApcListHead[0].Flink != &v23->152 )
                      KiCheckForKernelApcDelivery(v16);
                    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
                  }
                  SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(v17, v1, v18, &v51);
                  goto LABEL_25;
                }
              }
              else
              {
                v51 = -1073741058;
                ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(v1, v18);
              }
              if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 6024));
                v52 = 0;
                v28 = KeGetCurrentThread();
                if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
                  v29 = (unsigned int)MmGetSessionIdEx((__int64)v28->ApcState.Process);
                else
                  v29 = 0xFFFFFFFFLL;
                --v28->SpecialApcDisable;
                v30 = ++v28->AbAllocationRegionCount;
                v31 = ((char)v28->AbEntrySummary | (char)v28->AbOrphanedEntrySummary) ^ 0x3F;
                while ( 1 )
                {
                  v11 = !_BitScanReverse((unsigned int *)&v32, v31);
                  v45[3] = v32;
                  if ( v11 )
                    break;
                  v33 = (__int64)&v28->LockEntries[v32];
                  v31 &= ~(1 << v32);
                  if ( (*(_BYTE *)(v33 + 26) & 1) != 0
                    && (*(_DWORD *)(v33 + 32) & 1) == 0
                    && (*(_QWORD *)(v33 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
                    && *(_DWORD *)(v33 + 40) == (_DWORD)v29 )
                  {
                    *(_BYTE *)(v33 + 26) &= ~1u;
                    if ( *(_QWORD *)(v33 + 32) )
                    {
                      if ( v33 )
                      {
                        *(_BYTE *)(v33 + 32) |= 2u;
                        if ( *(__int64 *)(v33 + 32) < 0 )
                          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v33, v29);
                        v52 = 0;
                        v52 = *(_DWORD *)(v33 + 88) & 0x1FFFF;
                        *(_DWORD *)(v33 + 88) &= 0xFFFE0000;
                        *(_BYTE *)(v33 + 25) &= ~1u;
                        *(_QWORD *)(v33 + 32) = 0LL;
                        v34 = (v33 - (__int64)v28 - 800) / 96;
                        if ( v30 == 1 )
                          v28->AbEntrySummary |= 1 << v34;
                        else
                          _InterlockedOr8((volatile signed __int8 *)&v28->AbOrphanedEntrySummary, 1 << v34);
                        goto LABEL_65;
                      }
                      break;
                    }
                  }
                }
                if ( (*((_DWORD *)&v28->0 + 1) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v28, v1 + 6024, (unsigned int)v29, 0LL);
LABEL_65:
                --v28->AbAllocationRegionCount;
                KiAbThreadRemoveBoosts((ULONG_PTR)v28, v1 + 6024, (__int64)&v52);
                v11 = v28->SpecialApcDisable++ == -1;
                if ( v11 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v28->ApcState.ApcListHead[0].Flink != &v28->152 )
                  KiCheckForKernelApcDelivery(v35);
                KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
              }
LABEL_25:
              v18 = (_DWORD *)SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, v45);
              if ( !v18 )
                goto LABEL_26;
            }
          }
        }
      }
      v10 = v1 + 6584;
      if ( v19 == 258 )
      {
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
        ST_STORE<SM_TRAITS>::StDrainReadContextList((_SLIST_HEADER *)v1);
        *(_QWORD *)(v1 + 5928) += *(_QWORD *)(v1 + 5920);
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
        ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(v1 + 5744, UnbiasedInterruptTime);
        if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 6024));
          v49 = 0;
          v37 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
            v38 = (unsigned int)MmGetSessionIdEx((__int64)v37->ApcState.Process);
          else
            v38 = 0xFFFFFFFFLL;
          --v37->SpecialApcDisable;
          v39 = ++v37->AbAllocationRegionCount;
          v40 = ((char)v37->AbEntrySummary | (char)v37->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v11 = !_BitScanReverse((unsigned int *)&v41, v40);
            v45[1] = v41;
            if ( v11 )
              break;
            v42 = (__int64)&v37->LockEntries[v41];
            v40 &= ~(1 << v41);
            if ( (*(_BYTE *)(v42 + 26) & 1) != 0
              && (*(_DWORD *)(v42 + 32) & 1) == 0
              && (*(_QWORD *)(v42 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v42 + 40) == (_DWORD)v38 )
            {
              *(_BYTE *)(v42 + 26) &= ~1u;
              if ( *(_QWORD *)(v42 + 32) )
              {
                if ( v42 )
                {
                  *(_BYTE *)(v42 + 32) |= 2u;
                  if ( *(__int64 *)(v42 + 32) < 0 )
                    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v42, v38);
                  v49 = 0;
                  v49 = *(_DWORD *)(v42 + 88) & 0x1FFFF;
                  *(_DWORD *)(v42 + 88) &= 0xFFFE0000;
                  *(_BYTE *)(v42 + 25) &= ~1u;
                  *(_QWORD *)(v42 + 32) = 0LL;
                  v43 = (v42 - (__int64)v37 - 800) / 96;
                  if ( v39 == 1 )
                    v37->AbEntrySummary |= 1 << v43;
                  else
                    _InterlockedOr8((volatile signed __int8 *)&v37->AbOrphanedEntrySummary, 1 << v43);
                  goto LABEL_89;
                }
                break;
              }
            }
          }
          if ( (*((_DWORD *)&v37->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v37, v1 + 6024, (unsigned int)v38, 0LL);
LABEL_89:
          --v37->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v37, v1 + 6024, (__int64)&v49);
          v11 = v37->SpecialApcDisable++ == -1;
          if ( v11 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
            KiCheckForKernelApcDelivery(v44);
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        }
        v20 = 0;
        goto LABEL_28;
      }
    }
  }
LABEL_43:
  if ( v3 )
  {
    v26 = KeGetCurrentThread();
    MiReturnResidentAvailable(0x1AuLL);
    LOBYTE(v26[1].Queue) &= ~4u;
    KiLeaveGuardedRegionUnsafe((__int64)v26);
  }
  Interval.QuadPart = -150000LL;
  while ( 1 )
  {
    result = *(unsigned int *)(v1 + 6716);
    if ( !(_DWORD)result )
      break;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
