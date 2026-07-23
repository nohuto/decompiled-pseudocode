/*
 * XREFs of ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14031FF30
 * Callers:
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x1401489E0 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14014C230 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14014C260 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeSetEvictFailed(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v3; // ebx
  int v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  struct _KTHREAD *v13; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v15; // si
  unsigned int v16; // r8d
  int v17; // eax
  __int64 v18; // rcx
  _KLOCK_ENTRY *v19; // rdi
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _DWORD v25[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v27; // [rsp+40h] [rbp-C0h]
  _QWORD v28[3]; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+68h] [rbp-98h]
  int v30; // [rsp+6Ch] [rbp-94h]
  __int64 v31; // [rsp+70h] [rbp-90h]
  _BYTE v32[136]; // [rsp+78h] [rbp-88h] BYREF

  v3 = *a2;
  memset(v32, 0, 0x80uLL);
  v29 = 0;
  v28[1] = 0LL;
  v5 = 0;
  v28[2] = 0LL;
  v31 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28[0] = v32;
  v30 = 8;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14058BB78, 0LL);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    qword_14058BB80,
    v3,
    (__int64)v28);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
    v7,
    (__int64)&v26,
    (__int64)v28);
  v8 = v27;
  v9 = v26;
  do
  {
    if ( v9 )
    {
      v8 += 8LL;
      v10 = v8;
      v11 = (unsigned __int16)*(_DWORD *)v9 + 2LL;
      v27 = v8;
      if ( v8 >= v9 + 8 * v11 )
      {
        v12 = *(_QWORD *)(v9 + 8);
        if ( v12 )
        {
          v8 = v12 + 16;
          v9 = *(_QWORD *)(v9 + 8);
          v27 = v12 + 16;
        }
        v10 = (v12 + 16) & -(__int64)(v12 != 0);
      }
    }
    else
    {
      v10 = 0LL;
    }
    *(_BYTE *)(v10 + 7) |= 1u;
    ++v5;
    *(_BYTE *)(v10 + 6) = 3;
  }
  while ( v5 != a3 );
  v26 = v9;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14058BB78, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14058BB78);
  v25[0] = 0;
  v13 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_14058BB78) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v13->ApcState.Process);
  else
    SessionId = -1;
  --v13->SpecialApcDisable;
  v15 = ++v13->AbAllocationRegionCount;
  v16 = ((char)v13->AbEntrySummary | (char)v13->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v20 = !_BitScanReverse((unsigned int *)&v21, v16);
    v25[1] = v21;
    if ( v20 )
      goto LABEL_21;
    v17 = 1 << v21;
    v18 = v21;
    v19 = &v13->LockEntries[v18];
    v16 &= ~v17;
    if ( (v19->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v19->LockState.0 & 1) == 0
      && (*(_QWORD *)&v19->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_14058BB78 & 0x7FFFFFFFFFFFFFFCLL)
      && v19->LockState.SessionId == SessionId )
    {
      v19->AcquiredByte &= ~1u;
      if ( v19->LockState.0 )
        break;
    }
  }
  if ( !v19 )
  {
LABEL_21:
    if ( (*((_DWORD *)&v13->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v13, (ULONG_PTR)&qword_14058BB78, SessionId, 0LL);
    goto LABEL_28;
  }
  v19->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v19->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v13->LockEntries[v18].TreeNode);
  v25[0] = v19->BoostBitmap.AllFields & 0x1FFFF;
  v19->BoostBitmap.AllFields &= 0xFFFE0000;
  v19->ThreadLocalFlags &= ~1u;
  v19->LockState.0 = 0LL;
  v22 = ((char *)v19 - (char *)v13 - 800) / 96;
  if ( v15 == 1 )
    v13->AbEntrySummary |= 1 << v22;
  else
    _InterlockedOr8((volatile signed __int8 *)&v13->AbOrphanedEntrySummary, 1 << v22);
LABEL_28:
  --v13->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v13, (__int64)&qword_14058BB78, v25);
  v20 = v13->SpecialApcDisable++ == -1;
  if ( v20 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
    KiCheckForKernelApcDelivery(v23);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
