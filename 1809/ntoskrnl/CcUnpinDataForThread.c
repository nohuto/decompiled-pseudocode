/*
 * XREFs of CcUnpinDataForThread @ 0x1407E9A60
 * Callers:
 *     <none>
 * Callees:
 *     CcUnpinFileDataEx @ 0x140020910 (CcUnpinFileDataEx.c)
 *     ExReleaseResourceForThreadLite @ 0x140111420 (ExReleaseResourceForThreadLite.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CcUnpinData @ 0x1405DFDF0 (CcUnpinData.c)
 */

void __stdcall CcUnpinDataForThread(PVOID Bcb, ERESOURCE_THREAD ResourceThreadId)
{
  char *v2; // rbx
  PVOID *i; // rdi

  v2 = (char *)Bcb;
  if ( ((unsigned __int8)Bcb & 1) != 0 )
  {
    v2 = (char *)((unsigned __int64)Bcb & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_9:
    LOBYTE(ResourceThreadId) = 1;
    CcUnpinFileDataEx(v2, ResourceThreadId, 0);
    return;
  }
  if ( *(_WORD *)Bcb != 762 )
  {
    ExReleaseResourceForThreadLite((PERESOURCE)((char *)Bcb + 72), ResourceThreadId);
    goto LABEL_9;
  }
  for ( i = (PVOID *)((char *)Bcb + 16); *i; ++i )
    CcUnpinData(*i);
  ExFreePoolWithTag(v2, 0);
}
