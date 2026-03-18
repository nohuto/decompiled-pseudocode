/*
 * XREFs of CcCreatePartition @ 0x1401902E0
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14000D700 (CcInitializeCacheMapEx.c)
 *     CcInitializeCacheManager @ 0x140A03BC8 (CcInitializeCacheManager.c)
 * Callees:
 *     CcInitializePartition @ 0x140190334 (CcInitializePartition.c)
 *     CcDeletePartition @ 0x14027EC20 (CcDeletePartition.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
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
