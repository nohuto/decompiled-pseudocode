/*
 * XREFs of CmpAllocate @ 0x14065EE10
 * Callers:
 *     CmpCreateHive @ 0x14065E124 (CmpCreateHive.c)
 *     CmpCreateEmptyHiveClone @ 0x14082F328 (CmpCreateEmptyHiveClone.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     CmpReleaseGlobalQuota @ 0x14062E354 (CmpReleaseGlobalQuota.c)
 *     CmpClaimGlobalQuota @ 0x14065EE74 (CmpClaimGlobalQuota.c)
 */

PVOID __fastcall CmpAllocate(SIZE_T NumberOfBytes, char a2, ULONG a3)
{
  unsigned int v4; // ebx
  PVOID PoolWithTag; // rdi

  v4 = NumberOfBytes;
  if ( !(unsigned __int8)CmpClaimGlobalQuota() )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a2 != 0 ? PagedPoolCacheAligned : PagedPool), v4, a3);
  if ( !PoolWithTag )
    CmpReleaseGlobalQuota(v4);
  return PoolWithTag;
}
