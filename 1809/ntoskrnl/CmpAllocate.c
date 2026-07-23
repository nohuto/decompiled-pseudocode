/*
 * XREFs of CmpAllocate @ 0x1405A82D0
 * Callers:
 *     CmpCreateHive @ 0x1405A7574 (CmpCreateHive.c)
 *     CmpCreateEmptyHiveClone @ 0x1407F77D8 (CmpCreateEmptyHiveClone.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     CmpClaimGlobalQuota @ 0x1405A8334 (CmpClaimGlobalQuota.c)
 *     CmpReleaseGlobalQuota @ 0x1405FC668 (CmpReleaseGlobalQuota.c)
 */

PVOID __fastcall CmpAllocate(SIZE_T NumberOfBytes, char a2, ULONG a3)
{
  unsigned int v4; // ebx
  PVOID PoolWithTag; // rdi

  v4 = NumberOfBytes;
  if ( !(unsigned __int8)CmpClaimGlobalQuota(NumberOfBytes) )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a2 != 0 ? PagedPoolCacheAligned : PagedPool), v4, a3);
  if ( !PoolWithTag )
    CmpReleaseGlobalQuota(v4);
  return PoolWithTag;
}
