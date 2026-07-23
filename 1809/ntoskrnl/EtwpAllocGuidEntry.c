/*
 * XREFs of EtwpAllocGuidEntry @ 0x1405C1C8C
 * Callers:
 *     EtwpAddGuidEntry @ 0x1405C1A0C (EtwpAddGuidEntry.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpFreeSecurityDescriptor @ 0x1405C6658 (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1405C7050 (EtwpGetSecurityDescriptorByGuid.c)
 *     ObLogSecurityDescriptor @ 0x1405CAE70 (ObLogSecurityDescriptor.c)
 */

char *__fastcall EtwpAllocGuidEntry(__int64 a1, _OWORD *a2)
{
  char *result; // rax
  char *v5; // rbx
  void *Src; // [rsp+40h] [rbp+18h] BYREF

  result = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1A8uLL, 0x47777445u);
  v5 = result;
  if ( result )
  {
    memset(result, 0, 0x1A8uLL);
    *((_QWORD *)v5 + 4) = 1LL;
    *(_OWORD *)(v5 + 40) = *a2;
    *((_QWORD *)v5 + 8) = v5 + 56;
    *((_QWORD *)v5 + 7) = v5 + 56;
    *((_QWORD *)v5 + 3) = v5 + 16;
    *((_QWORD *)v5 + 2) = v5 + 16;
    *((_QWORD *)v5 + 52) = 0LL;
    *((_QWORD *)v5 + 51) = 0LL;
    *((_QWORD *)v5 + 49) = a1;
    EtwpGetSecurityDescriptorByGuid(a2, &Src);
    if ( (int)ObLogSecurityDescriptor(Src) < 0 )
    {
      ExFreePoolWithTag(v5, 0);
      v5 = 0LL;
    }
    EtwpFreeSecurityDescriptor(&Src);
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v5 + 49) + 4112LL));
    return v5;
  }
  return result;
}
