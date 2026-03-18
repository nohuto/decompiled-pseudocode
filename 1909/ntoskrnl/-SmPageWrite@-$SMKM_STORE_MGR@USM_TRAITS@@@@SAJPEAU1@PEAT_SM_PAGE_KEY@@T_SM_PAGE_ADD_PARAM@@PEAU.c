/*
 * XREFs of ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14014B900
 * Callers:
 *     SmpPageWrite @ 0x14014B7DC (SmpPageWrite.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FE40 (MmMapLockedPagesSpecifyCache.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     MmUnmapLockedPages @ 0x14006AF70 (MmUnmapLockedPages.c)
 *     KeSetTimer2 @ 0x14009C070 (KeSetTimer2.c)
 *     SmKmStoreReferenceEx @ 0x1400EE398 (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400EE3D4 (SmKmStoreRefFromStoreIndex.c)
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x140126A70 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14014BB94 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14014C428 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageWrite(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        int a7)
{
  _QWORD *v7; // r15
  char *PoolWithTag; // rdi
  void *v9; // r12
  __int64 v10; // rdx
  int v12; // ebx
  unsigned __int64 v14; // rax
  _DWORD *v15; // r14
  __int64 v16; // rbp
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
  _QWORD v31[9]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD *v33; // [rsp+A0h] [rbp+18h]

  v7 = a6;
  PoolWithTag = 0LL;
  v33 = a6;
  v9 = 0LL;
  v10 = a3 & 0x7FF;
  v12 = a3;
  a6[1] = 0LL;
  *v7 = a5;
  LODWORD(a6) = *(_DWORD *)(a4 + 40) >> 12;
  if ( (_DWORD)v10 == 1024 || (v14 = SmKmStoreReferenceEx(a1, v10, a3), (v15 = (_DWORD *)v14) == 0LL) )
  {
    v23 = -1073741811;
    goto LABEL_28;
  }
  v16 = (unsigned __int16)v12 >> 13;
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(v14 + 80, &a5, 0LL);
  if ( v15[234] <= (unsigned int)a5 )
  {
    v27 = v15[2 * v16 + 477];
    v28 = v15[2 * v16 + 476];
    v29 = v28 * (v15[216] >> 4);
    if ( v29 >= v27 && v29 - v27 < v28 << 8 )
    {
      v23 = -1073741110;
      goto LABEL_22;
    }
  }
  if ( (v12 & 0x40000) != 0 && (unsigned int)(v16 - 5) <= 1 )
    LODWORD(v16) = 6;
  if ( (_DWORD)v16 == 6 && !*(_DWORD *)(a1 + 1832) && !_InterlockedExchange((volatile __int32 *)(a1 + 1832), 1) )
  {
    v31[0] = 0LL;
    v31[1] = -1LL;
    KeSetTimer2(a1 + 1664, -3000000000LL, 3000000000LL, (__int64)v31);
  }
  if ( (*(_DWORD *)(a1 + 1840) & 0x20) == 0 || (*v15 & 0x400) != 0 )
  {
    v25 = 40LL;
    v26 = 1767337331;
  }
  else
  {
    PoolWithTag = (char *)RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 1408));
    if ( PoolWithTag )
      goto LABEL_9;
    v25 = 4096LL;
    v26 = 2002218355;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v25, v26);
  if ( !PoolWithTag )
  {
    v23 = -1073741670;
    goto LABEL_22;
  }
LABEL_9:
  memset(PoolWithTag, 0, 0x28uLL);
  v17 = (int)a2;
  *((_DWORD *)PoolWithTag + 6) = *a2;
  v18 = *((_DWORD *)PoolWithTag + 2) & 0xFFFFFFF8;
  *((_QWORD *)PoolWithTag + 2) = a4;
  v19 = v16 | v18;
  *((_DWORD *)PoolWithTag + 2) = v19;
  if ( (v12 & 0x10000) != 0 )
  {
    v19 |= 0x40000000u;
    *((_DWORD *)PoolWithTag + 2) = v19;
  }
  if ( (v12 & 0x20000) != 0 )
    *((_DWORD *)PoolWithTag + 2) = v19 | 0x40000000;
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
      goto LABEL_22;
    }
  }
  if ( (*(_DWORD *)(a1 + 1840) & 0x20) == 0 || (*v15 & 0x400) != 0 )
  {
    v23 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(a1, v17, (_DWORD)a6, v20, (__int64)PoolWithTag, (__int64)v7, 0);
    if ( v23 < 0 )
      goto LABEL_22;
    goto LABEL_21;
  }
  v22 = a7 != 0;
  a7 = -a7;
  v23 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(a1, v17, (_DWORD)a6, v20, 0LL, 0LL, (unsigned int)v22 + 2);
  if ( v23 >= 0 )
  {
    memset(PoolWithTag + 40, 0, 0x58uLL);
    *((_QWORD *)PoolWithTag + 15) = PoolWithTag;
    *((_QWORD *)PoolWithTag + 13) = v15;
    SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextQueueEntry((PEX_SPIN_LOCK)(a1 + 1264));
LABEL_21:
    v15 = 0LL;
    PoolWithTag = 0LL;
    v9 = 0LL;
    v23 = 259;
    v33 = 0LL;
  }
LABEL_22:
  if ( v15 )
  {
    v30 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, v15[1504] & 0x3FF);
    ExReleaseRundownProtection_0(v30 + 1);
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v9 )
    MmUnmapLockedPages(v9, (PMDL)a4);
LABEL_28:
  if ( v33 )
  {
    *v7 = 0LL;
    v7[1] = 0LL;
    *(_DWORD *)v7 = v23;
  }
  return (unsigned int)v23;
}
