/*
 * XREFs of VslStartSecureProcessor @ 0x140852F0C
 * Callers:
 *     HvlHalStartVirtualProcessor @ 0x140288240 (HvlHalStartVirtualProcessor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140123FF0 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     VslpLockPagesForTransfer @ 0x140290D8C (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140290F68 (VslpUnlockPagesForTransfer.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslStartSecureProcessor(ULONG a1, __int64 a2)
{
  PHYSICAL_ADDRESS *PoolWithTag; // rax
  PHYSICAL_ADDRESS *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // edi
  _QWORD v9[10]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v10[10]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v11[14]; // [rsp+D8h] [rbp-30h] BYREF

  memset(v10, 0, 0x48uLL);
  memset(v11, 0, 0x68uLL);
  memset(v9, 0, 0x48uLL);
  PoolWithTag = (PHYSICAL_ADDRESS *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x54736D56u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v7 = *(_QWORD *)(KeLoaderBlock_0 + 136);
  PoolWithTag->LowPart = a1;
  PoolWithTag->HighPart = *(unsigned __int8 *)(v7 + 209) | (*(unsigned __int8 *)(v7 + 208) << 8);
  *(_OWORD *)&PoolWithTag[4].LowPart = *(_OWORD *)a2;
  *(_OWORD *)&PoolWithTag[6].LowPart = *(_OWORD *)(a2 + 16);
  *(_OWORD *)&PoolWithTag[8].LowPart = *(_OWORD *)(a2 + 32);
  *(_OWORD *)&PoolWithTag[10].LowPart = *(_OWORD *)(a2 + 48);
  *(_OWORD *)&PoolWithTag[12].LowPart = *(_OWORD *)(a2 + 64);
  *(_OWORD *)&PoolWithTag[14].LowPart = *(_OWORD *)(a2 + 80);
  *(_OWORD *)&PoolWithTag[16].LowPart = *(_OWORD *)(a2 + 96);
  *(_OWORD *)&PoolWithTag[18].LowPart = *(_OWORD *)(a2 + 112);
  *(_OWORD *)&PoolWithTag[20].LowPart = *(_OWORD *)(a2 + 128);
  *(_OWORD *)&PoolWithTag[22].LowPart = *(_OWORD *)(a2 + 144);
  *(_OWORD *)&PoolWithTag[24].LowPart = *(_OWORD *)(a2 + 160);
  *(_OWORD *)&PoolWithTag[26].LowPart = *(_OWORD *)(a2 + 176);
  *(_OWORD *)&PoolWithTag[28].LowPart = *(_OWORD *)(a2 + 192);
  *(_OWORD *)&PoolWithTag[30].LowPart = *(_OWORD *)(a2 + 208);
  result = VslpLockPagesForTransfer((__int64)v10, v7 - 384, 0x9080u, 2, 2);
  if ( (int)result >= 0 )
  {
    v5[1] = (PHYSICAL_ADDRESS)v10[0];
    v5[2] = (PHYSICAL_ADDRESS)v10[7];
    v5[3] = MmGetPhysicalAddress(*(PVOID *)(a2 + 176));
    v8 = VslpLockPagesForTransfer((__int64)v9, (__int64)v5, 0x100u, 0, 0);
    if ( v8 >= 0 )
    {
      v11[1] = v9[0];
      v11[2] = v9[7];
      v8 = VslpEnterIumSecureMode(2, 2LL, 0LL, (__int64)v11);
      VslpUnlockPagesForTransfer((__int64)v9);
    }
    VslpUnlockPagesForTransfer((__int64)v10);
    ExFreePoolWithTag(v5, 0);
    return (unsigned int)v8;
  }
  return result;
}
