/*
 * XREFs of ObpRefillWorkItemFreeList @ 0x14089F864
 * Callers:
 *     ObpPushRefDerefInfo @ 0x14089F64C (ObpPushRefDerefInfo.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

_SLIST_ENTRY *ObpRefillWorkItemFreeList()
{
  __int64 v0; // rbx
  _SLIST_ENTRY *result; // rax

  v0 = 100LL;
  do
  {
    result = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xB0uLL, 0x7452624Fu);
    if ( result )
      result = RtlpInterlockedPushEntrySList(&ObpWorkItemFreeList, result);
    --v0;
  }
  while ( v0 );
  return result;
}
