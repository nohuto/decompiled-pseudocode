/*
 * XREFs of ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14014E3BC
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14014D8C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14014E210 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14014DC88 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14014DFB4 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14014E83C (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14014E874 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14014EA54 (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14014EAD0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
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
  __int64 v22; // rcx
  int v23; // r12d
  int v24; // eax
  __int64 v25; // r9
  struct _KTHREAD *v26; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v28; // r14
  __int64 v29; // rdx
  bool v30; // zf
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  _KLOCK_ENTRY *v34; // rdi
  __int64 v35; // rdx
  $FFD56A4B518EFE5E17FDE2C5CC486782 *v36; // rcx
  struct _KTHREAD *v37; // rax
  struct _KTHREAD *v38; // rdi
  __int64 v39; // rdx
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
  int v54; // [rsp+38h] [rbp-C8h] BYREF
  int v55; // [rsp+3Ch] [rbp-C4h]
  __int64 v56; // [rsp+40h] [rbp-C0h] BYREF
  int v57; // [rsp+48h] [rbp-B8h]
  int v58; // [rsp+4Ch] [rbp-B4h]
  unsigned int v59; // [rsp+54h] [rbp-ACh]
  int v60; // [rsp+58h] [rbp-A8h]
  __int16 Object; // [rsp+60h] [rbp-A0h] BYREF
  char v62; // [rsp+62h] [rbp-9Eh]
  int v63; // [rsp+64h] [rbp-9Ch]
  _QWORD v64[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v65; // [rsp+78h] [rbp-88h]
  LARGE_INTEGER Timeout; // [rsp+80h] [rbp-80h] BYREF
  __int64 v67; // [rsp+88h] [rbp-78h]
  __int64 v68; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v69; // [rsp+98h] [rbp-68h]
  __int64 v70; // [rsp+A0h] [rbp-60h]
  _QWORD v71[5]; // [rsp+B0h] [rbp-50h] BYREF
  char v72; // [rsp+D8h] [rbp-28h] BYREF

  v65 = a2;
  v70 = a5;
  v55 = a3;
  v9 = a4;
  v59 = a4;
  v67 = a6;
  memset(v71, 0, sizeof(v71));
  v10 = *a2;
  v71[0] = &v72;
  v71[3] = 0x800000000LL;
  v56 = 0x1000000000000LL;
  v11 = a7 & 2;
  WORD2(v56) = v9;
  v58 = v11;
  v12 = a1 + 440;
  v13 = 0;
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
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v17,
      &v68,
      v71);
    if ( !v68 )
      break;
    v20 = v69 + 8;
    v21 = (unsigned __int16)*(_DWORD *)v68 + 2LL;
    v69 = v20;
    if ( v20 >= v68 + 8 * v21 )
    {
      v22 = *(_QWORD *)(v68 + 8);
      if ( v22 )
      {
        v68 = *(_QWORD *)(v68 + 8);
        v69 = v22 + 16;
      }
      v20 = (v22 + 16) & -(__int64)(v22 != 0);
    }
    if ( !v20 || v18 < *(_DWORD *)v20 && v19 < *(_DWORD *)v20 )
      break;
    if ( (*(_BYTE *)(v20 + 7) & 1) != 0 )
    {
      v16 = -1073740747;
      goto LABEL_15;
    }
    if ( v13 || (a7 & 1) == 0 )
      goto LABEL_15;
    Object = 0;
    v64[1] = v64;
    v64[0] = v64;
    *(_QWORD *)(a1 + 1656) = &Object;
    v62 = 6;
    v63 = 0;
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
      v39 = (unsigned int)MiGetSystemRegionType(a1 + 440) == 1
          ? (unsigned int)MmGetSessionIdEx((__int64)v38->ApcState.Process)
          : 0xFFFFFFFFLL;
      --v38->SpecialApcDisable;
      v40 = ++v38->AbAllocationRegionCount;
      v41 = ((char)v38->AbEntrySummary | (char)v38->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v30 = !_BitScanReverse((unsigned int *)&v42, v41);
        v57 = v42;
        if ( v30 )
          goto LABEL_66;
        v43 = 1 << v42;
        v44 = v42;
        v45 = &v38->LockEntries[v44];
        v41 &= ~v43;
        if ( (v45->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v45->LockState.0 & 1) == 0
          && (*(_QWORD *)&v45->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
          && v45->LockState.SessionId == (_DWORD)v39 )
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
          KeBugCheckEx(0x162u, (ULONG_PTR)v38, a1 + 440, (unsigned int)v39, 0LL);
        goto LABEL_78;
      }
      v45->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v45->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v38->LockEntries[v44].TreeNode, v39);
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
      KiAbThreadRemoveBoosts((ULONG_PTR)v38, a1 + 440, (__int64)&v52);
      v30 = v38->SpecialApcDisable++ == -1;
      if ( v30 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v38->ApcState.ApcListHead[0].Flink != &v38->152 )
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
      goto LABEL_15;
    v13 = 1;
  }
  if ( v11 )
  {
    v16 = 0;
  }
  else
  {
    v23 = 0;
    while ( 1 )
    {
      LODWORD(v56) = v10;
      v24 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
              a1 + 448,
              v10,
              v71);
      v16 = v24;
      if ( v24 == -1073741275 )
      {
        v16 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
                (__int64 *)(a1 + 448),
                (__int64)v71,
                &v56);
      }
      else if ( v24 >= 0 )
      {
        v16 = -1073741484;
      }
      if ( v16 < 0 )
        break;
      if ( ++v23 == v55 )
      {
        SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(v67, a1, v59, v70);
        v16 = 0;
        goto LABEL_26;
      }
      ++v10;
    }
    if ( v23 )
      SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(a1, v65, v23, v25, 2);
  }
LABEL_15:
  if ( v11 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 440));
    KeAbPostRelease(a1 + 440);
  }
  else
  {
LABEL_26:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
    v54 = 0;
    v26 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)v26->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v26->SpecialApcDisable;
    v28 = ++v26->AbAllocationRegionCount;
    LODWORD(v29) = ((char)v26->AbEntrySummary | (char)v26->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v30 = !_BitScanReverse((unsigned int *)&v31, v29);
      v60 = v31;
      if ( v30 )
        break;
      v32 = 1 << v31;
      v33 = v31;
      v34 = &v26->LockEntries[v33];
      v29 = ~v32 & (unsigned int)v29;
      if ( (v34->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v34->LockState.0 & 1) == 0
        && (*(_QWORD *)&v34->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
        && v34->LockState.SessionId == (_DWORD)SessionId )
      {
        v34->AcquiredByte &= ~1u;
        if ( v34->LockState.0 )
        {
          if ( v34 )
          {
            v34->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v34->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v26->LockEntries[v33].TreeNode, v29);
            v54 = 0;
            v54 = v34->BoostBitmap.AllFields & 0x1FFFF;
            v34->BoostBitmap.AllFields &= 0xFFFE0000;
            v34->ThreadLocalFlags &= ~1u;
            v34->LockState.0 = 0LL;
            v35 = ((char *)v34 - (char *)v26 - 800) / 96;
            if ( v28 == 1 )
              v26->AbEntrySummary |= 1 << v35;
            else
              _InterlockedOr8((volatile signed __int8 *)&v26->AbOrphanedEntrySummary, 1 << v35);
            goto LABEL_42;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v26->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v26, v12, SessionId, 0LL);
LABEL_42:
    --v26->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v26, v12, (__int64)&v54);
    v30 = v26->SpecialApcDisable++ == -1;
    if ( v30 )
    {
      v36 = &v26->152;
      if ( ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v36->ApcState.ApcListHead[0].Flink != v36 )
        KiCheckForKernelApcDelivery((__int64)v36);
    }
  }
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v16;
}
