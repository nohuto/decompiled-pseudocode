/*
 * XREFs of ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14014BA40
 * Callers:
 *     MiStoreEvictPageFile @ 0x140137F68 (MiStoreEvictPageFile.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400E12A8 (SmKmStoreRefFromStoreIndex.c)
 *     SmFpAllocate @ 0x14014BB74 (SmFpAllocate.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14014BC54 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14014C04C (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpFree @ 0x14014CB3C (SmFpFree.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14014EAD0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140302268 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 */

__int64 SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(__int64 a1, _DWORD *a2, unsigned int a3, ...)
{
  _DWORD *v4; // rdi
  unsigned int v5; // eax
  unsigned int v6; // ebp
  __int64 *v7; // rax
  int v8; // r15d
  __int64 v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // r12d
  _QWORD *v13; // rbx
  _DWORD *v14; // rax
  struct _EX_RUNDOWN_REF *v16; // rax
  unsigned int v17; // [rsp+70h] [rbp+18h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, _QWORD);
  v17 = a3;
  v4 = 0LL;
  v5 = SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictInitiate(a1, a2, &v17, (__int64 *)va);
  v6 = v5;
  if ( v5 != 1024 )
  {
    v7 = (__int64 *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v5 & 0x3FF);
    v8 = dword_14055C0F0 & 1;
    v9 = *v7;
    v10 = (_QWORD *)SmFpAllocate(&dword_14055BF50, v8);
    v12 = v17;
    v13 = v10;
    if ( v10 )
    {
      *v10 = 0LL;
      v10[1] = 0LL;
      *v10 = 0LL;
      v14 = (_DWORD *)SmFpAllocate(&dword_14055BF50, v8);
      v4 = v14;
      if ( v14 )
      {
        memset(v14, 0, 0x28uLL);
        v4[2] = *a2;
        *v4 = 1;
        v4[3] = v12;
        *((_QWORD *)v4 + 4) = v13;
        if ( (int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(v13, &SmGlobals, v6, v4) >= 0 )
        {
          v9 = 0LL;
          v4 = 0LL;
          v13 = 0LL;
        }
      }
    }
    if ( v9 )
    {
      SMKM_STORE_MGR<SM_TRAITS>::SmFeSetEvictFailed(v11, a2, v12);
      v16 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_DWORD *)(v9 + 6016) & 0x3FF);
      ExReleaseRundownProtection_0(v16 + 1);
    }
    if ( v4 )
      SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(&SmGlobals, v4, v13);
    if ( v13 )
      SmFpFree(&dword_14055BF50, 0LL, v13, v13);
  }
  return (unsigned int)v18;
}
