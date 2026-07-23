/*
 * XREFs of ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14011CF54
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14011CEC0 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x14014C3DC (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14014E83C (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14014E874 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreDelete(__int64 a1, int a2)
{
  int v4; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // ebx
  struct _KTHREAD *v10; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v12; // r14
  unsigned int v13; // r8d
  bool v14; // zf
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  _KLOCK_ENTRY *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v22; // rcx
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-CCh]
  __int64 v28; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-C0h]
  int v30; // [rsp+48h] [rbp-B8h]
  _QWORD v31[5]; // [rsp+50h] [rbp-B0h] BYREF
  char v32; // [rsp+78h] [rbp-88h] BYREF

  memset(v31, 0, sizeof(v31));
  v31[3] = 0x800000000LL;
  v31[0] = &v32;
  v4 = 0;
  v27 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v6 = a1 + 440;
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 448);
  v28 = 0LL;
  v29 = 0LL;
  if ( v8 )
  {
    while ( !*(_BYTE *)(v8 + 3) )
      v8 = *(_QWORD *)(v8 + 8);
    v7 = v8;
    v28 = v8;
    v29 = v8 + 8;
  }
  v9 = v27;
  while ( 1 )
  {
    if ( v4 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        a1 + 448,
        v9,
        v31);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v22,
        &v28,
        v31);
      v7 = v28;
      v4 = 0;
    }
    if ( !v7 )
      break;
    v23 = v29 + 8;
    v24 = (unsigned __int16)*(_DWORD *)v7 + 2LL;
    v29 = v23;
    if ( v23 >= v7 + 8 * v24 )
    {
      v25 = *(_QWORD *)(v7 + 8);
      if ( v25 )
      {
        v28 = *(_QWORD *)(v7 + 8);
        v29 = v25 + 16;
        v7 = v25;
      }
      v23 = (v25 + 16) & -(__int64)(v25 != 0);
    }
    if ( !v23 )
      break;
    if ( *(unsigned __int16 *)(v23 + 4) == a2 )
    {
      v9 = *(_DWORD *)v23;
      *(_BYTE *)(v23 + 6) = 0;
      SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, v31, &v28);
      v7 = v28;
      v4 = 1;
    }
  }
  v27 = v9;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
  v26 = 0;
  v10 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v10->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v10->SpecialApcDisable;
  v12 = ++v10->AbAllocationRegionCount;
  v13 = ((char)v10->AbEntrySummary | (char)v10->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v15, v13);
    v30 = v15;
    if ( v14 )
      break;
    v16 = 1 << v15;
    v17 = v15;
    v18 = &v10->LockEntries[v17];
    v13 &= ~v16;
    if ( (v18->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v18->LockState.0 & 1) == 0
      && (*(_QWORD *)&v18->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v6 & 0x7FFFFFFFFFFFFFFCLL)
      && v18->LockState.SessionId == (_DWORD)SessionId )
    {
      v18->AcquiredByte &= ~1u;
      if ( v18->LockState.0 )
      {
        if ( v18 )
        {
          v18->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v18->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v10->LockEntries[v17].TreeNode, SessionId);
          v26 = 0;
          v26 = v18->BoostBitmap.AllFields & 0x1FFFF;
          v18->BoostBitmap.AllFields &= 0xFFFE0000;
          v18->ThreadLocalFlags &= ~1u;
          v18->LockState.0 = 0LL;
          v19 = ((char *)v18 - (char *)v10 - 800) / 96;
          if ( v12 == 1 )
            v10->AbEntrySummary |= 1 << v19;
          else
            _InterlockedOr8((volatile signed __int8 *)&v10->AbOrphanedEntrySummary, 1 << v19);
          goto LABEL_22;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v10->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v10, v6, (unsigned int)SessionId, 0LL);
LABEL_22:
  --v10->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v10, v6, (__int64)&v26);
  v14 = v10->SpecialApcDisable++ == -1;
  if ( v14 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery(v20);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
