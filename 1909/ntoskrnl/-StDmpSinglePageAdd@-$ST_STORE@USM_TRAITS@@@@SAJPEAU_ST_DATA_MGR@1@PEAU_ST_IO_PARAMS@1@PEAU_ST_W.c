/*
 * XREFs of ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x1401503A0
 * Callers:
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140150288 (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageOut@?$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z @ 0x140323550 (-StNpLeafPageOut@-$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     RtlComputeCrc32 @ 0x140114110 (RtlComputeCrc32.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011CA34 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     RtlCompressBuffer @ 0x14012C1E0 (RtlCompressBuffer.c)
 *     ?StDmpDummyPageRecordAllocate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14014E254 (-StDmpDummyPageRecordAllocate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     SmHpChunkFree @ 0x14014E9C4 (SmHpChunkFree.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x1401507A4 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140151910 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     SmHpChunkAlloc @ 0x140151C1C (SmHpChunkAlloc.c)
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x140151E20 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x140155FE0 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ?StDmpCurrentRegionWrite@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140323108 (-StDmpCurrentRegionWrite@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     SmCrAuthEncrypt @ 0x140326AD4 (SmCrAuthEncrypt.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  int v6; // eax
  unsigned __int64 v7; // r14
  int v8; // ebx
  unsigned int v9; // edx
  int Space; // esi
  __int64 v11; // r15
  unsigned __int64 v12; // r15
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v15; // r13
  unsigned int v16; // r8d
  bool v17; // zf
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  _KLOCK_ENTRY *v21; // rsi
  unsigned __int8 v22; // al
  int v23; // ecx
  UCHAR *v24; // r15
  void *v25; // r13
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
  ULONG Length; // [rsp+40h] [rbp-49h] BYREF
  int v43; // [rsp+44h] [rbp-45h] BYREF
  ULONG_PTR v44; // [rsp+48h] [rbp-41h] BYREF
  ULONG *v45; // [rsp+50h] [rbp-39h]
  __int64 v46; // [rsp+58h] [rbp-31h]
  ULONG *v47; // [rsp+60h] [rbp-29h] BYREF
  unsigned int *v48; // [rsp+68h] [rbp-21h]
  int *v49; // [rsp+70h] [rbp-19h]
  unsigned __int8 v50[8]; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v51[2]; // [rsp+80h] [rbp-9h] BYREF

  v49 = (int *)a2;
  memset(v51, 0, 12);
  v6 = *(_DWORD *)(a1 + 776);
  v7 = 0LL;
  v8 = 0;
  v9 = *(_DWORD *)a2 & 7;
  v46 = a3;
  v48 = a4;
  if ( ((unsigned __int8)v6 == 0 ? 7 : 0) < v9 )
    v9 = (unsigned __int8)v6 == 0 ? 7 : 0;
  Space = ST_STORE<SM_TRAITS>::StDmpSinglePageFindSpace(a1, v9, *a4, (unsigned int)&v47, (__int64)&v44);
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
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v15 = ++CurrentThread->AbAllocationRegionCount;
      v16 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v17 = !_BitScanReverse((unsigned int *)&v18, v16);
        LODWORD(v45) = v18;
        if ( v17 )
          break;
        v19 = 1 << v18;
        v20 = v18;
        v21 = &CurrentThread->LockEntries[v20];
        v16 &= ~v19;
        if ( (v21->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v21->LockState.0 & 1) == 0
          && (*(_QWORD *)&v21->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
          && v21->LockState.SessionId == SessionId )
        {
          v21->AcquiredByte &= ~1u;
          if ( v21->LockState.0 )
          {
            if ( v21 )
            {
              v21->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v21->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v20].TreeNode);
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
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v12, SessionId, 0LL);
LABEL_21:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v12, &v43);
      v17 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v17
        && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(1LL);
      }
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    v8 = 1;
    v23 = *(_DWORD *)a2;
    v24 = (UCHAR *)v47 + *(unsigned int *)(a1 + 824);
    v25 = *(void **)(a2 + 8);
    v45 = v47;
    if ( v23 >= 0 )
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
          memmove((void *)(*(_QWORD *)(a1 + 1784) + 4096LL), v25, 0x1000uLL);
          v23 = *(_DWORD *)a2;
          v25 = (void *)(*(_QWORD *)(a1 + 1784) + 4096LL);
        }
        v26 = 0;
      }
    }
    else
    {
      v26 = *(_DWORD *)(*(_QWORD *)(v46 + 16) + 40LL);
    }
    v27 = v44;
    v28 = *(_DWORD *)(a1 + 816) - (v44 & *(_DWORD *)(a1 + 808));
    Length = v26;
    v43 = v44;
    LODWORD(v44) = v28;
    if ( v23 >= 0 )
    {
      if ( v28 >= *(_DWORD *)(a1 + 820) )
        v37 = v24;
      else
        v37 = *(UCHAR **)(a1 + 1784);
      if ( !v26 )
      {
        if ( RtlCompressBuffer(
               *(_WORD *)(a1 + 992),
               (PUCHAR)v25,
               0x1000u,
               v37,
               0x1000u,
               0x1000u,
               &Length,
               *(PVOID *)(a1 + 896)) >= 0 )
        {
          v26 = Length;
        }
        else
        {
          v26 = 4096;
          Length = 4096;
        }
        v28 = v44;
      }
      if ( v37 != v24 )
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
        v37 = (UCHAR *)v25;
        Length = 4096;
      }
      if ( v37 != v24 )
        memmove(v24, v37, v26);
      v27 = v43;
    }
    else
    {
      memmove(v24, v25, v26);
    }
    if ( *(_QWORD *)(a1 + 760) || (Space = ST_STORE<SM_TRAITS>::StDmpDummyPageRecordAllocate(a1), Space >= 0) )
    {
      v8 = 0;
      SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
      v29 = SmHpChunkAlloc(a1 + 192);
      v7 = v29;
      if ( !v29 )
      {
        Space = -1073741670;
        goto LABEL_40;
      }
      ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v29);
      *(_QWORD *)(v7 + 4) = 0LL;
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
        MetroHash64::Hash(v24, v31, v50, v30);
        LODWORD(v33) = *(_DWORD *)v50;
      }
      else
      {
        v33 = *(_QWORD *)(v46 + 96);
      }
      *(_DWORD *)(v7 + 8) = v33;
      v34 = *(_QWORD *)(a1 + 1016);
      if ( *(_DWORD *)(v34 + 24) )
      {
        v39 = -*(_DWORD *)(v34 + 8) & (*(_DWORD *)(v34 + 8) + Length - 1);
        ++*(_QWORD *)(a1 + 1024);
        *(_DWORD *)(v7 + 12) = *(_DWORD *)(a1 + 1024);
        *(_WORD *)(v7 + 6) = *(_WORD *)(a1 + 1028);
        *(_QWORD *)((char *)v51 + 4) = 0LL;
        LODWORD(v51[0]) = Length;
        HIDWORD(v51[0]) = *(_DWORD *)(v7 + 12);
        v40 = *(_QWORD *)(a1 + 1016);
        LODWORD(v51[1]) = *(unsigned __int16 *)(v7 + 6);
        if ( (int)SmCrAuthEncrypt(v40, v24, v24, v39, v51) < 0 )
        {
          Space = -1073741174;
          goto LABEL_40;
        }
      }
      else if ( *(_BYTE *)(a1 + 776) )
      {
        v41 = RtlComputeCrc32(0, v24, Length);
        *v45 = v41;
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
  if ( v8 )
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
  if ( v7 )
    SmHpChunkFree((_DWORD *)(a1 + 192), v7);
  return (unsigned int)Space;
}
