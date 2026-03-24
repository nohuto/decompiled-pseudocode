/*
 * XREFs of ObpRefillWorkItemFreeList @ 0x1408635C4
 * Callers:
 *     ObpPushRefDerefInfo @ 0x1408633B4 (ObpPushRefDerefInfo.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401C5410 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

struct _SLIST_ENTRY *ObpRefillWorkItemFreeList()
{
  __int64 v0; // rbx
  struct _SLIST_ENTRY *result; // rax

  v0 = 100LL;
  do
  {
    result = (struct _SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xB0uLL, 0x7452624Fu);
    if ( result )
      result = RtlpInterlockedPushEntrySList(&ObpWorkItemFreeList, result);
    --v0;
  }
  while ( v0 );
  return result;
}
