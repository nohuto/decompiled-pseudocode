/*
 * XREFs of ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14014D8C4
 * Callers:
 *     SmpPageWrite @ 0x14014D794 (SmpPageWrite.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     SmKmStoreReferenceEx @ 0x1400E126C (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400E12A8 (SmKmStoreRefFromStoreIndex.c)
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x1401279C4 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14014DB74 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14014E3BC (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ?SmHighMemPriorityTimerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140302574 (-SmHighMemPriorityTimerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageWrite(
        __int64 a1,
        _DWORD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        int a7)
{
  _QWORD *v7; // r15
  _DWORD *PoolWithTag; // rdi
  void *v9; // r12
  __int64 v10; // rdx
  unsigned __int64 v14; // rax
  _DWORD *v15; // r14
  __int64 v16; // rsi
  int v17; // ecx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // ebx
  PVOID v21; // rax
  bool v22; // cf
  int v23; // ebx
  SIZE_T v25; // rdx
  ULONG v26; // r8d
  unsigned int v27; // edx
  int v28; // ecx
  unsigned int v29; // eax
  struct _EX_RUNDOWN_REF *v30; // rax
  _QWORD *v32; // [rsp+90h] [rbp+18h]

  v7 = a6;
  v32 = a6;
  PoolWithTag = 0LL;
  v9 = 0LL;
  v10 = a3 & 0x7FF;
  a6[1] = 0LL;
  *v7 = a5;
  LODWORD(a6) = *(_DWORD *)(a4 + 40) >> 12;
  if ( (_DWORD)v10 == 1024 || (v14 = SmKmStoreReferenceEx(a1, v10), (v15 = (_DWORD *)v14) == 0LL) )
  {
    v23 = -1073741811;
    goto LABEL_29;
  }
  v16 = (unsigned __int16)a3 >> 13;
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(v14 + 80, &a5, 0LL);
  if ( v15[234] <= (unsigned int)a5 )
  {
    v27 = v15[2 * v16 + 477];
    v28 = v15[2 * v16 + 476];
    v29 = v28 * (v15[216] >> 4);
    if ( v29 >= v27 && v29 - v27 < v28 << 8 )
    {
      v23 = -1073741110;
      goto LABEL_23;
    }
  }
  if ( (a3 & 0x40000) != 0 && (unsigned int)(v16 - 5) <= 1 )
    LODWORD(v16) = 6;
  if ( (_DWORD)v16 == 6 )
    SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityTimerStart(a1);
  if ( (*(_DWORD *)(a1 + 1840) & 0x20) == 0 || (*v15 & 0x400) != 0 )
  {
    v25 = 40LL;
    v26 = 1767337331;
  }
  else
  {
    PoolWithTag = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 1408));
    if ( PoolWithTag )
      goto LABEL_10;
    v25 = 4096LL;
    v26 = 2002218355;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v25, v26);
  if ( !PoolWithTag )
  {
    v23 = -1073741670;
    goto LABEL_23;
  }
LABEL_10:
  memset(PoolWithTag, 0, 0x28uLL);
  *PoolWithTag = 0;
  v17 = (int)a2;
  PoolWithTag[6] = *a2;
  v18 = PoolWithTag[2] & 0xFFFFFFF8;
  *((_QWORD *)PoolWithTag + 2) = a4;
  v19 = v16 | v18;
  PoolWithTag[2] = v19;
  if ( (a3 & 0x10000) != 0 )
  {
    v19 |= 0x40000000u;
    PoolWithTag[2] = v19;
  }
  if ( (a3 & 0x20000) != 0 )
    PoolWithTag[2] = v19 | 0x40000000;
  *((_QWORD *)PoolWithTag + 4) = v7;
  v20 = v15[1504] & 0x3FF;
  if ( (*(_DWORD *)(a1 + 1840) & 2) != 0 )
  {
    if ( (*(_BYTE *)(a4 + 10) & 5) != 0 )
    {
      v9 = *(void **)(a4 + 24);
    }
    else
    {
      v21 = MmMapLockedPagesSpecifyCache((PMDL)a4, 0, MmCached, 0LL, 0, 0x40000020u);
      v17 = (int)a2;
      v9 = v21;
    }
    if ( !v9 )
    {
      v23 = -1073741688;
      goto LABEL_23;
    }
  }
  if ( (*(_DWORD *)(a1 + 1840) & 0x20) == 0 || (*v15 & 0x400) != 0 )
  {
    v23 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(a1, v17, (_DWORD)a6, v20, (__int64)PoolWithTag, (__int64)v7, 0);
    if ( v23 < 0 )
      goto LABEL_23;
    goto LABEL_22;
  }
  v22 = a7 != 0;
  a7 = -a7;
  v23 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(a1, v17, (_DWORD)a6, v20, 0LL, 0LL, (unsigned int)v22 + 2);
  if ( v23 >= 0 )
  {
    memset(PoolWithTag + 10, 0, 0x58uLL);
    *((_QWORD *)PoolWithTag + 15) = PoolWithTag;
    *((_QWORD *)PoolWithTag + 13) = v15;
    SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextQueueEntry((PEX_SPIN_LOCK)(a1 + 1264));
LABEL_22:
    v15 = 0LL;
    PoolWithTag = 0LL;
    v9 = 0LL;
    v23 = 259;
    v32 = 0LL;
  }
LABEL_23:
  if ( v15 )
  {
    v30 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, v15[1504] & 0x3FF);
    ExReleaseRundownProtection_0(v30 + 1);
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v9 )
    MmUnmapLockedPages(v9, (PMDL)a4);
LABEL_29:
  if ( v32 )
  {
    *v7 = 0LL;
    v7[1] = 0LL;
    *(_DWORD *)v7 = v23;
  }
  return (unsigned int)v23;
}
