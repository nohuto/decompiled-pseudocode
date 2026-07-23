/*
 * XREFs of ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14011ACD4
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14011AC40 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x140149A7C (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14014C8D0 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14014C900 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreDelete(__int64 a1, int a2)
{
  int v4; // edi
  unsigned int v5; // ebx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  struct _KTHREAD *v13; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v15; // r14
  unsigned int v16; // r8d
  bool v17; // zf
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  _KLOCK_ENTRY *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v25; // rcx
  int v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v28; // [rsp+40h] [rbp-C0h]
  int v29; // [rsp+48h] [rbp-B8h]
  _QWORD v30[3]; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+68h] [rbp-98h]
  int v32; // [rsp+6Ch] [rbp-94h]
  __int64 v33; // [rsp+70h] [rbp-90h]
  _BYTE v34[136]; // [rsp+78h] [rbp-88h] BYREF

  memset(v34, 0, 0x80uLL);
  v30[1] = 0LL;
  v30[2] = 0LL;
  v4 = 0;
  v33 = 0LL;
  v5 = 0;
  v31 = 0;
  v30[0] = v34;
  v32 = 8;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = a1 + 440;
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  v8 = 0LL;
  v9 = *(_QWORD *)(a1 + 448);
  v27 = 0LL;
  v28 = 0LL;
  if ( v9 )
  {
    while ( !*(_BYTE *)(v9 + 3) )
      v9 = *(_QWORD *)(v9 + 8);
    v8 = v9;
    v27 = v9;
    v28 = v9 + 8;
  }
  while ( 1 )
  {
    if ( v4 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        a1 + 448,
        v5,
        v30);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v25,
        &v27,
        v30);
      v8 = v27;
      v4 = 0;
    }
    if ( !v8 )
      break;
    v10 = v28 + 8;
    v11 = (unsigned __int16)*(_DWORD *)v8 + 2LL;
    v28 = v10;
    if ( v10 >= v8 + 8 * v11 )
    {
      v12 = *(_QWORD *)(v8 + 8);
      if ( v12 )
      {
        v27 = *(_QWORD *)(v8 + 8);
        v28 = v12 + 16;
        v8 = v12;
      }
      v10 = (v12 + 16) & -(__int64)(v12 != 0);
    }
    if ( !v10 )
      break;
    if ( *(unsigned __int16 *)(v10 + 4) == a2 )
    {
      v5 = *(_DWORD *)v10;
      *(_BYTE *)(v10 + 6) = 0;
      SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, v30, &v27);
      v8 = v27;
      v4 = 1;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
  v26 = 0;
  v13 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v13->ApcState.Process);
  else
    SessionId = -1;
  --v13->SpecialApcDisable;
  v15 = ++v13->AbAllocationRegionCount;
  v16 = ((char)v13->AbEntrySummary | (char)v13->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v17 = !_BitScanReverse((unsigned int *)&v18, v16);
    v29 = v18;
    if ( v17 )
      break;
    v19 = 1 << v18;
    v20 = v18;
    v21 = &v13->LockEntries[v20];
    v16 &= ~v19;
    if ( (v21->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v21->LockState.0 & 1) == 0
      && (*(_QWORD *)&v21->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
      && v21->LockState.SessionId == SessionId )
    {
      v21->AcquiredByte &= ~1u;
      if ( v21->LockState.0 )
      {
        if ( v21 )
        {
          v21->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v21->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v13->LockEntries[v20].TreeNode);
          v26 = v21->BoostBitmap.AllFields & 0x1FFFF;
          v21->BoostBitmap.AllFields &= 0xFFFE0000;
          v21->ThreadLocalFlags &= ~1u;
          v21->LockState.0 = 0LL;
          v22 = ((char *)v21 - (char *)v13 - 800) / 96;
          if ( v15 == 1 )
            v13->AbEntrySummary |= 1 << v22;
          else
            _InterlockedOr8((volatile signed __int8 *)&v13->AbOrphanedEntrySummary, 1 << v22);
          goto LABEL_28;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v13->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v13, v7, SessionId, 0LL);
LABEL_28:
  --v13->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v13, v7, &v26);
  v17 = v13->SpecialApcDisable++ == -1;
  if ( v17 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
    KiCheckForKernelApcDelivery(v23);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
