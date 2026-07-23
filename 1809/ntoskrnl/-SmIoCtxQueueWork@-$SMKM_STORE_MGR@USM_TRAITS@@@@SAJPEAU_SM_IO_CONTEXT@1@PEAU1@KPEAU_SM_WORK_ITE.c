/*
 * XREFs of ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14014EAD0
 * Callers:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14014B374 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14014BA40 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14014E3BC (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x1400B6A80 (PsGetIoPriorityThread.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400E12A8 (SmKmStoreRefFromStoreIndex.c)
 *     KeQueryPriorityThread @ 0x1400E17E0 (KeQueryPriorityThread.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14014C04C (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpFree @ 0x14014CB3C (SmFpFree.c)
 *     ?SmIoCtxPrepareToQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14014ECD4 (-SmIoCtxPrepareToQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WOR.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14014EE10 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x14015141C (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(__int64 *a1, __int64 a2, __int16 a3, int *a4)
{
  int v8; // r15d
  int v9; // r15d
  int v10; // r8d
  int v11; // r14d
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 v14; // r9
  struct _MDL *v15; // r9
  void (__fastcall *v17)(__int64, __int64 *, __int64); // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rcx
  unsigned int PriorityThread; // eax
  _DWORD *v23; // r9
  __int64 v24; // [rsp+30h] [rbp-30h] BYREF
  int v25; // [rsp+38h] [rbp-28h]
  __int16 v26; // [rsp+3Ch] [rbp-24h]
  _QWORD v27[4]; // [rsp+40h] [rbp-20h] BYREF

  memset(v27, 0, sizeof(v27));
  v8 = *a4;
  v27[0] = 0LL;
  v27[1] = v27;
  v9 = v8 & 7;
  v11 = SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxPrepareToQueue((_DWORD)a1, a2, v10, (_DWORD)a4, (__int64)v27);
  if ( v11 < 0 )
  {
    v15 = (struct _MDL *)v27[2];
  }
  else
  {
    if ( v9 != 2 )
      goto LABEL_3;
    v17 = *(void (__fastcall **)(__int64, __int64 *, __int64))(a2 + 1848);
    if ( v17 )
    {
      v24 = *a1;
      v25 = a4[6];
      v26 = a3;
      v17(a2, &v24, 5LL);
    }
    CurrentThread = KeGetCurrentThread();
    v19 = SmKmStoreRefFromStoreIndex(a2, a3 & 0x3FF);
    v20 = *(_QWORD *)v19;
    if ( (*(_BYTE *)(*(_QWORD *)v19 + 6021LL) & 4) != 0
      && (a4[2] & 0x4000000) != 0
      && (int)PsGetIoPriorityThread((__int64)CurrentThread) >= 2 )
    {
      if ( (_QWORD *)v27[1] != v27 )
      {
        v21 = v27[0];
        v27[0] = *(_QWORD *)v27[0] & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v21 == v27[1] )
        {
          v27[0] = 0LL;
          v27[1] = v27;
        }
        else
        {
          *(_QWORD *)v27[1] = *(_QWORD *)v27[1] & 7LL | (8LL * (*(_QWORD *)v27[1] >> 3) - 8);
        }
      }
      memset(a4 + 10, 0, 0x30uLL);
      *((_QWORD *)a4 + 9) = v20;
      *((_QWORD *)a4 + 10) = a2 + 464;
      PriorityThread = KeQueryPriorityThread(CurrentThread);
      SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueInsert(a2 + 464, a4 + 10, PriorityThread);
    }
    else
    {
LABEL_3:
      if ( (_QWORD *)v27[1] != v27 )
      {
        v12 = v27[0];
        v27[0] = *(_QWORD *)v27[0] & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v12 == v27[1] )
        {
          v27[0] = 0LL;
          v27[1] = v27;
        }
        else
        {
          *(_QWORD *)v27[1] = *(_QWORD *)v27[1] & 7LL | (8LL * (*(_QWORD *)v27[1] >> 3) - 8);
        }
      }
      v13 = (_QWORD *)SmKmStoreRefFromStoreIndex(a2, a3 & 0x3FF);
      SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(*v13, v14, 0LL);
    }
    v15 = 0LL;
    v27[2] = 0LL;
    v11 = 0;
  }
  if ( v15 )
    SmFpFree(a2 + 1536, 5, -1LL, v15);
  while ( (_QWORD *)v27[1] != v27 )
  {
    v23 = (_DWORD *)v27[0];
    v27[0] = *(_QWORD *)v27[0] & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v23 == (_DWORD *)v27[1] )
    {
      v27[0] = 0LL;
      v27[1] = v27;
    }
    else
    {
      *(_QWORD *)v27[1] = *(_QWORD *)v27[1] & 7LL | (8LL * (*(_QWORD *)v27[1] >> 3) - 8);
    }
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(a2, v23, -1LL);
  }
  return (unsigned int)v11;
}
