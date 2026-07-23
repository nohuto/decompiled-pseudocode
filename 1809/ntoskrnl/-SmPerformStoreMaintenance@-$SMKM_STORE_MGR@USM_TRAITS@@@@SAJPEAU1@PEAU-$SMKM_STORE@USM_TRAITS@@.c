/*
 * XREFs of ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140302704
 * Callers:
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14013BD0C (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140303740 (-SmStoreRequest@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_I.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPerformStoreMaintenance(int a1, __int64 a2, unsigned __int8 a3)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rdi
  ULONG LowPart; // ebx
  int v9; // eax
  int v10; // edx
  LARGE_INTEGER v12; // [rsp+30h] [rbp-30h] BYREF
  __int16 Object; // [rsp+40h] [rbp-20h] BYREF
  char v14; // [rsp+42h] [rbp-1Eh]
  int v15; // [rsp+44h] [rbp-1Ch]
  _QWORD v16[3]; // [rsp+48h] [rbp-18h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x64576D73u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    v9 = v7[2];
    *v7 = 5;
    v7[2] ^= (a3 ^ (unsigned __int8)v9) & 7;
    v10 = *(_DWORD *)(a2 + 6016);
    Object = 0;
    v15 = 0;
    v16[1] = v16;
    v16[0] = v16;
    v14 = 6;
    LowPart = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequest(a1, v10, (_DWORD)v7, (unsigned int)&Object, (__int64)&v12);
    if ( (LowPart & 0x80000000) == 0 )
    {
      v7 = 0LL;
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      LowPart = v12.LowPart;
      if ( (v12.LowPart & 0x80000000) != 0 )
        return LowPart;
      LowPart = 0;
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  else
  {
    return (ULONG)-1073741670;
  }
  return LowPart;
}
