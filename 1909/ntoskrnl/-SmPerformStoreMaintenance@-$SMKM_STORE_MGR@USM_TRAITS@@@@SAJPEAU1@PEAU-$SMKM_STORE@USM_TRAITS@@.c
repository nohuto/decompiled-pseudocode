/*
 * XREFs of ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140144574
 * Callers:
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14013E590 (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140144670 (-SmStoreRequest@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_I.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPerformStoreMaintenance(int a1, __int64 a2, unsigned __int8 a3)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rdi
  int v8; // eax
  int v9; // edx
  ULONG LowPart; // ebx
  LARGE_INTEGER v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int16 Object; // [rsp+40h] [rbp-20h] BYREF
  char v15; // [rsp+42h] [rbp-1Eh]
  int v16; // [rsp+44h] [rbp-1Ch]
  _QWORD v17[3]; // [rsp+48h] [rbp-18h] BYREF

  v12.QuadPart = 0LL;
  v13 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x64576D73u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return (ULONG)-1073741670;
  memset(PoolWithTag, 0, 0x28uLL);
  v8 = v7[2];
  *v7 = 5;
  v7[2] ^= (a3 ^ (unsigned __int8)v8) & 7;
  v9 = *(_DWORD *)(a2 + 6016);
  Object = 0;
  v16 = 0;
  v17[1] = v17;
  v17[0] = v17;
  v15 = 6;
  LowPart = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequest(a1, v9, (_DWORD)v7, (unsigned int)&Object, (__int64)&v12);
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
  return LowPart;
}
