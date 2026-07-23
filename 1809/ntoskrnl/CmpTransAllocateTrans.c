/*
 * XREFs of CmpTransAllocateTrans @ 0x14069526C
 * Callers:
 *     CmpTransSearchAddLightWeightTrans @ 0x1406950AC (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x1406FB968 (CmpTransSearchAddTrans.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     CmpBindHiveToTrans @ 0x14069535C (CmpBindHiveToTrans.c)
 */

char *__fastcall CmpTransAllocateTrans(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  char *PoolWithTag; // rax
  char *v9; // rbx
  int v10; // eax
  __int128 v11; // xmm0

  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0xB8uLL, 0x72544D43u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xB8uLL);
    *((_QWORD *)v9 + 7) = a1;
    *((_QWORD *)v9 + 13) = CLFS_LSN_INVALID_EXT;
    *((_DWORD *)v9 + 12) = 8;
    v10 = *((_DWORD *)v9 + 12);
    if ( (a1 & 1) != 0 )
      v10 = 136;
    *((_QWORD *)v9 + 8) = a3;
    *((_DWORD *)v9 + 12) = v10;
    if ( a2 )
    {
      v11 = *a2;
    }
    else
    {
      if ( (a1 & 1) != 0 )
      {
LABEL_9:
        *((_QWORD *)v9 + 1) = v9;
        *(_QWORD *)v9 = v9;
        *((_QWORD *)v9 + 3) = v9 + 16;
        *((_QWORD *)v9 + 2) = v9 + 16;
        *((_QWORD *)v9 + 5) = v9 + 32;
        *((_QWORD *)v9 + 4) = v9 + 32;
        CmpBindHiveToTrans(a4, v9);
        return v9;
      }
      v11 = *(_OWORD *)((a1 & 0xFFFFFFFFFFFFFFFEuLL) + 176);
    }
    *(_OWORD *)(v9 + 88) = v11;
    goto LABEL_9;
  }
  return v9;
}
