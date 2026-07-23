/*
 * XREFs of ?SmIoCtxPrepareToQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14014ECD4
 * Callers:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14014EAD0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 * Callees:
 *     SmFpAllocate @ 0x14014BB74 (SmFpAllocate.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14014C04C (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpFree @ 0x14014CB3C (SmFpFree.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxPrepareToQueue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  int v5; // eax
  unsigned __int64 *v6; // r8
  unsigned __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  __int128 v12; // xmm0
  unsigned int v13; // r14d
  int v15; // ecx
  BOOL v16; // eax
  _DWORD *v17; // rdx
  __int128 v18; // [rsp+30h] [rbp-10h] BYREF

  v5 = *(_DWORD *)a4;
  v6 = (unsigned __int64 *)&v18;
  v7 = 0LL;
  *((_QWORD *)&v18 + 1) = &v18;
  *(_QWORD *)&v18 = 0LL;
  v8 = 0LL;
  v9 = a4;
  if ( (v5 & 7) == 2 )
  {
    v15 = *(_DWORD *)(a2 + 1840);
    v8 = *(_QWORD *)(a4 + 16);
    if ( (v15 & 2) != 0 )
    {
      v16 = 0;
      if ( (v15 & 1) != 0 )
        v16 = *(_DWORD *)(v8 + 40) <= 0x1000u;
      v7 = SmFpAllocate((PEX_SPIN_LOCK)(a2 + 1536), 5, a1, v8, v16);
      if ( !v7 )
      {
        v13 = -1073741670;
        goto LABEL_17;
      }
      v6 = (unsigned __int64 *)*((_QWORD *)&v18 + 1);
    }
  }
  *(_QWORD *)v9 = *(_DWORD *)v9 & 7 | ((*v6 & 0xFFFFFFFFFFFFFFF8uLL) + 8);
  *v6 = v9 | *(_DWORD *)v6 & 7;
  *((_QWORD *)&v18 + 1) = v9;
  if ( (__int128 *)v9 != &v18 )
  {
    v12 = v18;
    *(_QWORD *)&v18 = 0LL;
    v9 = (unsigned __int64)&v18;
    *((_QWORD *)&v18 + 1) = &v18;
    *(_OWORD *)a5 = v12;
  }
  if ( v7 )
    *(_QWORD *)(a5 + 16) = v8;
  *(_QWORD *)(a5 + 24) = a1;
  v13 = 0;
  while ( (__int128 *)v9 != &v18 )
  {
    v17 = (_DWORD *)v18;
    *(_QWORD *)&v18 = *(_QWORD *)v18 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v17 == (_DWORD *)v9 )
    {
      *(_QWORD *)&v18 = 0LL;
      *((_QWORD *)&v18 + 1) = &v18;
    }
    else
    {
      *(_QWORD *)v9 = *(_QWORD *)v9 & 7LL | (8LL * (*(_QWORD *)v9 >> 3) - 8);
    }
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(a2, v17, a1);
LABEL_17:
    v9 = *((_QWORD *)&v18 + 1);
  }
  return v13;
}
