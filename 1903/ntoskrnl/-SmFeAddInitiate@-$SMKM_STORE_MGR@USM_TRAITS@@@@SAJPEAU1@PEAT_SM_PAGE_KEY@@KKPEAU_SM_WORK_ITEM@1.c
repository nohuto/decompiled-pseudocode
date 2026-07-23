/*
 * XREFs of ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14014BD88
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14014B260 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14014BBD4 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14014B608 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14014B984 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14014C230 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14014C260 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14014C42C (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14014C5E8 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(
        __int64 a1,
        unsigned int *a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int16 v9; // si
  unsigned int v10; // ebx
  int v11; // r14d
  ULONG_PTR v12; // rsi
  int v13; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v16; // r15d
  __int64 v17; // rcx
  unsigned int v18; // r9d
  unsigned int v19; // r10d
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // r12d
  int v23; // eax
  __int64 v24; // r9
  struct _KTHREAD *v25; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v27; // r14
  unsigned int v28; // edx
  bool v29; // zf
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  _KLOCK_ENTRY *v33; // rdi
  __int64 v34; // rdx
  $6EAC78A6FCFADE0A5FA44F358736B38F *v35; // rcx
  __int64 v36; // rcx
  struct _KTHREAD *v37; // rax
  struct _KTHREAD *v38; // rdi
  unsigned int v39; // edx
  unsigned __int8 v40; // r12
  unsigned int v41; // r8d
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  _KLOCK_ENTRY *v45; // r14
  __int64 v46; // rdx
  NTSTATUS v47; // eax
  struct _KTHREAD *v48; // rcx
  NTSTATUS v49; // edi
  ULONG_PTR v50; // rcx
  unsigned int v51; // ecx
  int v52; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v53; // [rsp+34h] [rbp-CCh] BYREF
  int v54; // [rsp+38h] [rbp-C8h]
  int v55; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v56; // [rsp+40h] [rbp-C0h] BYREF
  int v57; // [rsp+48h] [rbp-B8h]
  int v58; // [rsp+4Ch] [rbp-B4h]
  unsigned int v59; // [rsp+54h] [rbp-ACh]
  int v60; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER Timeout; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v63; // [rsp+70h] [rbp-90h]
  __int16 Object; // [rsp+78h] [rbp-88h] BYREF
  char v65; // [rsp+7Ah] [rbp-86h]
  int v66; // [rsp+7Ch] [rbp-84h]
  _QWORD v67[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int *v68; // [rsp+90h] [rbp-70h]
  __int64 v69; // [rsp+98h] [rbp-68h]
  __int64 v70; // [rsp+A0h] [rbp-60h]
  _QWORD v71[3]; // [rsp+B0h] [rbp-50h] BYREF
  int v72; // [rsp+C8h] [rbp-38h]
  int v73; // [rsp+CCh] [rbp-34h]
  __int64 v74; // [rsp+D0h] [rbp-30h]
  _BYTE v75[136]; // [rsp+D8h] [rbp-28h] BYREF

  v70 = a5;
  v54 = a3;
  v9 = a4;
  v68 = a2;
  v69 = a6;
  v59 = a4;
  memset(v75, 0, 0x80uLL);
  v10 = *a2;
  v56 = 0x1000000000000LL;
  v11 = a7 & 2;
  WORD2(v56) = v9;
  Timeout.QuadPart = 0LL;
  v12 = a1 + 440;
  v71[1] = 0LL;
  v13 = 0;
  v71[2] = 0LL;
  v74 = 0LL;
  v71[0] = v75;
  v72 = 0;
  v73 = 8;
  v58 = v11;
  if ( (a7 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(a1 + 440, 0LL);
    v53 = 2;
  }
  else if ( (a7 & 4) != 0 )
  {
    if ( !StLockTryAcquireExclusive(a1 + 440, &v53) )
      return 3221225557LL;
  }
  else
  {
    v37 = KeGetCurrentThread();
    --v37->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
    v53 = 1;
  }
  v16 = -1073740682;
  while ( 1 )
  {
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      a1 + 448,
      v10,
      v71);
    v62 = 0LL;
    v63 = 0LL;
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v17,
      &v62,
      v71);
    if ( !v62 )
      break;
    v20 = v63 + 8;
    v21 = (unsigned __int16)*(_DWORD *)v62 + 2LL;
    v63 = v20;
    if ( v20 >= v62 + 8 * v21 )
    {
      v36 = *(_QWORD *)(v62 + 8);
      if ( v36 )
      {
        v62 = *(_QWORD *)(v62 + 8);
        v63 = v36 + 16;
      }
      v20 = (v36 + 16) & -(__int64)(v36 != 0);
    }
    if ( !v20 || v18 < *(_DWORD *)v20 && v19 < *(_DWORD *)v20 )
      break;
    if ( (*(_BYTE *)(v20 + 7) & 1) != 0 )
    {
      v16 = -1073740747;
      goto LABEL_38;
    }
    if ( v13 || (a7 & 1) == 0 )
      goto LABEL_38;
    Object = 0;
    v67[1] = v67;
    v67[0] = v67;
    *(_QWORD *)(a1 + 1656) = &Object;
    v65 = 6;
    v66 = 0;
    *(_DWORD *)(a1 + 1648) = v10;
    if ( v11 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 440));
      KeAbPostRelease(a1 + 440);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
      v52 = 0;
      v38 = KeGetCurrentThread();
      v39 = (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 ? MmGetSessionIdEx((__int64)v38->ApcState.Process) : -1;
      --v38->SpecialApcDisable;
      v40 = ++v38->AbAllocationRegionCount;
      v41 = ((char)v38->AbEntrySummary | (char)v38->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v29 = !_BitScanReverse((unsigned int *)&v42, v41);
        v57 = v42;
        if ( v29 )
          goto LABEL_66;
        v43 = 1 << v42;
        v44 = v42;
        v45 = &v38->LockEntries[v44];
        v41 &= ~v43;
        if ( (v45->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v45->LockState.0 & 1) == 0
          && (*(_QWORD *)&v45->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
          && v45->LockState.SessionId == v39 )
        {
          v45->AcquiredByte &= ~1u;
          if ( v45->LockState.0 )
            break;
        }
      }
      if ( !v45 )
      {
LABEL_66:
        if ( (*((_DWORD *)&v38->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v38, a1 + 440, v39, 0LL);
        goto LABEL_78;
      }
      v45->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v45->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v38->LockEntries[v44].TreeNode);
      v52 = 0;
      v52 = v45->BoostBitmap.AllFields & 0x1FFFF;
      v45->BoostBitmap.AllFields &= 0xFFFE0000;
      v45->ThreadLocalFlags &= ~1u;
      v45->LockState.0 = 0LL;
      v46 = ((char *)v45 - (char *)v38 - 800) / 96;
      if ( v40 == 1 )
        v38->AbEntrySummary |= 1 << v46;
      else
        _InterlockedOr8((volatile signed __int8 *)&v38->AbOrphanedEntrySummary, 1 << v46);
LABEL_78:
      --v38->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v38, a1 + 440, &v52);
      v29 = v38->SpecialApcDisable++ == -1;
      if ( v29 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v38->ApcState.ApcListHead[0].Flink != &v38->152 )
        KiCheckForKernelApcDelivery(1LL);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      v11 = v58;
    }
    Timeout.QuadPart = -2500000LL;
    v47 = KeWaitForSingleObject(&Object, WrKernel, 0, 0, &Timeout);
    v48 = KeGetCurrentThread();
    v49 = v47;
    --v48->SpecialApcDisable;
    v50 = a1 + 440;
    if ( v11 )
    {
      ExAcquirePushLockSharedEx(v50, 0LL);
      v51 = 2;
    }
    else
    {
      ExAcquirePushLockExclusiveEx(v50, 0LL);
      v51 = 1;
    }
    v53 = v51;
    *(_QWORD *)(a1 + 1656) = 0LL;
    if ( v49 )
      goto LABEL_38;
    v13 = 1;
  }
  if ( v11 )
  {
    v16 = 0;
  }
  else
  {
    v22 = 0;
    while ( 1 )
    {
      LODWORD(v56) = v10;
      v23 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
              a1 + 448,
              v10,
              v71);
      v16 = v23;
      if ( v23 == -1073741275 )
      {
        v16 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
                (__int64 *)(a1 + 448),
                (__int64)v71,
                &v56);
      }
      else if ( v23 >= 0 )
      {
        v16 = -1073741484;
      }
      if ( v16 < 0 )
        break;
      if ( ++v22 == v54 )
      {
        SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(v69, a1, v59, v70);
        v16 = 0;
        goto LABEL_17;
      }
      ++v10;
    }
    if ( v22 )
      SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(a1, v68, v22, v24, 2);
  }
LABEL_38:
  if ( v11 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 440));
    KeAbPostRelease(a1 + 440);
  }
  else
  {
LABEL_17:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
    v55 = 0;
    v25 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)v25->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v25->SpecialApcDisable;
    v27 = ++v25->AbAllocationRegionCount;
    v28 = ((char)v25->AbEntrySummary | (char)v25->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v29 = !_BitScanReverse((unsigned int *)&v30, v28);
      v60 = v30;
      if ( v29 )
        break;
      v31 = 1 << v30;
      v32 = v30;
      v33 = &v25->LockEntries[v32];
      v28 &= ~v31;
      if ( (v33->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v33->LockState.0 & 1) == 0
        && (*(_QWORD *)&v33->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
        && v33->LockState.SessionId == (_DWORD)SessionId )
      {
        v33->AcquiredByte &= ~1u;
        if ( v33->LockState.0 )
        {
          if ( v33 )
          {
            v33->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v33->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v25->LockEntries[v32].TreeNode);
            v55 = v33->BoostBitmap.AllFields & 0x1FFFF;
            v33->BoostBitmap.AllFields &= 0xFFFE0000;
            v33->ThreadLocalFlags &= ~1u;
            v33->LockState.0 = 0LL;
            v34 = ((char *)v33 - (char *)v25 - 800) / 96;
            if ( v27 == 1 )
              v25->AbEntrySummary |= 1 << v34;
            else
              _InterlockedOr8((volatile signed __int8 *)&v25->AbOrphanedEntrySummary, 1 << v34);
            goto LABEL_33;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v25->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v25, v12, SessionId, 0LL);
LABEL_33:
    --v25->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v25, v12, &v55);
    v29 = v25->SpecialApcDisable++ == -1;
    if ( v29 )
    {
      v35 = &v25->152;
      if ( ($6EAC78A6FCFADE0A5FA44F358736B38F *)v35->ApcState.ApcListHead[0].Flink != v35 )
        KiCheckForKernelApcDelivery((__int64)v35);
    }
  }
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v16;
}
