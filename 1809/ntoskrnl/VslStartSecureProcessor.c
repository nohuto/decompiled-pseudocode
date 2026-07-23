/*
 * XREFs of VslStartSecureProcessor @ 0x14081A074
 * Callers:
 *     HvlHalStartVirtualProcessor @ 0x140274470 (HvlHalStartVirtualProcessor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     VslpLockPagesForTransfer @ 0x14027C704 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14027C8E0 (VslpUnlockPagesForTransfer.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslStartSecureProcessor(ULONG a1, __int64 a2)
{
  PHYSICAL_ADDRESS *PoolWithTag; // rax
  PHYSICAL_ADDRESS *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // edi
  _QWORD v9[10]; // [rsp+30h] [rbp-128h] BYREF
  _QWORD v10[10]; // [rsp+80h] [rbp-D8h] BYREF
  char v11[8]; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v12; // [rsp+D8h] [rbp-80h]
  __int64 v13; // [rsp+E0h] [rbp-78h]

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
  result = VslpLockPagesForTransfer((__int64)v10, v7 - 384, 0x8040u, 2, 2);
  if ( (int)result >= 0 )
  {
    v5[1] = (PHYSICAL_ADDRESS)v10[0];
    v5[2] = (PHYSICAL_ADDRESS)v10[7];
    v5[3] = MmGetPhysicalAddress(*(PVOID *)(a2 + 176));
    v8 = VslpLockPagesForTransfer((__int64)v9, (__int64)v5, 0x100u, 0, 0);
    if ( v8 >= 0 )
    {
      v12 = v9[0];
      v13 = v9[7];
      v8 = VslpEnterIumSecureMode(2u, 2LL, 0, (__int64)v11);
      VslpUnlockPagesForTransfer((__int64)v9);
    }
    VslpUnlockPagesForTransfer((__int64)v10);
    ExFreePoolWithTag(v5, 0);
    return (unsigned int)v8;
  }
  return result;
}
