/*
 * XREFs of CcCreatePartition @ 0x14018A69C
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400ABF90 (CcInitializeCacheMapEx.c)
 *     CcInitializeCacheManager @ 0x1409B16D8 (CcInitializeCacheManager.c)
 * Callees:
 *     CcInitializePartition @ 0x14018A6F0 (CcInitializePartition.c)
 *     CcDeletePartition @ 0x14026B390 (CcDeletePartition.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

void *CcCreatePartition()
{
  PVOID PoolWithTag; // rax
  void *v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x72506343u);
  v1 = PoolWithTag;
  if ( PoolWithTag && !(unsigned __int8)CcInitializePartition(PoolWithTag) )
  {
    CcDeletePartition(v1);
    return 0LL;
  }
  return v1;
}
