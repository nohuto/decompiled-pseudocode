/*
 * XREFs of ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x140149A74
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401049B0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x1401623C0 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14009A788 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x140149014 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x140149C28 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     SmFpFree @ 0x140149E64 (SmFpFree.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v4; // rdi
  __int64 v7; // rdx
  __int64 v8; // r12
  unsigned int v9; // ebp
  int v10; // r15d
  int v11; // r14d
  __int128 v12; // xmm1
  _SLIST_HEADER *v13; // rcx
  BOOL v14; // esi
  struct _EX_RUNDOWN_REF *v15; // rax
  int v16; // edi
  _OWORD v17[3]; // [rsp+20h] [rbp-58h] BYREF

  v4 = a2;
  memset(v17, 0, 0x28uLL);
  v8 = *(_QWORD *)(a3 + 32);
  v9 = *(_DWORD *)a3 & 7;
  v10 = 1;
  v11 = 1;
  if ( a4 )
  {
    v12 = *(_OWORD *)(a3 + 16);
    v17[0] = *(_OWORD *)a3;
    *(_QWORD *)&v17[2] = *(_QWORD *)(a3 + 32);
    v17[1] = v12;
  }
  if ( v9 < 4 )
  {
    if ( v9 == 2 )
    {
      if ( (*(_DWORD *)(a3 + 8) & 0x4000000) != 0 )
      {
        if ( LOWORD(stru_14058BEA0.Alignment) >= 0x1000u )
        {
          ExFreePoolWithTag((PVOID)a3, 0);
          goto LABEL_9;
        }
        v13 = &stru_14058BEA0;
        goto LABEL_8;
      }
    }
    else if ( !v9 && *(int *)(a3 + 8) < 0 )
    {
      *(_QWORD *)&v17[1] = **(_QWORD **)(a3 + 16);
      v13 = &stru_14058BF40;
LABEL_8:
      RtlpInterlockedPushEntrySList(v13, (PSLIST_ENTRY)a3);
LABEL_9:
      v14 = v9 == 1;
      goto LABEL_10;
    }
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource((__int64)&SmGlobals, (_DWORD *)a3, v8);
    goto LABEL_9;
  }
  v16 = *(_DWORD *)(a3 + 8) & 7;
  if ( v9 != 5 )
  {
    v14 = 0;
    if ( !v16 )
    {
      *(_QWORD *)(a3 + 32) = 0LL;
      goto LABEL_25;
    }
    if ( v16 != 3 )
    {
      if ( (unsigned int)(v16 - 1) <= 1 )
        v11 = 0;
      goto LABEL_25;
    }
    ExFreePoolWithTag((PVOID)a3, 0);
LABEL_16:
    v15 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_DWORD *)(a2 + 6016) & 0x3FF);
    ExReleaseRundownProtection_0(v15 + 1);
    return;
  }
  ExFreePoolWithTag((PVOID)a3, 0);
  if ( !v16 )
    goto LABEL_16;
  v14 = 0;
LABEL_25:
  v4 = a2;
LABEL_10:
  if ( a4 )
    v10 = SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxWorkItemComplete(v17, v7, v4, *a4);
  if ( v10 )
  {
    if ( v14 )
      SmFpFree(&dword_14058BF50, 0LL, v8, v8);
  }
  if ( v11 )
    goto LABEL_16;
}
