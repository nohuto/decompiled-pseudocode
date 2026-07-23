/*
 * XREFs of ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401049B0
 * Callers:
 *     ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140104990 (-SmStWorkerThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140012650 (KeSetActualBasePriorityThread.c)
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MiChargeResident @ 0x1400A75A8 (MiChargeResident.c)
 *     IoSetThreadHardErrorMode @ 0x1400E50E0 (IoSetThreadHardErrorMode.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140105264 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmSetThreadPagePriority @ 0x1401052F8 (SmSetThreadPagePriority.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140105E9C (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x140149A74 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14014DC30 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14014F96C (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x1401572CC (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140323E80 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorker(__int64 *a1)
{
  __int64 v1; // rbx
  int v3; // r12d
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // edi
  struct _KTHREAD *v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  struct _KTHREAD *v12; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v14; // r13
  unsigned int v15; // r8d
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  _DWORD *v21; // r15
  NTSTATUS v22; // eax
  NTSTATUS v23; // ecx
  __int64 v24; // rax
  struct _KTHREAD *v25; // rdi
  unsigned int v26; // edx
  unsigned __int8 v27; // r15
  unsigned int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r10
  __int64 result; // rax
  __int64 UnbiasedInterruptTime; // rax
  struct _KTHREAD *v36; // rdi
  unsigned int v37; // edx
  unsigned __int8 v38; // r15
  unsigned int v39; // r8d
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  _DWORD v44[4]; // [rsp+40h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-28h] BYREF
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-20h] BYREF
  PVOID Object[3]; // [rsp+60h] [rbp-18h] BYREF
  int v48; // [rsp+C0h] [rbp+48h] BYREF
  int v49; // [rsp+C8h] [rbp+50h] BYREF
  int v50; // [rsp+D0h] [rbp+58h] BYREF
  int v51; // [rsp+D8h] [rbp+60h] BYREF

  v1 = *a1;
  Interval.QuadPart = 0LL;
  v3 = 0;
  IoSetThreadHardErrorMode(0);
  CurrentThread = KeGetCurrentThread();
  v4 = *(unsigned __int8 *)(v1 + 6022);
  if ( (_DWORD)v4 == 4 )
    v5 = *(unsigned int *)(v1 + 6712);
  else
    v5 = (unsigned int)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition[v4];
  KeSetActualBasePriorityThread((__int64)CurrentThread, v5);
  v6 = 0;
  v7 = 0;
  if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
  {
    SmSetThreadPagePriority(&CurrentThread, 0LL);
    v8 = KeGetCurrentThread();
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, 0x1AuLL, 1024LL) )
    {
      --v8->SpecialApcDisable;
      LOBYTE(v8[1].Queue) |= 4u;
    }
    else
    {
      v3 = -1073741670;
    }
    v6 = v3;
    v7 = v3;
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
    v3 = v3 >= 0;
  }
  *((_DWORD *)a1 + 8) = v6;
  KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v7 >= 0 )
  {
    Object[0] = (PVOID)(v1 + 6128);
    v9 = v1 + 6584;
    Object[1] = (PVOID)(v1 + 6152);
    while ( 1 )
    {
      while ( 1 )
      {
        v22 = KeWaitForMultipleObjects(
                2u,
                Object,
                WaitAny,
                Executive,
                0,
                0,
                (PLARGE_INTEGER)(v9 & -(__int64)(*(_QWORD *)v9 != 0LL)),
                0LL);
        v50 = v22;
        v23 = v22;
        if ( v22 >= 2 )
          break;
LABEL_38:
        if ( v23 )
        {
          if ( v23 == 1 )
            goto LABEL_65;
LABEL_36:
          v9 = v1 + 6584;
        }
        else
        {
          KeResetEvent((PRKEVENT)Object[0]);
          v24 = SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, v44);
          v9 = v1 + 6584;
          v21 = (_DWORD *)v24;
          if ( v24 )
          {
            while ( 1 )
            {
              SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1, v9);
              LOBYTE(v10) = *(_BYTE *)(v1 + 6021);
              if ( (v10 & 1) == 0 || v44[0] )
              {
                if ( (v10 & 2) == 0 || (*v21 & 7) != 0 )
                  v11 = ST_STORE<SM_TRAITS>::StWorkItemProcess(v1, v21);
                else
                  v11 = -1073741058;
                v50 = v11;
                if ( v11 != 259 )
                {
                  if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
                  {
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 6024));
                    v49 = 0;
                    v12 = KeGetCurrentThread();
                    if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
                      SessionId = MmGetSessionIdEx((__int64)v12->ApcState.Process);
                    else
                      SessionId = -1;
                    --v12->SpecialApcDisable;
                    v14 = ++v12->AbAllocationRegionCount;
                    v15 = ((char)v12->AbEntrySummary | (char)v12->AbOrphanedEntrySummary) ^ 0x3F;
                    while ( 1 )
                    {
                      v16 = !_BitScanReverse((unsigned int *)&v17, v15);
                      v44[2] = v17;
                      if ( v16 )
                        break;
                      v18 = (__int64)&v12->LockEntries[v17];
                      v15 &= ~(1 << v17);
                      if ( (*(_BYTE *)(v18 + 26) & 1) != 0
                        && (*(_DWORD *)(v18 + 32) & 1) == 0
                        && (*(_QWORD *)(v18 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
                        && *(_DWORD *)(v18 + 40) == SessionId )
                      {
                        *(_BYTE *)(v18 + 26) &= ~1u;
                        if ( *(_QWORD *)(v18 + 32) )
                        {
                          if ( v18 )
                          {
                            *(_BYTE *)(v18 + 32) |= 2u;
                            if ( *(__int64 *)(v18 + 32) < 0 )
                              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v18);
                            v49 = 0;
                            v49 = *(_DWORD *)(v18 + 88) & 0x1FFFF;
                            *(_DWORD *)(v18 + 88) &= 0xFFFE0000;
                            *(_BYTE *)(v18 + 25) &= ~1u;
                            *(_QWORD *)(v18 + 32) = 0LL;
                            v19 = (v18 - (__int64)v12 - 800) / 96;
                            if ( v14 == 1 )
                              v12->AbEntrySummary |= 1 << v19;
                            else
                              _InterlockedOr8((volatile signed __int8 *)&v12->AbOrphanedEntrySummary, 1 << v19);
                            goto LABEL_30;
                          }
                          break;
                        }
                      }
                    }
                    if ( (*((_DWORD *)&v12->0 + 1) & 0x10000) == 0 )
                      KeBugCheckEx(0x162u, (ULONG_PTR)v12, v1 + 6024, SessionId, 0LL);
LABEL_30:
                    --v12->AbAllocationRegionCount;
                    KiAbThreadRemoveBoosts((ULONG_PTR)v12, v1 + 6024, &v49);
                    v16 = v12->SpecialApcDisable++ == -1;
                    if ( v16 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
                      KiCheckForKernelApcDelivery(v20);
                    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
                  }
                  SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(v10, v1, v21, &v50);
                  goto LABEL_35;
                }
              }
              else
              {
                v50 = -1073741058;
                ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(v1, v21);
              }
              if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 6024));
                v51 = 0;
                v25 = KeGetCurrentThread();
                if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
                  v26 = MmGetSessionIdEx((__int64)v25->ApcState.Process);
                else
                  v26 = -1;
                --v25->SpecialApcDisable;
                v27 = ++v25->AbAllocationRegionCount;
                v28 = ((char)v25->AbEntrySummary | (char)v25->AbOrphanedEntrySummary) ^ 0x3F;
                while ( 1 )
                {
                  v16 = !_BitScanReverse((unsigned int *)&v29, v28);
                  v44[3] = v29;
                  if ( v16 )
                    break;
                  v30 = (__int64)&v25->LockEntries[v29];
                  v28 &= ~(1 << v29);
                  if ( (*(_BYTE *)(v30 + 26) & 1) != 0
                    && (*(_DWORD *)(v30 + 32) & 1) == 0
                    && (*(_QWORD *)(v30 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
                    && *(_DWORD *)(v30 + 40) == v26 )
                  {
                    *(_BYTE *)(v30 + 26) &= ~1u;
                    if ( *(_QWORD *)(v30 + 32) )
                    {
                      if ( v30 )
                      {
                        *(_BYTE *)(v30 + 32) |= 2u;
                        if ( *(__int64 *)(v30 + 32) < 0 )
                          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v30);
                        v51 = 0;
                        v51 = *(_DWORD *)(v30 + 88) & 0x1FFFF;
                        *(_DWORD *)(v30 + 88) &= 0xFFFE0000;
                        *(_BYTE *)(v30 + 25) &= ~1u;
                        *(_QWORD *)(v30 + 32) = 0LL;
                        v31 = (v30 - (__int64)v25 - 800) / 96;
                        if ( v27 == 1 )
                          v25->AbEntrySummary |= 1 << v31;
                        else
                          _InterlockedOr8((volatile signed __int8 *)&v25->AbOrphanedEntrySummary, 1 << v31);
                        goto LABEL_60;
                      }
                      break;
                    }
                  }
                }
                if ( (*((_DWORD *)&v25->0 + 1) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v25, v1 + 6024, v26, 0LL);
LABEL_60:
                --v25->AbAllocationRegionCount;
                KiAbThreadRemoveBoosts((ULONG_PTR)v25, v1 + 6024, &v51);
                v16 = v25->SpecialApcDisable++ == -1;
                if ( v16 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
                  KiCheckForKernelApcDelivery(v32);
                KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
              }
LABEL_35:
              v21 = (_DWORD *)SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, v44);
              if ( !v21 )
                goto LABEL_36;
            }
          }
        }
      }
      v9 = v1 + 6584;
      if ( v22 == 258 )
      {
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1, v9);
        ST_STORE<SM_TRAITS>::StDrainReadContextList(v1);
        *(_QWORD *)(v1 + 5928) += *(_QWORD *)(v1 + 5920);
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
        ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(v1 + 5744, UnbiasedInterruptTime);
        if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 6024));
          v48 = 0;
          v36 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
            v37 = MmGetSessionIdEx((__int64)v36->ApcState.Process);
          else
            v37 = -1;
          --v36->SpecialApcDisable;
          v38 = ++v36->AbAllocationRegionCount;
          v39 = ((char)v36->AbEntrySummary | (char)v36->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v16 = !_BitScanReverse((unsigned int *)&v40, v39);
            v44[1] = v40;
            if ( v16 )
              break;
            v41 = (__int64)&v36->LockEntries[v40];
            v39 &= ~(1 << v40);
            if ( (*(_BYTE *)(v41 + 26) & 1) != 0
              && (*(_DWORD *)(v41 + 32) & 1) == 0
              && (*(_QWORD *)(v41 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v41 + 40) == v37 )
            {
              *(_BYTE *)(v41 + 26) &= ~1u;
              if ( *(_QWORD *)(v41 + 32) )
              {
                if ( v41 )
                {
                  *(_BYTE *)(v41 + 32) |= 2u;
                  if ( *(__int64 *)(v41 + 32) < 0 )
                    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v41);
                  v48 = 0;
                  v48 = *(_DWORD *)(v41 + 88) & 0x1FFFF;
                  *(_DWORD *)(v41 + 88) &= 0xFFFE0000;
                  *(_BYTE *)(v41 + 25) &= ~1u;
                  *(_QWORD *)(v41 + 32) = 0LL;
                  v42 = (v41 - (__int64)v36 - 800) / 96;
                  if ( v38 == 1 )
                    v36->AbEntrySummary |= 1 << v42;
                  else
                    _InterlockedOr8((volatile signed __int8 *)&v36->AbOrphanedEntrySummary, 1 << v42);
                  goto LABEL_90;
                }
                break;
              }
            }
          }
          if ( (*((_DWORD *)&v36->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v36, v1 + 6024, v37, 0LL);
LABEL_90:
          --v36->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v36, v1 + 6024, &v48);
          v16 = v36->SpecialApcDisable++ == -1;
          if ( v16 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v36->ApcState.ApcListHead[0].Flink != &v36->152 )
            KiCheckForKernelApcDelivery(v43);
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        }
        v23 = 0;
        goto LABEL_38;
      }
    }
  }
LABEL_65:
  if ( v3 )
  {
    MiReturnResidentAvailable(0x1AuLL);
    *(_BYTE *)(v33 + 1768) &= ~4u;
    KiLeaveGuardedRegionUnsafe(v33);
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
