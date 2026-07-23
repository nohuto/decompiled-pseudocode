/*
 * XREFs of ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14014B608
 * Callers:
 *     ?SmProcessAddCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14014B578 (-SmProcessAddCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU-$SMKM_.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14014BD88 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x1401493DC (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14014C230 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14014C260 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(__int64 a1, unsigned int *a2, int a3, __int64 a4, char a5)
{
  unsigned int v5; // ebx
  __int64 v8; // r9
  int v9; // edi
  int v10; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  struct _KTHREAD *v15; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v17; // r14
  unsigned int v18; // r8d
  bool v19; // zf
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  _KLOCK_ENTRY *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-C0h]
  int v31; // [rsp+48h] [rbp-B8h]
  _QWORD v32[3]; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+68h] [rbp-98h]
  int v34; // [rsp+6Ch] [rbp-94h]
  __int64 v35; // [rsp+70h] [rbp-90h]
  _BYTE v36[136]; // [rsp+78h] [rbp-88h] BYREF

  v5 = *a2;
  memset(v36, 0, 0x80uLL);
  v8 = 0LL;
  v32[0] = v36;
  v32[1] = 0LL;
  v32[2] = 0LL;
  v35 = 0LL;
  v9 = 0;
  v33 = 0;
  v10 = 1;
  v29 = 0LL;
  v30 = 0LL;
  v34 = 8;
  if ( (a5 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
    v8 = v29;
  }
  while ( 1 )
  {
    if ( v10 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        a1 + 448,
        v5,
        v32);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v12,
        &v29,
        v32);
      v8 = v29;
      v10 = 0;
    }
    if ( v8 )
    {
      v13 = v30 + 8;
      v26 = (unsigned __int16)*(_DWORD *)v8 + 2LL;
      v30 = v13;
      if ( v13 >= v8 + 8 * v26 )
      {
        v27 = *(_QWORD *)(v8 + 8);
        if ( v27 )
        {
          v29 = *(_QWORD *)(v8 + 8);
          v30 = v27 + 16;
          v8 = v27;
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
        goto LABEL_11;
    }
    else
    {
      if ( *(_BYTE *)(v13 + 6) != 1 )
        goto LABEL_11;
      if ( (a5 & 1) != 0 )
      {
        *(_BYTE *)(v13 + 6) = 3;
        goto LABEL_11;
      }
    }
    *(_BYTE *)(v13 + 6) = 0;
    SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, (__int64)v32, &v29);
    v8 = v29;
    v10 = 1;
LABEL_11:
    if ( ++v9 == a3 )
      break;
    ++v5;
  }
  if ( (a5 & 2) == 0 )
  {
    v14 = a1 + 440;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v14);
    v28 = 0;
    v15 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v14) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v15->ApcState.Process);
    else
      SessionId = -1;
    --v15->SpecialApcDisable;
    v17 = ++v15->AbAllocationRegionCount;
    v18 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v19 = !_BitScanReverse((unsigned int *)&v20, v18);
      v31 = v20;
      if ( v19 )
        break;
      v21 = 1 << v20;
      v22 = v20;
      v23 = &v15->LockEntries[v22];
      v18 &= ~v21;
      if ( (v23->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v23->LockState.0 & 1) == 0
        && (*(_QWORD *)&v23->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v14 & 0x7FFFFFFFFFFFFFFCLL)
        && v23->LockState.SessionId == SessionId )
      {
        v23->AcquiredByte &= ~1u;
        if ( v23->LockState.0 )
        {
          if ( v23 )
          {
            v23->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v23->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v15->LockEntries[v22].TreeNode);
            v28 = v23->BoostBitmap.AllFields & 0x1FFFF;
            v23->BoostBitmap.AllFields &= 0xFFFE0000;
            v23->ThreadLocalFlags &= ~1u;
            v23->LockState.0 = 0LL;
            v24 = ((char *)v23 - (char *)v15 - 800) / 96;
            if ( v17 == 1 )
              v15->AbEntrySummary |= 1 << v24;
            else
              _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v24);
            goto LABEL_29;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v15, v14, SessionId, 0LL);
LABEL_29:
    --v15->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v15, v14, &v28);
    v19 = v15->SpecialApcDisable++ == -1;
    if ( v19 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
      KiCheckForKernelApcDelivery(v25);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
}
