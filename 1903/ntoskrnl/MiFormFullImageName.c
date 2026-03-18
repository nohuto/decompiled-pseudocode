/*
 * XREFs of MiFormFullImageName @ 0x140745D48
 * Callers:
 *     MiResolveImageReferences @ 0x14070EE20 (MiResolveImageReferences.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlAppendStringToString @ 0x14071B640 (RtlAppendStringToString.c)
 */

__int64 __fastcall MiFormFullImageName(unsigned __int16 *a1, const STRING *a2, STRING *a3)
{
  unsigned __int16 v4; // r9
  char *PoolWithTag; // rax
  __int64 result; // rax

  v4 = a2->Length + 2 + *a1;
  a3->MaximumLength = v4;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v4, 0x54446D4Du);
  a3->Buffer = PoolWithTag;
  if ( PoolWithTag )
  {
    a3->Length = *a1;
    memmove(PoolWithTag, *((const void **)a1 + 1), *a1);
    if ( RtlAppendStringToString(a3, a2) >= 0 )
    {
      result = 1LL;
      *(_WORD *)&a3->Buffer[2 * ((unsigned __int64)a3->Length >> 1)] = 0;
      return result;
    }
    ExFreePoolWithTag(a3->Buffer, 0);
  }
  return 0LL;
}
