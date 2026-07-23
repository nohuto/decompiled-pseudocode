/*
 * XREFs of ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140148C04
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
 *     ?SmFeEvictUpdatePass@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@@Z @ 0x140148EB8 (-SmFeEvictUpdatePass@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_R.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14014C260 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictInitiate(__int64 a1, unsigned int *a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v8; // ecx
  unsigned int updated; // r14d
  struct _KTHREAD *v10; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v12; // si
  unsigned int v13; // edx
  bool v14; // zf
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  _KLOCK_ENTRY *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  _DWORD v22[4]; // [rsp+30h] [rbp-A9h] BYREF
  ULONG_PTR v23[3]; // [rsp+40h] [rbp-99h] BYREF
  int v24; // [rsp+58h] [rbp-81h]
  int v25; // [rsp+5Ch] [rbp-7Dh]
  __int64 v26; // [rsp+60h] [rbp-79h]
  _BYTE v27[136]; // [rsp+68h] [rbp-71h] BYREF

  memset(v27, 0, 0x80uLL);
  v23[1] = 0LL;
  v23[2] = 0LL;
  v26 = 0LL;
  v24 = 0;
  v23[0] = (ULONG_PTR)v27;
  v25 = 8;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14058BB78, 0LL);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    &unk_14058BB80,
    *a2,
    v23);
  updated = SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictUpdatePass(v8, (_DWORD)a2, a3, a4, (__int64)v23);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14058BB78, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14058BB78);
  v22[0] = 0;
  v10 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_14058BB78) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v10->ApcState.Process);
  else
    SessionId = -1;
  --v10->SpecialApcDisable;
  v12 = ++v10->AbAllocationRegionCount;
  v13 = ((char)v10->AbEntrySummary | (char)v10->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v15, v13);
    v22[1] = v15;
    if ( v14 )
      break;
    v16 = 1 << v15;
    v17 = v15;
    v18 = &v10->LockEntries[v17];
    v13 &= ~v16;
    if ( (v18->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v18->LockState.0 & 1) == 0
      && (*(_QWORD *)&v18->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_14058BB78 & 0x7FFFFFFFFFFFFFFCLL)
      && v18->LockState.SessionId == SessionId )
    {
      v18->AcquiredByte &= ~1u;
      if ( v18->LockState.0 )
      {
        if ( v18 )
        {
          v18->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v18->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v10->LockEntries[v17].TreeNode);
          v22[0] = v18->BoostBitmap.AllFields & 0x1FFFF;
          v18->BoostBitmap.AllFields &= 0xFFFE0000;
          v18->ThreadLocalFlags &= ~1u;
          v18->LockState.0 = 0LL;
          v19 = ((char *)v18 - (char *)v10 - 800) / 96;
          if ( v12 == 1 )
            v10->AbEntrySummary |= 1 << v19;
          else
            _InterlockedOr8((volatile signed __int8 *)&v10->AbOrphanedEntrySummary, 1 << v19);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v10->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v10, (ULONG_PTR)&qword_14058BB78, SessionId, 0LL);
LABEL_17:
  --v10->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v10, (__int64)&qword_14058BB78, v22);
  v14 = v10->SpecialApcDisable++ == -1;
  if ( v14 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery(v20);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return updated;
}
