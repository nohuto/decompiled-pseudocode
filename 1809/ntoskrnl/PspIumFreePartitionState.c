/*
 * XREFs of PspIumFreePartitionState @ 0x1402EBA54
 * Callers:
 *     PsDispatchIumService @ 0x1402EAD84 (PsDispatchIumService.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     MmFreeSecureKernelPages @ 0x1402C3324 (MmFreeSecureKernelPages.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall PspIumFreePartitionState(unsigned int *P)
{
  signed __int64 v1; // rax
  unsigned int v3; // eax
  __int16 v4; // [rsp+30h] [rbp-28h] BYREF
  char v5; // [rsp+32h] [rbp-26h]
  int v6; // [rsp+34h] [rbp-24h]
  _QWORD v7[4]; // [rsp+38h] [rbp-20h] BYREF

  v1 = *((_QWORD *)P + 2);
  if ( v1 )
  {
    v6 = 0;
    v4 = 1;
    v5 = 6;
    v7[1] = v7;
    v7[0] = v7;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)P + 2, (signed __int64)&v4, v1) )
      KeWaitForSingleObject(&v4, Executive, 0, 0, 0LL);
  }
  MmUnlockPages((PMDL)P + 2);
  v3 = P[1];
  if ( v3 )
  {
    memmove((void *)(*((_QWORD *)P + 20) + 48LL + 8LL * P[39]), P + 6, 8LL * v3);
    P[39] += P[1];
  }
  MmFreeSecureKernelPages(*((_QWORD *)P + 20), 0);
  ObfDereferenceObject(*((PVOID *)P + 1));
  ExFreePoolWithTag(P, 0);
}
