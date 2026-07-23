/*
 * XREFs of ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x140303D80
 * Callers:
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1403049A0 (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x140305C6C (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ?StRegionReadDereference@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1403064E0 (-StRegionReadDereference@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StRegionReadReference@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z @ 0x140306510 (-StRegionReadReference@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z.c)
 *     SmCalcIoWorkItemSize @ 0x1403091B0 (SmCalcIoWorkItemSize.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall ST_STORE<SM_TRAITS>::StDeviceIoBuild(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r10d
  _DWORD *v7; // r12
  int v8; // r9d
  unsigned int v9; // edi
  int v10; // r8d
  unsigned int v11; // ebp
  int Reference; // r15d
  unsigned __int64 PoolWithTag; // rsi
  _DWORD *v14; // rdi
  unsigned int v15; // eax
  size_t v16; // r14
  int v17; // ecx
  unsigned int v19; // [rsp+70h] [rbp+18h]

  v6 = *(_DWORD *)(a1 + 824) + *(unsigned __int16 *)(a2 + 4);
  v7 = 0LL;
  v8 = *(_DWORD *)(a1 + 792);
  v9 = *(_DWORD *)a2 >> *(_DWORD *)(a1 + 812);
  v19 = v9;
  v10 = (v8 - 1) & (16 * (*(_DWORD *)a2 & *(_DWORD *)(a1 + 808)));
  v11 = v8 + v10 - ((v8 - 1) & (v10 + v8 + v6 - 1)) + v6 - 1;
  Reference = ST_STORE<SM_TRAITS>::StRegionReadReference(a1, v9);
  if ( !Reference )
    return v7;
  PoolWithTag = *(_QWORD *)(a1 + 1800);
  if ( PoolWithTag )
  {
    *(_DWORD *)(a1 + 1800) = PoolWithTag | 1;
    goto LABEL_5;
  }
  PoolWithTag = (unsigned __int64)ExAllocatePoolWithTag(NonPagedPoolNx, v11 + *(_DWORD *)(a1 + 792) + 28, 0x74536D73u);
  if ( PoolWithTag )
  {
LABEL_5:
    *(_QWORD *)PoolWithTag = 0LL;
    *(_QWORD *)(PoolWithTag + 8) = 0LL;
    *(_QWORD *)(PoolWithTag + 16) = 0LL;
    *(_DWORD *)(PoolWithTag + 24) = 0;
    *(_DWORD *)PoolWithTag = 1;
    *(_OWORD *)(PoolWithTag + 12) = *(_OWORD *)a2;
    v14 = *(_DWORD **)(a1 + 1808);
    v15 = SmCalcIoWorkItemSize(
            *(_QWORD *)(a1 + 800),
            -(__int64)*(unsigned int *)(a1 + 792) & (PoolWithTag
                                                   + *(unsigned int *)(a1 + 792)
                                                   + 16LL * *(unsigned int *)PoolWithTag
                                                   + 11),
            v11);
    v16 = v15;
    if ( v14 )
    {
      *(_DWORD *)(a1 + 1808) = (unsigned int)v14 | 1;
    }
    else
    {
      v14 = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x74536D73u);
      if ( !v14 )
      {
LABEL_9:
        if ( PoolWithTag )
        {
          v17 = *(_DWORD *)(a1 + 1800);
          if ( (v17 & 1) != 0 && (PoolWithTag | 1) == *(_QWORD *)(a1 + 1800) )
            *(_DWORD *)(a1 + 1800) = v17 & 0xFFFFFFFE;
          else
            ExFreePoolWithTag((PVOID)PoolWithTag, 0);
        }
        v9 = v19;
        goto LABEL_15;
      }
    }
    memset(v14, 0, v16);
    *v14 |= 7u;
    v7 = v14;
    *((_QWORD *)v14 + 1) = a4;
    *((_QWORD *)v14 + 2) = PoolWithTag;
    PoolWithTag = 0LL;
    v14[6] = *(_DWORD *)a2;
    v14[7] = v14[7] & 0x1D | (32 * v11) | *(_DWORD *)(a1 + 832) & 2;
    Reference = 0;
    goto LABEL_9;
  }
LABEL_15:
  if ( Reference )
    ST_STORE<SM_TRAITS>::StRegionReadDereference(a1, v9);
  return v7;
}
