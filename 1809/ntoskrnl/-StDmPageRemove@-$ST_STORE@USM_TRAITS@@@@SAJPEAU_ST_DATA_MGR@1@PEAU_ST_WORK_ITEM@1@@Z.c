/*
 * XREFs of ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140147E6C
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401489BC (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x1403057D4 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     ?StNpLeafDelete@?$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z @ 0x1403061A0 (-StNpLeafDelete@-$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     SmEtwEnabled @ 0x1400E3EA8 (SmEtwEnabled.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14011DEDC (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14011DF7C (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011EBE8 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x140144DDC (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14014687C (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     SmHpChunkFree @ 0x140147C70 (SmHpChunkFree.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x140147CE4 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140149C18 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14014A0C4 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14014A260 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14014A8B8 (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14014A928 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14014AC34 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?StDmCombinePageEntry@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14014AE50 (-StDmCombinePageEntry@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_S.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140301270 (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     SmEtwLogStoreOp @ 0x14030725C (SmEtwLogStoreOp.c)
 *     ?SmEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140308590 (-SmEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU-$SMKM_STORE@USM_TRA.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRemove(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  ULONGLONG *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r13
  int v7; // r14d
  unsigned int v8; // r14d
  int v9; // edx
  int v10; // ecx
  int v11; // edi
  __int64 v12; // r15
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rcx
  unsigned int v17; // ebx
  _DWORD *v18; // r14
  int v19; // r9d
  int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // r14
  int v23; // eax
  unsigned __int64 v24; // r14
  unsigned int v25; // ecx
  __int64 v26; // rcx
  int v27; // eax
  __int64 LeafSibling; // rax
  int v30; // eax
  unsigned int v31; // r15d
  __int64 v32; // r14
  __int64 v33; // r15
  unsigned __int64 v34; // r15
  struct _KTHREAD *v35; // rdi
  __int64 v36; // rdx
  unsigned __int8 v37; // r12
  unsigned int v38; // r8d
  bool v39; // zf
  __int64 v40; // rcx
  __int64 v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rcx
  _DWORD *v44; // rcx
  __int64 v45; // r14
  unsigned __int64 v46; // r14
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v49; // r15
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  _KLOCK_ENTRY *v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rcx
  int v57; // [rsp+40h] [rbp-29h] BYREF
  int v58; // [rsp+44h] [rbp-25h] BYREF
  __int128 v59; // [rsp+48h] [rbp-21h] BYREF
  __int64 v60; // [rsp+58h] [rbp-11h]
  unsigned int v61; // [rsp+60h] [rbp-9h]
  int v62; // [rsp+64h] [rbp-5h]
  int v63; // [rsp+68h] [rbp-1h]
  _DWORD *v64; // [rsp+70h] [rbp+7h]
  ULONGLONG *v65; // [rsp+78h] [rbp+Fh]
  unsigned int v66; // [rsp+D0h] [rbp+67h]
  unsigned int v68; // [rsp+E0h] [rbp+77h]
  unsigned int v69; // [rsp+E8h] [rbp+7Fh] BYREF

  v59 = 0uLL;
  v3 = a2;
  v4 = SmEtwEnabled(0);
  v6 = (_QWORD *)(a1 + 24);
  v7 = *(_DWORD *)(v5 + 8) - 1;
  v65 = v4;
  v8 = *(_DWORD *)(v5 + 12) + v7;
  v9 = *(_DWORD *)(a1 + 56);
  v66 = v8;
  if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
  {
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      (__int64 *)a1,
      a1 + 24);
    v9 = *(_DWORD *)(a1 + 56);
  }
  *(_DWORD *)(a1 + 56) = v9 & 0xFFFFFFFE;
  v10 = *(_DWORD *)(a1 + 120);
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 64),
      a1 + 88);
    v10 = *(_DWORD *)(a1 + 120);
  }
  v68 = 0;
  *(_DWORD *)(a1 + 120) = v10 & 0xFFFFFFFE;
  v60 = 0LL;
  v69 = 0;
  while ( 1 )
  {
    v11 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
            a1,
            *(unsigned int *)(v3 + 8),
            a1 + 24);
    if ( v11 == -1073741818 )
      break;
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      a1,
      &v59,
      a1 + 24);
    v12 = v59;
    if ( !(_QWORD)v59 )
    {
      v16 = -1LL;
LABEL_29:
      if ( v68 )
      {
        v45 = *(_QWORD *)(a1 + 800);
        if ( (*(_BYTE *)(v45 + 6021) & 4) != 0 )
        {
          v46 = v45 + 6024;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v46, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v46);
          v58 = 0;
          CurrentThread = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v46) == 1 )
            SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
          else
            SessionId = 0xFFFFFFFFLL;
          --CurrentThread->SpecialApcDisable;
          v49 = ++CurrentThread->AbAllocationRegionCount;
          LODWORD(v50) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v39 = !_BitScanReverse((unsigned int *)&v51, v50);
            v63 = v51;
            if ( v39 )
              goto LABEL_103;
            v52 = 1 << v51;
            v53 = v51;
            v54 = &CurrentThread->LockEntries[v53];
            v50 = ~v52 & (unsigned int)v50;
            if ( (v54->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v54->LockState.0 & 1) == 0
              && (*(_QWORD *)&v54->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v46 & 0x7FFFFFFFFFFFFFFCLL)
              && v54->LockState.SessionId == (_DWORD)SessionId )
            {
              v54->AcquiredByte &= ~1u;
              if ( v54->LockState.0 )
                break;
            }
          }
          if ( !v54 )
          {
LABEL_103:
            if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v46, SessionId, 0LL);
            goto LABEL_115;
          }
          v54->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v54->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v53].TreeNode, v50);
          v58 = 0;
          v58 = v54->BoostBitmap.AllFields & 0x1FFFF;
          v54->BoostBitmap.AllFields &= 0xFFFE0000;
          v54->ThreadLocalFlags &= ~1u;
          v54->LockState.0 = 0LL;
          v55 = ((char *)v54 - (char *)CurrentThread - 800) / 96;
          if ( v49 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v55;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v55);
LABEL_115:
          --CurrentThread->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v46, (__int64)&v58);
          v39 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v39
            && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v56);
          }
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        }
        SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(v16, &v69, v68);
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
      }
      if ( !*(_BYTE *)(a1 + 776) && (*(_BYTE *)(a1 + 1904) & 3) != 3 )
      {
        v27 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0);
        if ( v27 )
          ST_STORE<SM_TRAITS>::StQueueCompaction(a1, v27);
      }
      v11 = 0;
      break;
    }
    v13 = *((_QWORD *)&v59 + 1) + 8LL;
    v14 = (unsigned __int16)*(_DWORD *)v59 + 2LL;
    *((_QWORD *)&v59 + 1) = v13;
    if ( v13 >= (__int64)v59 + 8 * v14 )
    {
      if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
      {
        LeafSibling = *(_QWORD *)(v59 + 8);
      }
      else
      {
        LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSibling(
                        a1,
                        v59);
        if ( LeafSibling == -1 )
        {
          v15 = -1LL;
          goto LABEL_10;
        }
      }
      if ( !LeafSibling )
      {
        v15 = 0LL;
        goto LABEL_10;
      }
      v13 = LeafSibling + 16;
      *(_QWORD *)&v59 = LeafSibling;
      *((_QWORD *)&v59 + 1) = LeafSibling + 16;
      v12 = LeafSibling;
    }
    v15 = v13;
LABEL_10:
    v16 = -1LL;
    if ( v15 == -1 )
    {
      v11 = -1073741818;
      break;
    }
    if ( !v15 )
      goto LABEL_29;
    v17 = *(_DWORD *)v15;
    if ( v8 < *(_DWORD *)v15 )
      goto LABEL_29;
    v18 = (_DWORD *)ST_STORE<SM_TRAITS>::StDmCombinePageEntry(a1, v15);
    v64 = v18;
    v61 = *(_DWORD *)(v15 + 4);
    ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v18);
    if ( v65 )
      SmEtwLogStoreOp((_DWORD)v65, 1, v15, v19, *v18, a1, 0, 0);
    v20 = *(_DWORD *)(a1 + 48);
    v21 = a1 + 32;
    v22 = a1 + 32;
    if ( v20 != -1 && v20 )
      v22 = *v6 + 16LL * (unsigned int)(v20 - 1);
    if ( *(_QWORD *)v22 == v12 )
    {
      *(_QWORD *)(v22 + 8) = v13;
    }
    else
    {
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        (__int64 *)a1,
        a1 + 24);
      if ( *(_DWORD *)(a1 + 48) == -1 )
      {
        *(_OWORD *)v22 = v59;
      }
      else
      {
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
          a1,
          *(unsigned int *)(v12 + 16),
          a1 + 24);
        v30 = *(_DWORD *)(a1 + 48);
        if ( v30 != -1 && v30 )
          v21 = *v6 + 16LL * (unsigned int)(v30 - 1);
        *(_QWORD *)(v21 + 8) = v13;
      }
    }
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
      &v59,
      a1);
    v59 = 0uLL;
    v23 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
            a1,
            a1 + 24);
    v11 = v23;
    if ( v23 < 0 )
    {
      if ( v23 != -1073741818 )
        __int2c();
      break;
    }
    v24 = (unsigned __int64)v64;
    if ( *(_BYTE *)(a1 + 776) )
      goto LABEL_25;
    v25 = v64[1];
    if ( !(v25 >> 12) )
      __int2c();
    v3 = a2;
    v64[1] = v25 & 0xFFF | (((v25 >> 12) - 1) << 12);
    if ( ((v25 >> 12) - 1) << 12 )
    {
LABEL_45:
      v8 = v66;
    }
    else
    {
LABEL_25:
      v11 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
              a1 + 64,
              v61,
              a1 + 88);
      if ( v11 < 0 )
      {
        if ( v11 == -1073741818 )
          goto LABEL_55;
        if ( v11 != -1073741275 || (v3 = a2, v8 = v66, **(int **)(a1 + 1920) < 2) )
        {
          __int2c();
LABEL_55:
          if ( v11 != -1073741275 )
            break;
          v3 = a2;
          goto LABEL_45;
        }
      }
      else
      {
        v11 = ST_STORE<SM_TRAITS>::StDmPageRecordRemove(a1, v24, a1 + 88);
        if ( v11 < 0 )
          break;
        SmHpChunkFree((_DWORD *)(a1 + 192), v24);
        v3 = a2;
        v8 = v66;
        if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
        {
          v31 = v68;
          v32 = v60;
          if ( v68 && v17 - (_DWORD)v60 != v68 )
          {
            v33 = *(_QWORD *)(a1 + 800);
            if ( (*(_BYTE *)(v33 + 6021) & 4) != 0 )
            {
              v34 = v33 + 6024;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v34, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)v34);
              v57 = 0;
              v35 = KeGetCurrentThread();
              if ( (unsigned int)MiGetSystemRegionType(v34) == 1 )
                v36 = (unsigned int)MmGetSessionIdEx((__int64)v35->ApcState.Process);
              else
                v36 = 0xFFFFFFFFLL;
              --v35->SpecialApcDisable;
              v37 = ++v35->AbAllocationRegionCount;
              v38 = ((char)v35->AbEntrySummary | (char)v35->AbOrphanedEntrySummary) ^ 0x3F;
              while ( 1 )
              {
                v39 = !_BitScanReverse((unsigned int *)&v40, v38);
                v62 = v40;
                if ( v39 )
                  goto LABEL_67;
                v41 = (__int64)&v35->LockEntries[v40];
                v38 &= ~(1 << v40);
                if ( (*(_BYTE *)(v41 + 26) & 1) != 0
                  && (*(_DWORD *)(v41 + 32) & 1) == 0
                  && (*(_QWORD *)(v41 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v34 & 0x7FFFFFFFFFFFFFFCLL)
                  && *(_DWORD *)(v41 + 40) == (_DWORD)v36 )
                {
                  *(_BYTE *)(v41 + 26) &= ~1u;
                  if ( *(_QWORD *)(v41 + 32) )
                    break;
                }
              }
              if ( !v41 )
              {
LABEL_67:
                if ( (*((_DWORD *)&v35->0 + 1) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v35, v34, (unsigned int)v36, 0LL);
                goto LABEL_79;
              }
              *(_BYTE *)(v41 + 32) |= 2u;
              if ( *(__int64 *)(v41 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v41, v36);
              v57 = 0;
              v57 = *(_DWORD *)(v41 + 88) & 0x1FFFF;
              *(_DWORD *)(v41 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v41 + 25) &= ~1u;
              *(_QWORD *)(v41 + 32) = 0LL;
              v42 = (v41 - (__int64)v35 - 800) / 96;
              if ( v37 == 1 )
                v35->AbEntrySummary |= 1 << v42;
              else
                _InterlockedOr8((volatile signed __int8 *)&v35->AbOrphanedEntrySummary, 1 << v42);
LABEL_79:
              --v35->AbAllocationRegionCount;
              KiAbThreadRemoveBoosts((ULONG_PTR)v35, v34, (__int64)&v57);
              v39 = v35->SpecialApcDisable++ == -1;
              if ( v39 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v35->ApcState.ApcListHead[0].Flink != &v35->152 )
                KiCheckForKernelApcDelivery(v43);
              KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
            }
            SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(v26, &v69, v68);
            SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
            v32 = v69;
            v31 = 0;
            v3 = a2;
            v60 = v69;
            v68 = 0;
          }
          v44 = *(_DWORD **)(a1 + 1920);
          if ( !*v44 || *v44 == 3 && v17 < v44[1] )
          {
            if ( !v31 )
              v32 = v17;
            v68 = v31 + 1;
            v60 = v32;
            v69 = v32;
          }
          goto LABEL_45;
        }
      }
    }
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
    &v59,
    a1);
  return (unsigned int)v11;
}
