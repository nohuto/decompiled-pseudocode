/*
 * XREFs of EtwpAllocGuidEntry @ 0x140666C54
 * Callers:
 *     EtwpAddGuidEntry @ 0x1406669DC (EtwpAddGuidEntry.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpFreeSecurityDescriptor @ 0x1405C561C (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1405C5658 (EtwpGetSecurityDescriptorByGuid.c)
 *     ObLogSecurityDescriptor @ 0x1405C7810 (ObLogSecurityDescriptor.c)
 */

char *__fastcall EtwpAllocGuidEntry(__int64 a1, unsigned int *a2)
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
    *(_OWORD *)(v5 + 40) = *(_OWORD *)a2;
    *((_QWORD *)v5 + 8) = v5 + 56;
    *((_QWORD *)v5 + 7) = v5 + 56;
    *((_QWORD *)v5 + 3) = v5 + 16;
    *((_QWORD *)v5 + 2) = v5 + 16;
    *((_QWORD *)v5 + 52) = 0LL;
    *((_QWORD *)v5 + 51) = 0LL;
    *((_QWORD *)v5 + 49) = a1;
    EtwpGetSecurityDescriptorByGuid(a2, &Src);
    if ( (int)ObLogSecurityDescriptor((char *)Src, (_QWORD *)v5 + 9, 1u) < 0 )
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
