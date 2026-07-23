/*
 * XREFs of ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14014DC88
 * Callers:
 *     ?SmProcessAddCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14014DBF8 (-SmProcessAddCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU-$SMKM_.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14014E3BC (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
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

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(__int64 a1, unsigned int *a2, int a3, __int64 a4, char a5)
{
  unsigned int v5; // ebx
  int v8; // edi
  int v9; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  struct _KTHREAD *v16; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v18; // r14
  unsigned int v19; // r8d
  bool v20; // zf
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  _KLOCK_ENTRY *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-C0h]
  int v31; // [rsp+48h] [rbp-B8h]
  _QWORD v32[5]; // [rsp+50h] [rbp-B0h] BYREF
  char v33; // [rsp+78h] [rbp-88h] BYREF

  v5 = *a2;
  memset(v32, 0, sizeof(v32));
  v32[3] = 0x800000000LL;
  v8 = 0;
  v32[0] = &v33;
  v9 = 1;
  if ( (a5 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  }
  v11 = v29;
  while ( 1 )
  {
    if ( v9 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        a1 + 448,
        v5,
        v32);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v12,
        &v29,
        v32);
      v11 = v29;
      v9 = 0;
    }
    if ( v11 )
    {
      v13 = v30 + 8;
      v14 = (unsigned __int16)*(_DWORD *)v11 + 2LL;
      v30 = v13;
      if ( v13 >= v11 + 8 * v14 )
      {
        v27 = *(_QWORD *)(v11 + 8);
        if ( v27 )
        {
          v29 = *(_QWORD *)(v11 + 8);
          v30 = v27 + 16;
          v11 = v27;
        }
        v13 = (v27 + 16) & -(__int64)(v27 != 0);
      }
    }
    else
    {
      v13 = 0LL;
    }
    if ( (*(_BYTE *)(v13 + 7) & 1) != 0 )
    {
      if ( (a5 & 1) != 0 )
        goto LABEL_12;
    }
    else
    {
      if ( *(_BYTE *)(v13 + 6) != 1 )
        goto LABEL_12;
      if ( (a5 & 1) != 0 )
      {
        *(_BYTE *)(v13 + 6) = 3;
        goto LABEL_12;
      }
    }
    *(_BYTE *)(v13 + 6) = 0;
    SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, (__int64)v32, &v29);
    v11 = v29;
    v9 = 1;
LABEL_12:
    if ( ++v8 == a3 )
      break;
    ++v5;
  }
  if ( (a5 & 2) == 0 )
  {
    v15 = a1 + 440;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v15);
    v28 = 0;
    v16 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v15) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)v16->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v16->SpecialApcDisable;
    v18 = ++v16->AbAllocationRegionCount;
    v19 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v20 = !_BitScanReverse((unsigned int *)&v21, v19);
      v31 = v21;
      if ( v20 )
        break;
      v22 = 1 << v21;
      v23 = v21;
      v24 = &v16->LockEntries[v23];
      v19 &= ~v22;
      if ( (v24->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v24->LockState.0 & 1) == 0
        && (*(_QWORD *)&v24->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v15 & 0x7FFFFFFFFFFFFFFCLL)
        && v24->LockState.SessionId == (_DWORD)SessionId )
      {
        v24->AcquiredByte &= ~1u;
        if ( v24->LockState.0 )
        {
          if ( v24 )
          {
            v24->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v24->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v16->LockEntries[v23].TreeNode, SessionId);
            v28 = 0;
            v28 = v24->BoostBitmap.AllFields & 0x1FFFF;
            v24->BoostBitmap.AllFields &= 0xFFFE0000;
            v24->ThreadLocalFlags &= ~1u;
            v24->LockState.0 = 0LL;
            v25 = ((char *)v24 - (char *)v16 - 800) / 96;
            if ( v18 == 1 )
              v16->AbEntrySummary |= 1 << v25;
            else
              _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v25);
            goto LABEL_30;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, v15, (unsigned int)SessionId, 0LL);
LABEL_30:
    --v16->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v16, v15, (__int64)&v28);
    v20 = v16->SpecialApcDisable++ == -1;
    if ( v20 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
      KiCheckForKernelApcDelivery(v26);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
}
