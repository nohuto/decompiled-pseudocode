/*
 * XREFs of PspIumFreePartitionState @ 0x1403093BC
 * Callers:
 *     PsDispatchIumService @ 0x1403086B4 (PsDispatchIumService.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     MmFreeSecureKernelPages @ 0x1402DD3AC (MmFreeSecureKernelPages.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PspIumFreePartitionState(unsigned int *P)
{
  signed __int64 v2; // rax
  unsigned int v3; // eax
  __int64 Object; // [rsp+30h] [rbp-20h] BYREF
  __int64 v5; // [rsp+38h] [rbp-18h] BYREF
  __int64 *v6; // [rsp+40h] [rbp-10h]

  Object = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v2 = *((_QWORD *)P + 2);
  if ( v2 )
  {
    HIDWORD(Object) = 0;
    v6 = &v5;
    v5 = (__int64)&v5;
    LOWORD(Object) = 1;
    BYTE2(Object) = 6;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)P + 2, (signed __int64)&Object, v2) )
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
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
