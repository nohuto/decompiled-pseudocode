/*
 * XREFs of ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1401496F4
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14014A2C8 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x1400EE148 (SmKmStoreDeleteWhenEmpty.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400EE3D4 (SmKmStoreRefFromStoreIndex.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x140149A7C (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14014C8D0 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14014C900 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictComplete(__int64 a1, unsigned int *a2, int a3, int a4)
{
  unsigned int v4; // ebx
  int v7; // r15d
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v9; // rsi
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  struct _KEVENT *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  struct _KTHREAD *v15; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v17; // r15
  unsigned int v18; // r8d
  bool v19; // zf
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  _KLOCK_ENTRY *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 *v26; // rax
  __int64 v27; // rcx
  int v29; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v31; // [rsp+40h] [rbp-C0h]
  int v32; // [rsp+48h] [rbp-B8h]
  int v33; // [rsp+4Ch] [rbp-B4h]
  _QWORD v34[3]; // [rsp+50h] [rbp-B0h] BYREF
  int v35; // [rsp+68h] [rbp-98h]
  int v36; // [rsp+6Ch] [rbp-94h]
  __int64 v37; // [rsp+70h] [rbp-90h]
  _BYTE v38[136]; // [rsp+78h] [rbp-88h] BYREF

  v4 = *a2;
  v33 = a4;
  memset(v38, 0, 0x80uLL);
  v35 = 0;
  v34[1] = 0LL;
  v7 = 0;
  v34[2] = 0LL;
  v37 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v34[0] = v38;
  v36 = 8;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v9 = (volatile signed __int64 *)(a1 + 440);
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  while ( 1 )
  {
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      a1 + 448,
      v4,
      v34);
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v10,
      &v30,
      v34);
    if ( v30 )
    {
      v11 = v31 + 8;
      v13 = (unsigned __int16)*(_DWORD *)v30 + 2LL;
      v31 = v11;
      if ( v11 >= v30 + 8 * v13 )
      {
        v14 = *(_QWORD *)(v30 + 8);
        if ( v14 )
        {
          v30 = *(_QWORD *)(v30 + 8);
          v31 = v14 + 16;
        }
        v11 = (v14 + 16) & -(__int64)(v14 != 0);
      }
    }
    else
    {
      v11 = 0LL;
    }
    v12 = *(struct _KEVENT **)(a1 + 1656);
    if ( v12 && *(_DWORD *)(a1 + 1648) == *(_DWORD *)v11 )
      KeSetEvent(v12, 0, 0);
    *(_BYTE *)(v11 + 6) = 0;
    SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, v34, &v30);
    if ( ++v7 == a3 )
      break;
    ++v4;
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
  v29 = 0;
  v15 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v15->ApcState.Process);
  else
    SessionId = -1;
  --v15->SpecialApcDisable;
  v17 = ++v15->AbAllocationRegionCount;
  v18 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v19 = !_BitScanReverse((unsigned int *)&v20, v18);
    v32 = v20;
    if ( v19 )
      break;
    v21 = 1 << v20;
    v22 = v20;
    v23 = &v15->LockEntries[v22];
    v18 &= ~v21;
    if ( (v23->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v23->LockState.0 & 1) == 0
      && (*(_QWORD *)&v23->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v9 & 0x7FFFFFFFFFFFFFFCLL)
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
          v29 = v23->BoostBitmap.AllFields & 0x1FFFF;
          v23->BoostBitmap.AllFields &= 0xFFFE0000;
          v23->ThreadLocalFlags &= ~1u;
          v23->LockState.0 = 0LL;
          v24 = ((char *)v23 - (char *)v15 - 800) / 96;
          if ( v17 == 1 )
            v15->AbEntrySummary |= 1 << v24;
          else
            _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v24);
          goto LABEL_27;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v15, a1 + 440, SessionId, 0LL);
LABEL_27:
  --v15->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v15, a1 + 440, &v29);
  v19 = v15->SpecialApcDisable++ == -1;
  if ( v19 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    KiCheckForKernelApcDelivery(v25);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  v26 = (__int64 *)SmKmStoreRefFromStoreIndex(a1, v33 & 0x3FF);
  return SmKmStoreDeleteWhenEmpty(v27, *v26, 0LL);
}
