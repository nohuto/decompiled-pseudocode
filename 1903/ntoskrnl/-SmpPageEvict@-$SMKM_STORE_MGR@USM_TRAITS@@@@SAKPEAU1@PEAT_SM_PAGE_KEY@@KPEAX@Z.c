/*
 * XREFs of ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x1401489E0
 * Callers:
 *     MiStoreEvictPageFile @ 0x1401315F8 (MiStoreEvictPageFile.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14009A788 (SmKmStoreRefFromStoreIndex.c)
 *     SmFpAllocate @ 0x140148B24 (SmFpAllocate.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140148C04 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x140149014 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpFree @ 0x140149E64 (SmFpFree.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14014C5E8 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14031FF30 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 */

__int64 SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(__int64 a1, _DWORD *a2, unsigned int a3, ...)
{
  __int64 v4; // rdi
  unsigned int v5; // eax
  unsigned int v6; // ebp
  __int64 *v7; // rax
  int v8; // r15d
  __int64 v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // r12d
  _QWORD *v13; // rbx
  __int64 v14; // rax
  struct _EX_RUNDOWN_REF *v16; // rax
  unsigned int v17; // [rsp+90h] [rbp+18h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

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
    v8 = dword_14058C0F0 & 1;
    v9 = *v7;
    v10 = (_QWORD *)SmFpAllocate(&dword_14058BF50, v8);
    v12 = v17;
    v13 = v10;
    if ( v10 )
    {
      v10[1] = 0LL;
      *v10 = 0LL;
      v14 = SmFpAllocate(&dword_14058BF50, v8);
      v4 = v14;
      if ( v14 )
      {
        *(_DWORD *)(v14 + 4) = 0;
        *(_QWORD *)(v14 + 16) = 0LL;
        *(_QWORD *)(v14 + 24) = 0LL;
        *(_DWORD *)v14 = 1;
        *(_DWORD *)(v14 + 8) = *a2;
        *(_DWORD *)(v14 + 12) = v12;
        *(_QWORD *)(v14 + 32) = v13;
        if ( (int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(v13, &SmGlobals, v6, v14) >= 0 )
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
      SmFpFree(&dword_14058BF50, 0LL, v13, v13);
  }
  return (unsigned int)v18;
}
