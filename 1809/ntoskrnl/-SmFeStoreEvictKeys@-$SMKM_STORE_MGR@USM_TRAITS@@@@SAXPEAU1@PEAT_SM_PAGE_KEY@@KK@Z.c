/*
 * XREFs of ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140308634
 * Callers:
 *     ?SmEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140308590 (-SmEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU-$SMKM_STORE@USM_TRA.c)
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

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreEvictKeys(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v3; // ebx
  int v6; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v8; // r14d
  ULONG_PTR v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  struct _KTHREAD *v15; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v17; // r14
  unsigned int v18; // r8d
  int v19; // eax
  __int64 v20; // rcx
  _KLOCK_ENTRY *v21; // rdi
  bool v22; // zf
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v27; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-C0h]
  int v30; // [rsp+48h] [rbp-B8h]
  _QWORD v31[5]; // [rsp+50h] [rbp-B0h] BYREF
  char v32; // [rsp+78h] [rbp-88h] BYREF

  v3 = *a2;
  memset(v31, 0, sizeof(v31));
  v31[3] = 0x800000000LL;
  v31[0] = &v32;
  v6 = 0;
  CurrentThread = KeGetCurrentThread();
  v8 = 1;
  --CurrentThread->SpecialApcDisable;
  v9 = a1 + 440;
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  v10 = v28;
  while ( 1 )
  {
    if ( v8 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        (__int64 *)(a1 + 448),
        v3,
        (__int64)v31);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v11,
        &v28,
        (__int64)v31);
      v10 = v28;
      v8 = 0;
    }
    if ( v10 )
    {
      v12 = v29 + 8;
      v13 = (unsigned __int16)*(_DWORD *)v10 + 2LL;
      v29 = v12;
      if ( v12 >= v10 + 8 * v13 )
      {
        v14 = *(_QWORD *)(v10 + 8);
        if ( v14 )
        {
          v28 = *(_QWORD *)(v10 + 8);
          v29 = v14 + 16;
          v10 = v14;
        }
        v12 = (v14 + 16) & -(__int64)(v14 != 0);
      }
    }
    else
    {
      v12 = 0LL;
    }
    if ( *(_BYTE *)(v12 + 6) == 3 )
    {
      *(_BYTE *)(v12 + 6) = 0;
      SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, (__int64)v31, &v28);
      v10 = v28;
      v8 = 1;
    }
    if ( ++v6 == a3 )
      break;
    ++v3;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
  v27 = 0;
  v15 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v15->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v15->SpecialApcDisable;
  v17 = ++v15->AbAllocationRegionCount;
  v18 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v22 = !_BitScanReverse((unsigned int *)&v23, v18);
    v30 = v23;
    if ( v22 )
      goto LABEL_26;
    v19 = 1 << v23;
    v20 = v23;
    v21 = &v15->LockEntries[v20];
    v18 &= ~v19;
    if ( (v21->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v21->LockState.0 & 1) == 0
      && (*(_QWORD *)&v21->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v9 & 0x7FFFFFFFFFFFFFFCLL)
      && v21->LockState.SessionId == (_DWORD)SessionId )
    {
      v21->AcquiredByte &= ~1u;
      if ( v21->LockState.0 )
        break;
    }
  }
  if ( !v21 )
  {
LABEL_26:
    if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v15, v9, (unsigned int)SessionId, 0LL);
    goto LABEL_33;
  }
  v21->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v21->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v15->LockEntries[v20].TreeNode, SessionId);
  v27 = 0;
  v27 = v21->BoostBitmap.AllFields & 0x1FFFF;
  v21->BoostBitmap.AllFields &= 0xFFFE0000;
  v21->ThreadLocalFlags &= ~1u;
  v21->LockState.0 = 0LL;
  v24 = ((char *)v21 - (char *)v15 - 800) / 96;
  if ( v17 == 1 )
    v15->AbEntrySummary |= 1 << v24;
  else
    _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v24);
LABEL_33:
  --v15->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v15, v9, (__int64)&v27);
  v22 = v15->SpecialApcDisable++ == -1;
  if ( v22 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    KiCheckForKernelApcDelivery(v25);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
