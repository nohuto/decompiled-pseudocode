/*
 * XREFs of ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14014C08C
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14014C920 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400E12A8 (SmKmStoreRefFromStoreIndex.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x140138428 (SmKmStoreDeleteWhenEmpty.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x14014C3DC (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14014E83C (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14014E874 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictComplete(__int64 a1, unsigned int *a2, int a3, int a4)
{
  unsigned int v4; // ebx
  int v7; // r15d
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v9; // rsi
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  struct _KEVENT *v13; // rcx
  struct _KTHREAD *v14; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v16; // r15
  unsigned int v17; // r8d
  bool v18; // zf
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int64 v28; // rcx
  _DWORD v29[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v30; // [rsp+38h] [rbp-C8h]
  __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-B8h]
  _QWORD v33[5]; // [rsp+50h] [rbp-B0h] BYREF
  char v34; // [rsp+78h] [rbp-88h] BYREF

  v4 = *a2;
  v30 = a4;
  memset(v33, 0, sizeof(v33));
  v33[3] = 0x800000000LL;
  v33[0] = &v34;
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v9 = (volatile signed __int64 *)(a1 + 440);
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  while ( 1 )
  {
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      a1 + 448,
      v4,
      v33);
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v10,
      &v31,
      v33);
    if ( v31 )
    {
      v11 = v32 + 8;
      v12 = (unsigned __int16)*(_DWORD *)v31 + 2LL;
      v32 = v11;
      if ( v11 >= v31 + 8 * v12 )
      {
        v28 = *(_QWORD *)(v31 + 8);
        if ( v28 )
        {
          v31 = *(_QWORD *)(v31 + 8);
          v32 = v28 + 16;
        }
        v11 = (v28 + 16) & -(__int64)(v28 != 0);
      }
    }
    else
    {
      v11 = 0LL;
    }
    v13 = *(struct _KEVENT **)(a1 + 1656);
    if ( v13 && *(_DWORD *)(a1 + 1648) == *(_DWORD *)v11 )
      KeSetEvent(v13, 0, 0);
    *(_BYTE *)(v11 + 6) = 0;
    SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, v33, &v31);
    if ( ++v7 == a3 )
      break;
    ++v4;
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
  v29[0] = 0;
  v14 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v14->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v14->SpecialApcDisable;
  v16 = ++v14->AbAllocationRegionCount;
  v17 = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v18 = !_BitScanReverse((unsigned int *)&v19, v17);
    v29[1] = v19;
    if ( v18 )
      break;
    v20 = 1 << v19;
    v21 = v19;
    v22 = &v14->LockEntries[v21];
    v17 &= ~v20;
    if ( (v22->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v22->LockState.0 & 1) == 0
      && (*(_QWORD *)&v22->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v9 & 0x7FFFFFFFFFFFFFFCLL)
      && v22->LockState.SessionId == (_DWORD)SessionId )
    {
      v22->AcquiredByte &= ~1u;
      if ( v22->LockState.0 )
      {
        if ( v22 )
        {
          v22->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v22->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v14->LockEntries[v21].TreeNode, SessionId);
          v29[0] = 0;
          v29[0] = v22->BoostBitmap.AllFields & 0x1FFFF;
          v22->BoostBitmap.AllFields &= 0xFFFE0000;
          v22->ThreadLocalFlags &= ~1u;
          v22->LockState.0 = 0LL;
          v23 = ((char *)v22 - (char *)v14 - 800) / 96;
          if ( v16 == 1 )
            v14->AbEntrySummary |= 1 << v23;
          else
            _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v23);
          goto LABEL_23;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v14, a1 + 440, (unsigned int)SessionId, 0LL);
LABEL_23:
  --v14->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v14, a1 + 440, (__int64)v29);
  v18 = v14->SpecialApcDisable++ == -1;
  if ( v18 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
    KiCheckForKernelApcDelivery(v24);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  v25 = (__int64 *)SmKmStoreRefFromStoreIndex(a1, v30 & 0x3FF);
  return SmKmStoreDeleteWhenEmpty(v26, *v25);
}
