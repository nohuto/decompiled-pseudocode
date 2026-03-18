/*
 * XREFs of CmpTransAllocateTrans @ 0x1406EDAA0
 * Callers:
 *     CmpTransSearchAddTrans @ 0x1406367D8 (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1406387F8 (CmpTransSearchAddLightWeightTrans.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     CmpBindHiveToTrans @ 0x140636C14 (CmpBindHiveToTrans.c)
 */

__int64 __fastcall CmpTransAllocateTrans(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  PVOID PoolWithTag; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int128 v12; // xmm0

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xB8uLL, 0x72544D43u);
  v9 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xB8uLL);
    *(_QWORD *)(v9 + 56) = a1;
    *(_QWORD *)(v9 + 104) = CLFS_LSN_INVALID_EXT;
    *(_DWORD *)(v9 + 48) = 8;
    v10 = *(_DWORD *)(v9 + 48);
    if ( (a1 & 1) != 0 )
      v10 = 136;
    *(_QWORD *)(v9 + 64) = a3;
    *(_DWORD *)(v9 + 48) = v10;
    if ( a2 )
    {
      v12 = *a2;
    }
    else
    {
      if ( (a1 & 1) != 0 )
      {
LABEL_6:
        *(_QWORD *)(v9 + 24) = v9 + 16;
        *(_QWORD *)(v9 + 16) = v9 + 16;
        *(_QWORD *)(v9 + 40) = v9 + 32;
        *(_QWORD *)(v9 + 32) = v9 + 32;
        CmpBindHiveToTrans(a4, v9);
        return v9;
      }
      v12 = *(_OWORD *)((a1 & 0xFFFFFFFFFFFFFFFEuLL) + 176);
    }
    *(_OWORD *)(v9 + 88) = v12;
    goto LABEL_6;
  }
  return v9;
}
