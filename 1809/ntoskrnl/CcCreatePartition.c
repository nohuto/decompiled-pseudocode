/*
 * XREFs of CcCreatePartition @ 0x14018A53C
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400AC030 (CcInitializeCacheMapEx.c)
 *     CcInitializeCacheManager @ 0x1409B06D8 (CcInitializeCacheManager.c)
 * Callees:
 *     CcInitializePartition @ 0x14018A590 (CcInitializePartition.c)
 *     CcDeletePartition @ 0x14026B0A0 (CcDeletePartition.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
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
