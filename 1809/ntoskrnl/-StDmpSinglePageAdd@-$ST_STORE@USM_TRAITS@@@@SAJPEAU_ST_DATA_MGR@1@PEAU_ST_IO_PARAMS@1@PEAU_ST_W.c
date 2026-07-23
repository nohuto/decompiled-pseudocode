/*
 * XREFs of ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140148D30
 * Callers:
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140148C18 (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageOut@?$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z @ 0x140306310 (-StNpLeafPageOut@-$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011EBE8 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     RtlCompressBuffer @ 0x14012BF60 (RtlCompressBuffer.c)
 *     SmHpChunkFree @ 0x140147C70 (SmHpChunkFree.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14014912C (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14014A260 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     SmHpChunkAlloc @ 0x14014A56C (SmHpChunkAlloc.c)
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x14014A770 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x140153680 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     ?StDmpDummyPageRecordAllocate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140159458 (-StDmpDummyPageRecordAllocate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     RtlComputeCrc32 @ 0x14015B610 (RtlComputeCrc32.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ?StDmpCurrentRegionWrite@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140305E58 (-StDmpCurrentRegionWrite@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     SmCrAuthEncrypt @ 0x140309794 (SmCrAuthEncrypt.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  int v4; // eax
  unsigned __int64 v7; // r14
  unsigned int v8; // edx
  int v9; // ebx
  int Space; // esi
  __int64 v11; // r15
  unsigned __int64 v12; // r15
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v15; // r13
  unsigned int v16; // r8d
  bool v17; // zf
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  _KLOCK_ENTRY *v21; // rsi
  unsigned __int8 v22; // al
  UCHAR *v23; // r15
  int v24; // ecx
  UCHAR *v25; // r13
  ULONG v26; // edx
  int v27; // r12d
  unsigned int v28; // r8d
  __int64 v29; // rax
  unsigned __int64 v30; // r9
  ULONG v31; // ecx
  int *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  int v36; // eax
  UCHAR *v37; // r12
  unsigned int v38; // ecx
  __int64 v39; // r9
  __int64 v40; // rcx
  ULONG v41; // eax
  ULONG Length; // [rsp+40h] [rbp-39h] BYREF
  int v43; // [rsp+44h] [rbp-35h] BYREF
  int v44; // [rsp+48h] [rbp-31h] BYREF
  unsigned int v45; // [rsp+4Ch] [rbp-2Dh]
  ULONG *v46; // [rsp+50h] [rbp-29h] BYREF
  __int64 v47; // [rsp+58h] [rbp-21h]
  unsigned int *v48; // [rsp+60h] [rbp-19h]
  int *v49; // [rsp+68h] [rbp-11h]
  unsigned __int8 v50[8]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v51; // [rsp+78h] [rbp-1h] BYREF
  int v52; // [rsp+80h] [rbp+7h]

  v4 = *(_DWORD *)(a1 + 776);
  v49 = (int *)a2;
  v7 = 0LL;
  v8 = *(_DWORD *)a2 & 7;
  v47 = a3;
  v9 = 0;
  v48 = a4;
  if ( ((unsigned __int8)v4 == 0 ? 7 : 0) < v8 )
    v8 = (unsigned __int8)v4 == 0 ? 7 : 0;
  Space = ST_STORE<SM_TRAITS>::StDmpSinglePageFindSpace(a1, v8, *a4, (unsigned int)&v46, (__int64)&v44);
  if ( Space >= 0 )
  {
    v11 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v11 + 6021) & 4) != 0 )
    {
      v12 = v11 + 6024;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v12);
      v43 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v12) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      --CurrentThread->SpecialApcDisable;
      v15 = ++CurrentThread->AbAllocationRegionCount;
      v16 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v17 = !_BitScanReverse((unsigned int *)&v18, v16);
        v45 = v18;
        if ( v17 )
          break;
        v19 = 1 << v18;
        v20 = v18;
        v21 = &CurrentThread->LockEntries[v20];
        v16 &= ~v19;
        if ( (v21->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v21->LockState.0 & 1) == 0
          && (*(_QWORD *)&v21->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
          && v21->LockState.SessionId == (_DWORD)SessionId )
        {
          v21->AcquiredByte &= ~1u;
          if ( v21->LockState.0 )
          {
            if ( v21 )
            {
              v21->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v21->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v20].TreeNode, SessionId);
              v43 = 0;
              v43 = v21->BoostBitmap.AllFields & 0x1FFFF;
              v21->BoostBitmap.AllFields &= 0xFFFE0000;
              v21->ThreadLocalFlags &= ~1u;
              v21->LockState.0 = 0LL;
              v22 = 1 << (((char *)v21 - (char *)CurrentThread - 800) / 96);
              if ( v15 == 1 )
                CurrentThread->AbEntrySummary |= v22;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v22);
              goto LABEL_21;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v12, (unsigned int)SessionId, 0LL);
LABEL_21:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v12, (__int64)&v43);
      v17 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v17
        && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(1LL);
      }
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    v9 = 1;
    v23 = (UCHAR *)v46 + *(unsigned int *)(a1 + 824);
    v24 = *(_DWORD *)a2;
    v25 = *(UCHAR **)(a2 + 8);
    if ( *(int *)a2 >= 0 )
    {
      v36 = *(_DWORD *)(a1 + 776);
      if ( (v36 & 0x400) != 0 )
      {
        v26 = 4096;
      }
      else
      {
        if ( (v36 & 0x8000) != 0 )
        {
          memmove((void *)(*(_QWORD *)(a1 + 1784) + 4096LL), *(const void **)(a2 + 8), 0x1000uLL);
          v24 = *(_DWORD *)a2;
          v25 = (UCHAR *)(*(_QWORD *)(a1 + 1784) + 4096LL);
        }
        v26 = 0;
      }
    }
    else
    {
      v26 = *(_DWORD *)(*(_QWORD *)(v47 + 16) + 40LL);
    }
    v27 = v44;
    v28 = *(_DWORD *)(a1 + 816) - (v44 & *(_DWORD *)(a1 + 808));
    Length = v26;
    v45 = v28;
    if ( v24 >= 0 )
    {
      if ( v28 >= *(_DWORD *)(a1 + 820) )
        v37 = v23;
      else
        v37 = *(UCHAR **)(a1 + 1784);
      if ( !v26 )
      {
        if ( RtlCompressBuffer(*(_WORD *)(a1 + 992), v25, 0x1000u, v37, 0x1000u, 0x1000u, &Length, *(PVOID *)(a1 + 896)) >= 0 )
        {
          v26 = Length;
        }
        else
        {
          v26 = 4096;
          Length = 4096;
        }
        v28 = v45;
      }
      if ( v37 != v23 )
      {
        v38 = (v26 + *(_DWORD *)(a1 + 824) + 15) >> 4;
        *v48 = v38;
        if ( v38 > v28 )
        {
          Space = -1073741267;
          goto LABEL_40;
        }
      }
      if ( v26 > 0xFF0 )
      {
        if ( (*(_DWORD *)(a1 + 776) & 0x200) != 0 )
        {
          Space = -1073740762;
          goto LABEL_40;
        }
        v26 = 4096;
        v37 = v25;
        Length = 4096;
      }
      if ( v37 != v23 )
        memmove(v23, v37, v26);
      v27 = v44;
    }
    else
    {
      memmove(v23, v25, v26);
    }
    if ( *(_QWORD *)(a1 + 760) || (Space = ST_STORE<SM_TRAITS>::StDmpDummyPageRecordAllocate(a1), Space >= 0) )
    {
      v9 = 0;
      SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
      v29 = SmHpChunkAlloc(a1 + 192);
      v7 = v29;
      if ( !v29 )
      {
        Space = -1073741670;
        goto LABEL_40;
      }
      ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v29);
      *(_QWORD *)v7 = 0LL;
      *(_DWORD *)(v7 + 8) = 0;
      *(_DWORD *)v7 = v27;
      v31 = Length;
      if ( Length < 0x1000 )
      {
        *(_DWORD *)(v7 + 4) ^= ((unsigned __int16)Length ^ (unsigned __int16)*(_DWORD *)(v7 + 4)) & 0xFFF;
        v31 = Length;
      }
      v32 = v49;
      if ( *v49 >= 0 )
      {
        MetroHash64::Hash(v23, v31, v50, v30);
        LODWORD(v33) = *(_DWORD *)v50;
      }
      else
      {
        v33 = *(_QWORD *)(v47 + 96);
      }
      *(_DWORD *)(v7 + 8) = v33;
      v34 = *(_QWORD *)(a1 + 1016);
      if ( *(_DWORD *)(v34 + 24) )
      {
        v39 = -*(_DWORD *)(v34 + 8) & (*(_DWORD *)(v34 + 8) + Length - 1);
        *(_DWORD *)(v7 + 12) = ++*(_QWORD *)(a1 + 1024);
        *(_WORD *)(v7 + 6) = *(_WORD *)(a1 + 1028);
        v40 = *(_QWORD *)(a1 + 1016);
        v52 = 0;
        v51 = Length;
        HIDWORD(v51) = *(_DWORD *)(v7 + 12);
        v52 = *(unsigned __int16 *)(v7 + 6);
        if ( (int)SmCrAuthEncrypt(v40, v23, v23, v39, &v51) < 0 )
        {
          Space = -1073741174;
          goto LABEL_40;
        }
      }
      else if ( *(_BYTE *)(a1 + 776) )
      {
        v41 = RtlComputeCrc32(0, v23, Length);
        *v46 = v41;
      }
      Space = ST_STORE<SM_TRAITS>::StDmpSinglePageInsert(a1, v32, v7);
      if ( Space >= 0 )
      {
        v7 = 0LL;
        Space = 0;
      }
    }
  }
LABEL_40:
  if ( v9 )
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
  if ( v7 )
    SmHpChunkFree((_DWORD *)(a1 + 192), v7);
  return (unsigned int)Space;
}
