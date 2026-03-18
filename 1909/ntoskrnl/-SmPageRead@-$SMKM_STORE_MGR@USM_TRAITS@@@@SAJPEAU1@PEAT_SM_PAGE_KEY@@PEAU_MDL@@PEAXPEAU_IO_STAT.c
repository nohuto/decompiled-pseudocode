/*
 * XREFs of ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1401644DC
 * Callers:
 *     SmPageRead @ 0x140165CEC (SmPageRead.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400EE3D4 (SmKmStoreRefFromStoreIndex.c)
 *     SmFpAllocate @ 0x1401491C4 (SmFpAllocate.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x1401496B4 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14014CC88 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     SmAcquireReleaseResAvailForRead @ 0x14016470C (SmAcquireReleaseResAvailForRead.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x140164774 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageRead(
        __int64 a1,
        _DWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  char v5; // bl
  __int64 *v6; // r14
  unsigned __int64 v7; // rbp
  unsigned int v9; // esi
  __int64 v10; // r12
  int PickStore; // eax
  __int64 v12; // r15
  unsigned int v13; // edi
  char v14; // di
  _DWORD *PoolWithTag; // rsi
  bool v16; // zf
  struct _EX_RUNDOWN_REF *v18; // rax
  unsigned int v19; // [rsp+70h] [rbp+8h]
  char v20; // [rsp+80h] [rbp+18h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  v21 = 0LL;
  v5 = 0;
  v6 = a5;
  v7 = a3;
  if ( (a3 & 3) != 0 )
  {
    v7 = a3 & 0xFFFFFFFFFFFFFFFCuLL;
    v5 = a3 & 1 | 2;
    if ( (a3 & 2) == 0 )
      v5 = a3 & 1;
  }
  a5[1] = 0LL;
  *v6 = a4;
  v9 = *(_DWORD *)(v7 + 40) >> 12;
  v19 = v9;
  v10 = (__int64)v6;
  LODWORD(a5) = v9;
  PickStore = SMKM_STORE_MGR<SM_TRAITS>::SmReadPickStore(
                (unsigned int)&SmGlobals,
                (_DWORD)a2,
                (unsigned int)&a5,
                (unsigned int)&v21,
                (__int64)&v20);
  v12 = v21;
  v13 = PickStore;
  if ( PickStore >= 0 )
  {
    v14 = (char)a5;
    v6[1] = (unsigned int)a5;
    if ( (v5 & 2) != 0 && !*(_BYTE *)(v12 + 6020) )
    {
      v13 = -1073741791;
      goto LABEL_18;
    }
    if ( (dword_14058C0F0 & 0x10) == 0 )
    {
LABEL_7:
      if ( (v5 & 1) != 0 )
      {
        PoolWithTag = RtlpInterlockedPopEntrySList(&stru_14058BEA0);
        if ( PoolWithTag )
          goto LABEL_9;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x61576D73u);
        if ( PoolWithTag )
          goto LABEL_9;
        v5 &= ~1u;
      }
      PoolWithTag = (_DWORD *)SmFpAllocate(&dword_14058BFC0, 1, (__int64)v6, 0LL, dword_14058C0F0 & 1);
      if ( !PoolWithTag )
      {
        v13 = -1073741670;
LABEL_17:
        v9 = v19;
        goto LABEL_18;
      }
LABEL_9:
      memset(PoolWithTag, 0, 0x28uLL);
      v16 = (v20 & 1) == 0;
      PoolWithTag[6] = *a2;
      *PoolWithTag = 2;
      *((_QWORD *)PoolWithTag + 2) = v7;
      *((_BYTE *)PoolWithTag + 8) = v14;
      *((_QWORD *)PoolWithTag + 4) = v6;
      if ( !v16 )
        PoolWithTag[2] |= 0x1000000u;
      if ( (v5 & 1) != 0 )
        PoolWithTag[2] |= 0x4000000u;
      if ( (int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(
                  v6,
                  (__int64)&SmGlobals,
                  *(_DWORD *)(v12 + 6016) & 0x3FF,
                  PoolWithTag) < 0 )
      {
        v13 = -1073741670;
      }
      else
      {
        PoolWithTag = 0LL;
        v10 = 0LL;
        v12 = 0LL;
        v5 = -5;
        v13 = 259;
      }
      if ( PoolWithTag )
        SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource((__int64)&SmGlobals, PoolWithTag, v10);
      goto LABEL_17;
    }
    v5 ^= (v5 ^ (8 * SmAcquireReleaseResAvailForRead(v6, v9, 0LL))) & 8;
    if ( (v5 & 8) != 0 )
    {
      v5 |= 4u;
      goto LABEL_7;
    }
    v13 = -1073741670;
  }
LABEL_18:
  if ( v12 )
  {
    v18 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_DWORD *)(v12 + 6016) & 0x3FF);
    ExReleaseRundownProtection_0(v18 + 1);
  }
  if ( (v5 & 4) != 0 )
    SmAcquireReleaseResAvailForRead(v10, v9, 1LL);
  if ( v10 )
  {
    *v6 = 0LL;
    v6[1] = 0LL;
    *(_DWORD *)v6 = v13;
  }
  return v13;
}
